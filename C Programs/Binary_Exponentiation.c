//author:ashwani rathee
//date:19/12/19
//topic:binary exponentiation

#include<stdio.h>

int main(void)
{
 int a,b,,n,ans=1;//for ans=a^b
 scanf("%d %d",&a,&b);//input of a and b
 if(a>0 && b>0)
 {
 for(int n=1;n<=b;n++)
 {
  ans=ans*a;//loop to multiple a by a till number of time it is multiplied is b.
 }
 printf("%d \n",ans);
 }
 else
  printf("Error Brother!!");//case of a<=0 || b<=0
 //it leaves many possiblities but the below one works well for most
 //better way to go about it!!
 /*
 	while(b>0)
	{
		if(b&1!=0)               // Checking if 'b' is odd.
			ans=ans*a;         // Multiplying 'ans' by 'a' if 'b' is odd.
		a=a*a;                  // Squaring 'a' every time.
		b=b>>2;                    //Dividing 'b' by 2.
	}
	printf("%d\n",ans);               //Printing 'ans'.
 */
 return 0;
}
