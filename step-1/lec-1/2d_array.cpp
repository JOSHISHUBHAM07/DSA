#include<iostream>
using namespace std;

int main(){
    int array[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    array[2][3]=500;

    cout<<array[2][3];
    return 0;

    
}