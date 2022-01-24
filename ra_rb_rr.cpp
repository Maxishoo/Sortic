#include "Sortic_hed.h"
void ra(vector<int>& a)
{
   int swappi;
   int first=a[0];
   int l=a.size();
   if(l!=0 && l!=1)
   {
   for(int i=0;i<a.size()-1;i++)
   {
       //swappi=mass[l-i-1];
       a[i]=a[i+1];

   }
   a[l-1]=first;
   }
}
void rb(vector<int>& b)
{
   int swappi;
   int first=b[0];
   int l=b.size();
   if(l!=0 && l!=1)
   {
   for(int i=0;i<b.size()-1;i++)
   {
       //swappi=mass[l-i-1];
       b[i]=b[i+1];

   }
   b[l-1]=first;
   }
}
void rr(vector<int>& a, vector<int>& b)
{
    ra(a);
    rb(b);
}
