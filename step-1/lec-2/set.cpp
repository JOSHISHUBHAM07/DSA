#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(654);
    auto it=s.find(2);
    if(it!=s.end()){
        cout<<*it<<endl;

    }
    s.erase(2);
    s.erase(s.lower_bound(2),s.upper_bound(4));



    // multiset
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(23);
    ms.erase(ms.find(2));

    // unordered list
    unordered_set<int>us;
    us.insert(56);


}