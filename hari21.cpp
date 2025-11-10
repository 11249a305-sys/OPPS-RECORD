#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    try{
        if(b==0)
        throw"division by zero error!";
    cout<<"result="<<a/b<<endl;
    }catch(const char*msg){
        cout<<msg<<endl;
    }
    return 0;
}