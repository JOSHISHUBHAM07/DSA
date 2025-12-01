// begin() points to first element, end() points AFTER last element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(18);
    v.emplace_back(9);


    vector<int> v2(5,100);  // 5 elements each = 100

    vector<int>copy=v2;

    cout<<v[0]<<" "<<v.at(1)<<'\n';

    for (auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    for (int x:v)  //range based for
        cout<<x<<" ";

    v.pop_back();    // remove last

    v.erase(v.begin()+1);   
    // erase one element

    v.erase(v.begin()+1,v.begin()+3);   // erase range [start, end) — end not included



    v.insert(v.begin(),300);// insert single element at begin

    v.insert(v.begin()+1,2,5); // insert two copies of 5 at pos 1
    v.insert(v.end(),copy.begin(),copy.end()); // insert entire other vector


    v.swap(v2); // swap contents

    v.clear();  // remove all

    bool empty =v.empty();  // check empty

    size_t n = v.size();    // size



}