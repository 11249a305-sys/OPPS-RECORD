#include<iostream>
using namespace std;
class Account {
    public:
    int accNo;
    string name;
    float balance;
    void display() {
        cout<<"Account No:"<<accNo
        <<",name:"<<name
        <<",balance:"<<balance<<endl;
    }
};
int main() {
    Account a1,a2;
    a1.accNo = 1001;
    a1.name = "hari";
    a1.balance = 25000.50;
    a2.accNo = 1002;
    a2.name = "ishu";
    a2.balance = 40000.75;
    a1.display();
    a2.display();
    return 0;
}