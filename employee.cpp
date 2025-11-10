#include<iostream>
#include<string>
using namespace std;
class employee
{
    public:
    int empID;
    string name;
    float salary;
    //member function define inside the class 
    void set_employee(int id,string nm,float s)
    {
        empID=id;
        name=nm;
        salary=s;
    }
    //member function declaration (to be define outside)
    void display_employee();
};
// function defined outside class using space resolution
void employee::display_employee()
{
    cout<<"employee ID:"<<empID
    <<"name:"<<name
    <<",salary: RS."<<salary<<endl;
}
int main()
{
employee e1,e2;
// call function defined inside class
e1.set_employee(101,"ravi",50000.75);
e2.set_employee(102,"priya",62000.50);
//call function defined outside class 
e1.display_employee();
e2.display_employee();
return 0;
}