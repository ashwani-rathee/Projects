//author:ashwani rathee
//date:9-12-2019
#include<stdio.h>
int main(void)
{
 int r,c;
 printf("Enter Row Number and Column Number: ");
 scanf("%d %d",&r,&c);
 int arr[500][500];
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   {
    printf("Enter %d x %d element: ",i,j);
    scanf("%d",&arr[i][j]);
   }
 }
 printf("The 2D-Matrix is = \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",arr[i][j]);
   if(j==(c-1))
   {
    printf("\n");
   }
  }
 }
 return 0;
}
