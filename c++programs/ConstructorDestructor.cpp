//auhtor:ashwani
//topic:namespace
//date:19-2
#include<iostream>
using namespace std;

class complex1
{
 private:
	int real;//2  bytes will be allocated
	int imag;//2  bytes will be allocated
 public:
 	void input(int i);
 	void display(int i);
 	void input();
 	void display();
 	complex1()//default constructor
 	{
 		cout<<"I am constructor"<<endl;
 		real=0;imag=0;
 	}
 	complex1(int a,int b)//parametrized construcotr
 	{   cout<<"I am constructor"<<endl;
 		real=a;
 		imag=b;
 	}
 	~complex1()
 	{
 		cout<<"I am Destructor";
 	}
};
// void complex1::input(int i)
// {
//  cout<<"Input For OBJ C["<<i+1<<"]:"<<endl;
//  cout<<"Enter Real: ";
//  cin>>real;
//  cout<<"Enter Imag: ";
//  cin>>imag;
// }
// void complex1::display(int i)
// {
//  cout<<"Output For OBJ C["<<i+1<<"]:"<<endl;
//  cout<<"Real Part: "<<real<<endl;
//  cout<<"Imag Part: "<<imag<<endl;
// }
void complex1::input()
{
 cout<<"Enter Real: ";
 cin>>real;
 cout<<"Enter Imag: ";
 cin>>imag;
}
void complex1::display()
{
 cout<<"Real Part: "<<real<<endl;
 cout<<"Imag Part: "<<imag<<endl;
}
int main()
{ //complex1();anonymous objects and for that obj real and imag
  //constructor called implicityly and destructor runs no matter what
  //c1.mycomplex();//error
  // complex1 c1;
  // {
  // 	complex1 c2;
  // }
  // complex1 c1;
  // c1.input();
  // c1.display();
  // complex1 c2(3,4);
  // c2.display();
  // cout<<"Hello"<<endl;
  // int a[10];//array
  // complex1 C[10];//10 objects can be creatd//array of objects
  //stored together in memory location
  //total bytes stored:40 bytes
/*  for(int i=0;i<=9;i++)
  {
  	C[i+1].input(i);
  }
  for(int i=0;i<=9;i++)
  {
  	C[i+1].display(i);
  }
*/  
  // constructor is a  special function that is used to set
  // intial values to all the objects in private parts of an objects

  return 0;
}
