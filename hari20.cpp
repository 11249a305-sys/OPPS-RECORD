#include<iostream>
#include<fstream>
using namespace std;
 int main(){
    ofstream fout("data.txt");
    fout<<"hello,file handling in c++!";
    fout.close();
    ifstream fin("data.txt");
    string text;
    getline(fin,text);
    cout<<"file content:"<<text<<endl;
    fin.close();
    return 0;
 }