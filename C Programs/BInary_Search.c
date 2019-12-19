//author:ashwani rathee
//date:19/12/19
//topic:Binary_Search
//Time Complexity:O(logN)
//Space Complexity:O(1)

#include<stdio.h>
#include<math.h>
//search function
int binarysearch(int a[],int n,int target)
{ 
 //function to find an element
  int low=0,high =n-1;
  while(low<=high)
  {
   int mid = (low + high)/2;
   if(a[mid]<target)
   {
    //a[mid]<target
    low=mid+1;
   }
   else if(a[mid] == target)
   {
    //a[mid] == target
    return mid;
   }
   else
   {
    //a[mid]>target
    high = mid-1;
   }
  }
 return -1;//if element not found in the ARRAY
}
int main(void)
{
 int n=5,found=-1,target=6;
 int a[]={1,2,3,4,5};//array already sorted in ascending order
 found=binarysearch(a,n,target);
 if(found==-1)
 {
  printf("Element not present in the ARRAY");
 }
 else
 {
  printf("Element is at index %d\n",found);
 }
 return 0;
}
//output
//will say element not present in the ARRAY
