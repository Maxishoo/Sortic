#include "header.h"

void rra(vector <int> &a){
    int count = a.size();
    int point;
    vector<int> vec = a;
    if(count > 0){
        for(int i = 1; i < count; i = i + 2){
            a[i] = vec[i - 1];
            a[i + 1] = vec[i];
        }
        a[0] = vec[count - 1];
    }
}
/*void itc_rshift_list(vector <int> &mass){
    int count = mass.size();
    int point;
    vector<int> mass2 = mass;
    if(count != 0){
        for(int i = 1; i < count; i = i + 2){
            mass[i] = mass2[i - 1];
            mass[i + 1] = mass2[i];
        }
        mass[0] = mass2[count - 1];
    }
}

void itc_lshift(vector <int> &mass){
    int count = mass.size();
    int point;
    vector<int> mass2 = mass;
    if(count != 0){
        for(int i = count - 2; i >= 0; i = i - 2){
            mass[i] = mass2[i + 1];
            mass[i - 1] = mass2[i];
        }
        mass[count - 1] = mass2[0];
    }
}*/
