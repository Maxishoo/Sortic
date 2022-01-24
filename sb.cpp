#include "Sortic_hed.h"
void sb(vector <int> &b)
{
    if(b.size()>1)
    {
        int el_b=b[0];
        b[0]=b[1];
        b[1]=el_b;
    }
}
