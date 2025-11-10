#include <iostream>
using namespace std;
class patient
{
    public:
    int patient ID;
    string name;
    string disease;
    // function defined  inside the class
    void set patient (int id, string n, string d)
    {
        patient ID=id;
        name=n;
        disease=d;
    }
    //function declared inside, defined outside
    void show patient()
    };
    //function defined outside the class
    void patient :: show patient()
    {
        cout<<"patient ID:"<<patient ID
        <<",name:"<<name
        <<",disease:"<<disease<<endl;
    }
    int main()
    {
        patient p1,p2
        //using inside function to set details
        p1.set patient(301,"arjun","fever");
        p2.set patient(302,"meena","diabetes");
        //using outside function to display
        p1.show patient();
        p2.show paient();
        return 0;
    }
    