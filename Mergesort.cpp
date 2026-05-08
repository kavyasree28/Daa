#include <iostream>
using namespace std;
void merge(int A[],int l,int m,int r)
{
   int i=l,j=m+1,k=0;
   int temp[r-l+1];
   while(i<=m&&j<=r)
   {
      if(A[i]<=A[j])
         temp[k++]=A[i++];
      else
         temp[k++]=A[j++];
   }
   while(i<=m)
      temp[k++]=A[i++];
   while(j<=r)
      temp[k++]=A[j++];
   for(i=l,k=0;i<=r;i++,k++)
      A[i]=temp[k];
}
void mergeSort(int A[],int l,int r)
{
   if(l<r)
   {
      int m=(l+r)/2;
      mergeSort(A,l,m);
      mergeSort(A,m+1,r);
      merge(A,l,m,r);
   }
}
int main()
{
   int n,A[50];
   cout<<"Enter no of elements:";
   cin>>n;
   cout<<"Enter elements:";
   for(int i=0;i<n;i++)
      cin>>A[i];
   mergeSort(A,0,n-1);
   cout<<"Sorted array after merge sort:";
   for(int i=0;i<n;i++)
      cout<<A[i]<<" ";
   return 0;
}
