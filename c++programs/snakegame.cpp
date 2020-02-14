//author:ashwani
//topic:snake game
//date:13-2
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
#include<random>
#include<ctime>
#include<cmath>
#include <unistd.h>
#include <termios.h>

//definition of keys
#define UP 65
#define DOWN 66
#define LEFT 68
#define RIGHT 67

//prototypes
int food_pos;
int getch();
void snake_onmove();
void init_board();
void print_board();

//standard namespace
using namespace std;
//defining getch() to not show the moves i have played
int getch() {
   struct termios oldtc;
   struct termios newtc;
   int ch;
   tcgetattr(STDIN_FILENO, &oldtc);
   newtc = oldtc;
   newtc.c_lflag &= ~(ICANON | ECHO);
   tcsetattr(STDIN_FILENO, TCSANOW, &newtc);
   ch=getchar();
   tcsetattr(STDIN_FILENO, TCSANOW, &oldtc);
   return ch;
}
//symbols for creating the arena
char horz='-';
char vert='|';

void init_board()
{
 //creation of board
 char board[64]=
 {
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ','<',
 };
 int counter=0;
 for(int i=0;i<=63;i++)
 {
  cout<<"|"<<setw(2)<<board[i]<<setw(2)<<"|";
  counter=counter+1;
  if(counter==8)
 {
  cout<<"|";
  cout<<endl;counter=0;
 };
};
}
void print_board(int changed_pos)
{
 char board[64]
{
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ',' ',
 ' ',' ',' ',' ',' ',' ',' ','<',
};
board[changed_pos]='*';
int counter=0;
cout << string( 33, horz ) << '\n';
for(int i=0;i<=63;i++)
{
 cout<<"|"<<setw(2)<<board[i]<<setw(2);
 counter=counter+1;
 if(counter==8)
 {
  cout<<"|";
  cout<<endl;counter=0;
 };

};cout << string( 33, horz ) << '\n';
 snake_onmove();
}
//

//creation of snake
void snake_onmove()
{
  char mymove;
  for(;;){
   mymove = getch();
      if(mymove== 'x')
          {   break;}}
 cin.get();
 int c = 0;
 while(1)
    {
        c = 0;
        switch((c=getch())) {
        case UP:
            cout << endl << "Up" << endl;//key up
            break;
        case DOWN:
            cout << endl << "Down" << endl;   // key down
            break;
        case LEFT:
            cout << endl << "Left" << endl;  // key left
            break;
        case RIGHT:
            cout << endl << "Right" << endl;  // key right
            break;
        default:
            cout << endl << "null" << endl;  // not arrow
            break;
        }
    }
}
//

//creation of food(random)
void randfood()
{
 random_device rd; // obtain a random number from hardware
 mt19937 eng(rd()); // seed the generator
 uniform_int_distribution<> distr(1, 64); // define the range// generate numbers
 food_pos=distr(eng);
 print_board(food_pos);
}
//

//score counter

//
//timer counter

//
//move counter

//
int main(int argc,char **argv)
{
 cout<<"Welcome to the snake game!!"<<endl;
 cout<<"Instructions of this game "<<endl;
 cout<<"1)MOve up left right daj using wasd respectibely"<<endl;
 cin.get();
 int movecounter=0;
 int scorecounter=0;
 for(int i=0;;i++)
 {
  randfood();
  movecounter+=1;
  scorecounter+=1;
  cout<<"Total No of Moves: "<<movecounter<<endl;
  cout<<"Total Score: "<<scorecounter<<endl;
  cin.get();
  printf("Press x to exit.\n\n");
  system("clear");
 }
 cin.get();
 system("clear");
 return 0;
}

