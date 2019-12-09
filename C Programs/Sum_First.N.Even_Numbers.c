#include<stdio.h>
//author:ashwani rathee
//date:9-12-2019
int main(void)
{
 int n,sum=0;//don't forget to initialise this sum or it will return garbage
 printf("Enter a no:=");
 scanf("%d",&n);
 for(int i=0;i<=n;i=i+2)
 {
  sum=sum+i;
 }
 printf("The sum of first 'n' even no.s is %d",sum);
 return 0;
}
/*
//someone else's version but it works too apparently,i hv my doubts with it
#include<stdio.h>
int sum(int);

int main()
{
    int n;
    printf("Enter a no:=");
    scanf("%d",&n);
    printf("The sum of first 'n' even no.s is %d",sum(n));
    return 0;
}

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return(sum(n-1)+2*(n-1));
} 
*/
