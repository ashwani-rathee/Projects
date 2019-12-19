//author:ashwani rathee
//date:19/12/19
//topic:factorial using recursion and declaring function

#include<stdio.h>
#include<conio.h>

int factorial(int);//idk

int main(void)
{
 int num,result;//var declare
 printf("Enter Number to find the its Factorial: ");
 scanf("%d",&num);
 //case of n<0
 if(num<0)
 {
  printf("Factorial of Negative Number is not possible");
 }
 //case n>=0
 else
 {
  result=factorial(num);
  printf("The Factorial of %d is %d. \n",num,result);
 }
}
//outside function which finds the sol which i think it is very slow...
int factorial(int num)
{
//as 0!=1 and 1!=1
 if(num == 0 || num == 1)
  {
   retrun 1;
  }
  //for n>1
  else
  {
   return(num*factorial(num-1));
  }
 }
 //we can use this or we can use for loop
 /*
 inside driver program
  declare i ans=1 and n
  ask for n and scan the n
  for (i=1;i<=n;i++)
  {  
   sum=sum*i;
  }
 print sum
*/
   
