#include<iostream>
using namespace std;
class Book {
    public:
      string title;
      string author;
      float price;
      void display() {
       cout<<"Title:"<<title
       <<",author"<<author
       <<",Price:rs,"<<price<<endl;
       }
};
   int main() {
     Book b1, b2;
     b1.title = "C++ Prog";
     b1.author = "Bjarne Stroustrup";
     b1.price = 750.40;
     b2.title = "Data Structures";
     b2.author = "Mark Allen Weiss";
     b2.price = 600.75;
     b1.display();
     b2.display();
     return 0;
}
