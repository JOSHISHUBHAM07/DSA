#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(3);
    l.pop_front();
    l.remove(1);
    l.insert(next(l.begin()),5);
    
}
