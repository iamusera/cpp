//
// Created by kaiyu on 2023-11-29.
//

#include <iostream>
#include "refere.h"
using namespace std;


int main(){
    int cat = 10;
    int & ccat = cat;

    int *ipcat = & cat;
    int *ipccat = & ccat;

    printf("原值 %d,  引用%d \n", cat, ccat);
    cout << ipcat << "\n" << endl;
    cout << ipccat << "\n" << endl;

    cat += 1;
    printf("原值 %d,  引用%d \n", cat, ccat);
    int *iqpcat = & cat;
    int *iqpccat = & ccat;

    cout << iqpcat << "\n" << endl;
    cout << iqpccat << "\n" << endl;
    int a = 1;
    int b = a;

    int *c = & a;
    int *d = & b;
    cout << "c " << c << "\n" << endl;
    cout << "d " << d << "\n" << endl;
}