#include <iostream>

using namespace std;

int M, D;

int main() {
    cin >> M >> D;

    //4,6,9,11
    // Please write your code here.
    if(M>=13 || D>=32) cout<<"No"; // 터무니없는 조건 제외
    else if(M==2){
        if(D>28) cout<<"No";
    }
    else if(M == 4|| M==6 || M==9 || M == 11){
        if(D>=31) cout<<"No";
    }
    else cout<<"Yes";

    return 0;
}