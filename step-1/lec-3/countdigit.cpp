#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
    if(n == 0) {
        return 1;
    }    
    int count=0;
    while ((n!=0))
    {
        count++;
        n=n/10;
    }
    
    return count;
}

int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    
    cout<<"Number of Digit:"<<countdigit(num);
}