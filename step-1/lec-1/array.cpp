#include<iostream>
using namespace std;

int main(){
    int array[10]={1,2,3,4,56,78,45,22,33,33};
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    array[5]=10000;
    cout<<"After Update"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
}