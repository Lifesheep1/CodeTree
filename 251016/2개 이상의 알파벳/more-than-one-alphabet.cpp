#include <iostream>
#include <string>

using namespace std;

string A;
int cnt = 1;

int main() {
    cin >> A;

    // Please write your code here.
    for(int i=0; i<A.length()-1; i++){
        if(A.at(i) != A.at(i+1)){
            cnt++;
        }
    }
    if(cnt>=2) cout<<"Yes";
    else cout<<"No";

    return 0;
}