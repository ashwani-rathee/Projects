//author:ashwani rathee
//topic:complex no
//date:13-2
#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;
class complex
{
 public:
  int real;
  int imag;
 void input()
 {
  cout<<"enter the real part: ";
  cin>>real;
  cout<<"enter the imag part: ";
  cin>>imag;
 }
 void display()
 {
  cout<<"Real part: "<<real<<endl;
  cout<<"Imaginary part: "<<imag<<endl;
  cout<<"Complex no"<<real<<"+i"<<imag<<endl;
 }
 void setdata(int r,int i)
 {
  real=r;
  imag=i;
  display();
 }
 //way to add the the complex object members in
 //such a way that objects member value are not altered
 complex sum(complex case2)
 {
  complex t;
  t.real=real+case2.real;
  t.imag=imag+case2.imag;
  return t;
 }
 //
 int getreal()
 {
  return real;
 }
 int getimag()
 {
  return imag;
 }
 void adds(complex case1,complex case2)
 {
  real=case1.real+case2.real;
  imag=case1.imag+case2.imag;
 }
 double mod()
 {
  double d;
  d=sqrt(real*real+imag*imag);
  return d;
 }
};
int main()
{
 complex case1,case2,case3;
 cout<<"case1"<<endl;
 case1.input();
 case1.display();
 case1.setdata(3,4);
 cout<<"case2"<<endl;
 case2.input();
 case2.display();
 //case3 summationof case1 and case2
 cout<<"case3"<<endl;
 case3=case1.sum(case2);
 case3.display();
 cout<<"case1"<<endl;
 case1.display();
 cout<<"case2"<<endl;
 case2.display();
 //chinese are good at base objects that can used for making big stuff
 int a=case1.getreal();
 cout<<"\n"<<a<<"\n";
 int b=case1.getimag();
 cout<<"\n"<<b<<"\n";
 case3.adds(case1,case2);
 case3.display();
 double d=case3.mod();
 cout<<"\n"<<d<<"\n";
 return 0;
}
