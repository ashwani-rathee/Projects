//author:ashwani rathee
//date-19/12/19
//topic:Calculating Bhaskara
#include<stdio.h>
#include<math.h>

int main(void)
{
 double a,b,c;//declare var
 printf("Enter A,B,C(in their respective orders): ");
 scanf("%lf %lf %lf",&a,&b,&c);
 if(a == 0)
 {
  printf("Impossible to calculate bhaskara!!");
  printf("Division By Zero!!");
 }
 else
 {
  double delta;
  delta=pow(b,2)-4*a*c;//delta calculation which can shorten the length of prog
  if(delta<0)
   {
    printf("It's impossible to calculate bhaskara!!\n");
	  printf("There is no Real solution!\n");
   }
  else
   {
    double x1,x2;
    x1=(-b+sqrt(delta))/(2*a);//bhaskara calculation
    x2=(-b-sqrt(delta))/(2*a);// !!
    printf("X1 = %lf \n", x1);
    printf("X2 = %lf \n", x2);
   }
  }
 return 0;
 }
 
