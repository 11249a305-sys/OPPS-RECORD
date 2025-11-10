#include<iostream>
#include<csingle>
#include<cstdlib>
using namespace std;
void signalhandler(int signum){
    cout<<"\ninterrupt signal ("<<signum<<")received.\n";
    exit(signum);
}
int main(){
    single(sigint,signalhandler);
    while (1){
        cout<<"running"...press ctrl+c to stop.\n";
        for (volatile  int i=0;i<100000000;++i);
    }
        return 0;
    }