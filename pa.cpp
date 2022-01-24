#include "header.h"

void pa(vector <int> &a, vector <int> &b){
    int count_a = a.size(), count_b = b.size();
    vector <int> del;
    if(count_b > 0){
        a[0] = b[0];
        for(int i = 1; i < count_b; i++){
            del.push_back(b[i]);
        }
        b = del;
    }
}
