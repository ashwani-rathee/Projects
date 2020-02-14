//author:ash
//topic:complex no non inline
//date:13-2
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class complex
{
 public:
  int real;
  int imag;
 void input();
 void display();
 void setdata(int r,int i);
};
void complex::input()
 {
  cout<<"enter the real part: ";
  cin>>real;
  cout<<"enter the imag part: ";
  cin>>imag;
 }
void complex::display()
 {
  cout<<"Real part: "<<real<<endl;
  cout<<"Imaginary part: "<<imag<<endl;
  cout<<"Complex no"<<real<<"+i"<<imag<<endl;
 }
void complex::setdata(int r,int i)
 {
  real=r;
  imag=i;
  display();
 }
int main()
{
 complex case1;
 case1.input();
 case1.display();
 case1.setdata(3,4);
 return 0;
}
