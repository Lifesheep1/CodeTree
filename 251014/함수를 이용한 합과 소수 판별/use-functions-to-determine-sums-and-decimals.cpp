#include <iostream>

using namespace std;

int a, b,z,x,y;
int cnt = 0;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}
bool isSum(int n){
    y = n/100;
    z = n/10;
    x = n%10;
    if((y+z+x)%2==0) return true;
    else return false;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    for(int i=a;i<=b;i++){
        if(isPrime(i) && isSum(i)) cnt++;
    }
    cout<<cnt;

    return 0;
}