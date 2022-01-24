#include "header.h"

void rrb(vector <int> &b){
    int count = b.size();
    int point;
    vector<int> vec = b;
    if(count > 0){
        for(int i = 1; i < count; i = i + 2){
            b[i] = vec[i - 1];
            b[i + 1] = vec[i];
        }
        b[0] = vec[count - 1];
    }
}
