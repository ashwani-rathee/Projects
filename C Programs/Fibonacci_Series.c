//author:ashwani rathee
//date:19/12/19
//topic:fibonacci series
#include<stdio.h>
int fibonacci(int);//i myself don't know
int main()
{
 int n,i=0,res;//declaration of variables
 printf("Enter the no of Terms: ");
 scanf("%d",&n);
 printf("Fibonacci Series: \n");
 for(i=0;i<n;i++)
 {
  res=fibonacci(i);//call for the function of fibonacci
  printf("%d \n",res);//prints it
 }
 return 0;
}
int fibonacci(int n)
{
 //case of n = 0
 if(n==0)
 {
  return 0;
 }
 //case when n=1
 else if(n==1)
 {
  return 1;
 }
 //case for n>1
 else
 {
  return(fibonacci(n-1)+fibonacci(n-2));
 }
}
