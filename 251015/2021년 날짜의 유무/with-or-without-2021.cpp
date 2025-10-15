#include <iostream>

using namespace std;

int M, D;

int main() {
    cin >> M >> D;

    //4,6,9,11
    // Please write your code here.
    if(M>12 || D>=32) cout<<"No"; return 0; // 터무니없는 조건 제외
    if(M==2){
        if(D>=29) cout<<"No";
        return 0;
    }
    else if(M == 4|| M==6 || M==9 || M == 11){
        if(D>=31) cout<<"No";
        return 0;
    }
    
    else cout<<"Yes";

    return 0;
}