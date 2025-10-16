#include <iostream>

using namespace std;

int a, b;

int main() {
    cin >> a >> b;

    // Please write your code here.
    if(a>b){
        b+=10;
        a*=2;
        cout<<a<<" "<<b;
    }
    else if(b>a){
        a+=10;
        b*=2;
        cout<<a<<" "<<b;
    }

    return 0;
}