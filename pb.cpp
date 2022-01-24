#include "header.h"

void pb(vector <int> &a, vector <int> &b){
    int count_a = a.size(), count_b = b.size();
    vector <int> del;
    if(count_a > 0){
        b[0] = a[0];
        for(int i = 1; i < count_a; i++){
            del.push_back(a[i]);
        }
        a = del;
    }
}
