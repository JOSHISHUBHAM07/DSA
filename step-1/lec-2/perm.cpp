#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="143";
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));

    // Max_Element/Min_Element
    vector<int>v={1,5,2,66,3};
    auto mxIt=max_element(v.begin(),v.end());
    cout<<"Max= "<<*mxIt<<"at index"<<distance(v.begin(),mxIt)<<endl;

    
}