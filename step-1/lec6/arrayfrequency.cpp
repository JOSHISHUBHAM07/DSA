#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int hash[13]={0};
    for (int i = 0; i < n; i++)
    {
        /* code */
        hash[arr[i]]+=1;
    }
    

    int q;
    cin>>q;
    while (q--){
        int number;
        cin>>number;

        cout<<hash[number]<<endl;
    }
    return 0;

    
}