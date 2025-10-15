#include <iostream>

using namespace std;

int Y, M, D;

bool yun(int n){
    if(n % 100 == 0 && n % 400 != 0 ) return false;
    if(n % 4 == 0) return true;
    else return false;
    
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if (M < 1 || M > 12 || D < 1 || D > 31) {
        cout << "-1";
        return 0;
    }
    if(bool(Y)){
        if(M==2){
            if(D>30) cout<< "-1";
            if(M==12 || M==1 || M==2) cout<<"Winter";
            else if(M>=3 && M<=5) cout<<"Spring";
            else if(M>=6 && M<=8) cout<<"Summer";
            else if(M>=9 && M<=11) cout<<"Fall";
            return 0;
        }
    }
    if (M == 2) {
        if (D > 28) {   // 2021년 2월은 28일까지
            cout << "-1";
            return 0;
        }
    }
    else if (M == 4 || M == 6 || M == 9 || M == 11) {
        if (D > 30) {
            cout << "-1";
            return 0;
        }
    }
    if(M==12 || M==1 || M==2) cout<<"Winter";
    else if(M>=3 && M<=5) cout<<"Spring";
    else if(M>=6 && M<=8) cout<<"Summer";
    else if(M>=9 && M<=11) cout<<"Fall";

    return 0;
}