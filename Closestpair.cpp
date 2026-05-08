#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a,b,c,e,i,j,n;
   float x[20],y[20];
   float d,dist;
   cout<<"Enter number of points:";
   cin>>n;
   for(i=0;i<n;i++)
   {
      cout<<"Enter x"<<i+1<<"and y"<<i+1<<":";
      cin>>x[i]>>y[i];
   }
   d=99999;
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         dist=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
         d=min(d,dist);
         if(min(d,dist)==dist)
         {
            a=i;
            b=j;
         }
      }
   }
   cout<<"Minimum distance between the points("<<x[a]<<","<<y[a]<<")"<<"and"<<"("<<x[b]<<","<<y[b]<<")"<<":"<<d;
   return 0;
}
