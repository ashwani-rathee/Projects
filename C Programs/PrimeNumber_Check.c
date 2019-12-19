//author:ashwani rathee
//date:19/12/19
//topic:prime no check

#include<stdio.h>
#include<math.h>

int main(void)
{
 int n,i,flag=0;//first creation of imp flags took place here 
 printf("Enter The Number that needs to be checked: ");
 scanf("%d",&n);
 //even though it works as i understand it but it seems to be pretty slow to me 
 for(i=2;i<=n/2;++i)
 {
  if(n%i == 0)
  {
   flag=1;//flag point opens in case any of number is divisible by the n among i 
   break;
  }
 }
 //exception case of n=1
 if(n==1)
 {
  printf("1 is neither prime nor composite number");
 }
 else
 {
  if(flag == 0)
   printf("%d is a prime number",n);
  else
   printf("%d is not a prime number",n);
 }
 return 0;
}
