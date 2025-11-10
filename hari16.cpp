#include<iostream>
using sample{
    int x;
    public:
    void setvalue(int x){
        this->x=x;
    }
    inline void display(){
        cout<<"value of x="<<x<<endl;
    }
};
int main(){
    sample s;
    s.setvalue(25);
    s.display();
    return 0;
}