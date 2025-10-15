#include <iostream>

using namespace std;

int M, D;

int main() {
    cin >> M >> D;

    //4,6,9,11
    // Please write your code here.
    if (M < 1 || M > 12 || D < 1 || D > 31) {
        cout << "No\n";
        return 0;
    }
    if (M == 2) {
        if (D > 28) {   // 2021년 2월은 28일까지
            cout << "No\n";
            return 0;
        }
    }
    else if (M == 4 || M == 6 || M == 9 || M == 11) {
        if (D > 30) {
            cout << "No\n";
            return 0;
        }
    }
    
    else cout<<"Yes";

    return 0;
}