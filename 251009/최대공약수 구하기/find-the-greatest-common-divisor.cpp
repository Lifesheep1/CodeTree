#include <iostream>

using namespace std;

int n, m;
int gcd;

int main() {
    cin >> n >> m;

    // Please write your code here.
    for(int i=1; i<=n && i<=m; i++){
        if(n%i==0 && m%i==0){
            gcd = i;
        }
    }
    cout<<gcd;


    return 0;
}