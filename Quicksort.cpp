#include <iostream>
using namespace std;
int hoarePartition(int A[],int l,int r)
{
   int pivot=A[l];
   int i=l-1;
   int j=r+1;
   while(true)
   {
      do{i++;}while(A[i]<pivot);
      do{j--;}while(A[j]>pivot);
      if(i>=j)
         return j;
      swap(A[i],A[j]);
   }
}
void quickSort(int A[],int l,int r)
{
   if(l<r)
   {
      int s=hoarePartition(A,l,r);
      quickSort(A,l,s);
      quickSort(A,s+1,r);
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
   quickSort(A,0,n-1);
   cout<<"Sorted array after quick sort:";
   for(int i=0;i<n;i++)
      cout<<A[i]<<" ";
   return 0;
}
