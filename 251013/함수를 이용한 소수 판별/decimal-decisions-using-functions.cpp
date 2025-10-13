#include <iostream>

using namespace std;

int a, b;
int result = 0;

bool isPrime(int i){
    for(int j=2; j<i; j++){
        if(i % j == 0) return false;
    }
    return true;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    for(int i = a; i<=b; i++){
        if(isPrime(i)) result += i;
    }
    cout<<result;

    return 0;
}