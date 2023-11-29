//
// Created by kaiyu on 2023-11-29.
//

#include <iostream>
#include "scopr.h"
using namespace std;


int g = 10;
int foo();

int main1(){
    int g = 0;
    int gq = foo();


    printf("局部变量: %d, 全局变量: %d",g, gq);
    return 1;
}

int foo(){
    return g;
}