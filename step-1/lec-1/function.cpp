#include<iostream>
using namespace std;

void print(){
    cout<<"Hey Shubham\n";
}

void printwithPara(const string &name){
    cout<<"Hello "<<name<<'\n';
}

int sum(int a,int b){
    return a+b;
}

void passByValue(int x){
    x+=5;
    cout<<"Inside passByValue :"<<x<<endl;
}

void passByRef(int &x){
    x+=5;
    cout<<"Inside passByRef :"<<x<<endl;
}

void modifyarray(int a[],int n){
    a[2]=1000;
}
int main(){
    print();
    printwithPara("Harsh");

    cout<<"Sum : "<<sum(10,5)<<endl;

    int a=15;

    passByValue(a);
    cout<<"After PassBy Value : "<<a<<'\n';

    passByRef(a);
    cout<<"After PassBy Ref : "<<a<<'\n';

    int array[3]={1,2,3};
    for (int i = 0; i < 3; i++)
    {
        cout<<array[i]<<endl;
    }
    modifyarray(array,3);
    cout<<"After Modification : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<array[i]<<endl;
    }

    


    
}