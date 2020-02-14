#include<math.h>
int factorial(const int &p)
{
 int fact=1;
 for (int i=1;i<=p;i++)
 {
 fact=fact*i;
 }
 return(fact);
};
int power(const int &r)
{
 int power=1;
 power=pow(r,r);
 return(power);
};
int power2(int &p,int &r)
{
 int total=1;
 for(int i=1;i<=r;i++)
 {
  total=total*p;
 }
 return(total);
}
/*bool check_prime(int r)
{
 bool b;
 for(int i=2;i<r;i++)
 {
  int d;
  d=r%i;
  if(d==0)
  {
   bool b = false;
  }
 }
 return b;
}*/
bool check_prime(int &r)
{
    if (r <= 1)
        return false;

    for (int i = 2; i < r; i++)
        if (r % i == 0)
            return false;

    return true;
}
int sumfn(int par[],int size)
{
 int sum=0;
 for(int i=0;i<=4;i++)
 {
 sum=sum+par[i];
 }
 return sum;
}
int avgfn(int par[],int size)
{
 int sum=0;
 for(int i=0;i<=4;i++)
 {
 sum=sum+par[i];
 }
 sum=sum/size;
 return sum;
}
float standarddevfn(int par[],int size,int mean)
{
 int cas[5];int sum=0;
 for(int i=0;i<=4;i++)
 {
  cas[i]=par[i]-mean;
  int sqcase[i];
  sqcase[i]=cas[i]*cas[i];

  sum=sum+sqcase[i];
 };
 int finalans=sum/4;
 return finalans;
}
void wordnum(int r)
{
 switch(r)
 {
  case 0: return zero;
  case 1: return one;
  case 2: return two;
  case 3: return three;
  case 4: return four;
  case 5: return five;
  case 6: return six;
  case 7: return seven;
  case 8: return eight;
  case 9: return nine;
 }
}
void armstrongnum()
{


}
void leadernum()
{

}
void strongnum()
{


}
