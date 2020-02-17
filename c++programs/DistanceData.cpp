//auhtor:ashwani
//topic:data additon
//17-2
#include<iostream>
using namespace std;
class Distance{
 int km;
 int m;
 static int c;
 public:
 void input()
 {
 cout<<"Enter in km";
 cin>>km;
 cout<<"Enter in m";
 cin>>m;
 }
 void display()
 {
  cout<<"KM: "<<km<<endl;
  cout<<"M: "<<m<<endl;
 }
 void setdata(int r,int s)
 {
  km=r;
  m=s;
  display();
 }
 Distance sum(Distance x,Distance y)
 {
  km=x.km+y.km;
  m=x.m+y.m;
 }
 Distance adds(Distance d2)
 {
  Distance t;
  t.km=km+d2.km;
  t.m=m+d2.m;
  return t;
 }
};
int main()
{
 Distance d1,d2,d3;
 d1.setdata(10,20);
 d2.input();
 d3.sum(d1,d2);
 d3.display();
 d3=d1.adds(d2);
 d3.display();
 return 0;
}
