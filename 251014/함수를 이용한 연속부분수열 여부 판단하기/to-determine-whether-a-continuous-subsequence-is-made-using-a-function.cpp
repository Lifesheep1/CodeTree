#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isSubarray(int a[], int n1, int b[], int n2){
    if(n2>n1) return false; // b가 더 길면 불가능
    for(int i=0; i<=n1-n2; i++){
        bool ok = true;
        for(int j=0; j<n2; j++){
            if(a[i+j] != b[j]){
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}
int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.

    bool ans = isSubarray(a,n1,b,n2);
    if(ans) cout<<"Yes";
    else cout<<"No";

    return 0;
}