#include <iostream>
using namespace std;

void print5stars(){
    for(int i=0; i<10; i++){
        cout<<"*";
    }
}
int main() {
    // Please write your code here.
    for(int i=0; i<5; i++){
        print5stars();
        cout<<"\n";
    }
    
    return 0;
}