#include <iostream>

using namespace std;

int n,a,b;

int main() {
    cin >> n;

    a = n/10;
    b = n%10;
    // Please write your code here.
    if(n % 2 ==0 && (a+b) % 5 ==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    

    return 0;
}