#include <iostream>
#include <string>
using namespace std;
int main()
{
   string space;
   int index;
   char T[100],P[100];
   int m=0,n=0;
   cout<<"Enter text:";
   cin.getline(T,100);
   cout<<"Enter pattern:";
   cin.getline(P,100);
   while(T[n]!='\0')
      n++;
   while(P[m]!='\0')
      m++;
   for(int i=0;i<=n-m;i++)
   {
      int j=0;
      while(j<m && P[j]==T[i+j])
         j++;
      if(j==m)
      {
         index=i;
      }
   }
   space=" ";
   cout<<T<<"\n";
   for(int i=0;i<index+1;i++)
   {
      for(int j=1;j<index;j++)
         cout<<space;
      cout<<P<<"\n";
   }
   cout<<"Pattern found at index"<<index;
   return 0;
}
