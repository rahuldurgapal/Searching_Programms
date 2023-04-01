#include<stdio.h>
int binary_search(int*, int ,int);
int main()
{
    int n,num,res;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n],i,l,m,r;
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
    printf("Enter the number that you want search\n");
     scanf("%d",&num);
    l=0,m=n-1;
    res= binary_search(arr,n,num);
    if(res==-1)
     printf("The number is not exsist in the array");
     
    else 
    printf("index value is %d",res);
   return 0;
}
int binary_search(int *arr, int n, int num)
{
    int l,m,r;
    l=0,m=n-1;
    while(l<=m){

    r=(l+m)/2;
   if(num==arr[r])
     return r;

  else if(num>arr[r])
    l=r+1;

  else if(num<arr[r])
   m=r-1;

    }
     return -1;
}
