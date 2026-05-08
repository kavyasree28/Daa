#include <iostream>
using namespace std;
int main()
{
   int n,temp;
   cout<<"Enter number of elements:";
   cin>>n;
   int a[n];
   cout<<"Enter elements:";
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   for(int j=0;j<n-1;j++)
   {
      bool flag=false;
      for(int k=0;k<n-1-j;k++)
      {
         if(a[k]>a[k+1])
         {
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
            flag=true;
         }
      }
      if(!flag)
         break;
   }
   cout<<"Sorted array:";
   for(int i=0;i<n;i++)
   {
      cout<<a[i];
      cout<<endl;
   }
   return 0;
}
