//use of class
#include<iostream>
using namespace std;
class person
{
 char name[30];
 int age;
 public:
   void getdata(void);
   void display(void);
};
//member functions down below of class person
void person :: getdata(void)
{
 cout<<"Enter Name: ";
 cin>>name;
 cout<<"Enter Age: ";
 cin>>age;
}
void person :: display(void)
{
 cout<<"\nName: "<<name;
 cout<<"\nAge: "<<age;
}
int main()
{
 person p;
 p.getdata();
 p.display();
 return 0;
}
