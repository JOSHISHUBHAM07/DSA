#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>mp;
    mp[1]="Shubham";
    mp.insert({2,"Hash"});
    auto it=mp.find(2);

    if(it!=mp.end()){
        cout<<it->first<<"==>"<<it->second<<endl;
    }
    for(auto &kv:mp){
        cout<<kv.first<<":"<<kv.second<<endl;

    }
    multimap<int,string>mm;
    mm.insert({1,"Shubham"});
    mm.insert({1,"Hs"});


    unordered_map<string,int> um;
    um["Hello"]=4;
    
    
}