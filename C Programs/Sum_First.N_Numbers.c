#include<stdio.h>
//author:ashwani rathee
//date-9-12-2019
int main(void)
{
 int n,count,sum=0;
 printf("Enter the Last Term: ");
 scanf("%d",&n);
 for(int count=1,count<=n,count++);
 {
  sum=sum+count;
 }
 printf("Sum of First %d numbers:%d",n,sum);
 return 0;
}
