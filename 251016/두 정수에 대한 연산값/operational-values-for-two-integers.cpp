#include <iostream>

using namespace std;

int a, b;

void A(int &a, int &b){
    if(a>b){
        a+=25;
        b*=2;
        cout<<a<<" "<<b;
    }
    else if(b>a){
        b+=25;
        a*=2;
        cout<<a<<" "<<b;
    }
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    A(a,b);

    return 0;
}