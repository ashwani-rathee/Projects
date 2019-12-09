//author:ashwani rathee
//date:9-12-2019
#include<stdio.h>
int main(void)
{
 int n,i=1,sum=0;
 printf("Enter Last No: ");
 scanf("%d",&n);
 while(i<=n)
 {
 sum=sum+i*i;
 ++i;
 }
 printf("sum of squares till n: ",sum);
 return 0;
}
