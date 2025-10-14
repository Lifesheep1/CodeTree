#include <iostream>

using namespace std;

int a, b;
int cnt;

bool onj(int n){
    if(n%2 ==0 || n%10 ==5 || (n%3 == 0 && n %9 != 0)) return true;
    else return false;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    for(int i=a; i<=b; i++){
        if(!onj(i)) cnt++;
    }
    cout<<cnt;


    return 0;
}