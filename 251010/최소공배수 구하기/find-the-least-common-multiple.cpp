#include <iostream>

using namespace std;

int n, m;
int lcm,gcd;

int main() {
    cin >> n >> m;

    // Please write your code here.
    for(int i=1; i<=n && i<=m; i++){
        if(n%i==0 && m%i==0){
            gcd = i;
        }
        
    }
    lcm = (n * m)/gcd;

    cout<<lcm;
    

    return 0;
}