//author:ashwani rathee
//date:18/12/19
#include<stdio.h>
int main(void)
{ 
 int space,rows,k=o;//declares the spaces and rows
 printf("Enter No of Rows: );//ask for the no of rows
 scanf("%d",&rows);//scanning the no of the rows
 //declaring the loop the generate the space and '*'
 // point to be learnt that two increement or properties can defined after semicolon
 for(int i=1;i<=rows;++i,k=0)
 {
  //no  of spaces needed is rows-i
  for(space=1;space<=rows-i;++space)
  {
   printf(" ");
  }
  while(k!=2*i-1)
  {
   printf("*");
   ++k;
  }
   printf("\n");
 }
 return 0;
}
