#include "Sortic_hed.h"
void sa(vector <int> &a)
{
    if(a.size()>1)
    {
        int el_a=a[0];
        a[0]=a[1];
        a[1]=el_a;
    }
}
