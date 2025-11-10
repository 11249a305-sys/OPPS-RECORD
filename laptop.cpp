#include<iostream>
using namespace std;
class Laptop

{
    public:
    string brand;
    string processor;
    int ram;
    void display()
{
    cout <<"brand:"<<brand
    <<"processor:"<<processor
    <<",Ram:"<<ram<<"GB"<<end;
}
};
int main()
{
    Laptop 11,12;
    11.brand="Dell";
    11.processor="intel i5";
    11Ram=8;
    12.brand="HP";
    12.processor="AMD Ryzen 5";
    12.ram=16;
    11.display();
    12.display();
    return 0;
}