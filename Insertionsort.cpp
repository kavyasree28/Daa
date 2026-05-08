#include <iostream>
using namespace std;
int main()
{
   int n,i,j,v;
   cout<<"Enter number of elements:";
   cin>>n;
   int A[n];
   cout<<"Enter elements:";
   for(i=0;i<n;i++)
   {
      cin>>A[i];
   }
   for(i=1;i<n;i++)
   {
      v=A[i];
      j=i-1;
      while(j>=0 && A[j]>v)
      {
         A[j+1]=A[j];
         j=j-1;
      }
      A[j+1]=v;
   }
   cout<<"Sorted array:";
   for(i=0;i<n;i++)
      cout<<A[i]<<" ";
   return 0;
}
