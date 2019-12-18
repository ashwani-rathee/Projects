//author:ashwani rathee
//date:18/12/19
#include<stdio.h>
#include<math.h>

int main(void)
{
 int num;
 float sqr,temp;
 printf("Enter the Number: \n");
 scanf("%d",&num);
 if(num>=0)
 {
  printf("square root(%d) is %.3f\n",num,sqrt(num));
 }
 else 
   printf("square root of a negative no. is not possible\n");
 return 0;
}
