//author:ashwani rathee
//date:16/1/20
//topic:matchstick game
#include<iostream>
#include<string>
using namespace std;
int main()
{ 
  char HORZ = '-';       
  char vert = '|';  
  cout << string( 40, HORZ ) << '\n';
  int n=21;
  string user;
  cout <<"\tThe Matchstick game"<< "\n";
  cout << string( 40, HORZ ) << '\n';
  cout<<"Enter Your Name: ";
  cin>>user;
  cout << string( 40, HORZ ) << '\n';
  cin.get();
  cout<<"Wazir Vs "<<user<<endl;
  cout << string( 40, HORZ ) << '\n';
  cout<<"Rules of this Game are: \n";
  cout<<"1)There are 21 Matchsticks in Total.\n";
  cout<<"2)User will have first turn.\n";
  cout<<"3)Players can only pick Matchsticks in no of 1 to 4 only.\n";
  cout<<"4)So the one who picks the last stick loses.\n";
  cout << string( 40, HORZ ) << '\n';
  for(int i=0;i<=n;i++)
  { 
    int a,b;
    cout << vert <<user<<": ";
    cin>>a;
    n=n-a;
    cout<<vert<<"wazir: "<<5-a<<endl;
    n=n-5+a;
    if(n==1)
     {
      cout << string( 40, HORZ ) << '\n'; 
      cout<<"No of Matchstick Now left is 1 only\n";
      cout << string( 40, HORZ ) << '\n';
      cout<<"So Computer Wins!!\n";
      break;
     }
  } 
  cin.get();
  cout << string( 40, HORZ ) << "\n";
 return 0;

}
