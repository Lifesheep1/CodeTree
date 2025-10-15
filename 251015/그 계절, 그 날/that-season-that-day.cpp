#include <iostream>

using namespace std;

int Y, M, D;

bool yun(int n){
    if(n%400 == 0) return true;
    if(n%100 == 0) return false;
    return (n%4 ==0);
}

bool validDate(int y, int m, int d){
    if(m<1 || m>12) return false;
    if(d<1) return false;

    int days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(m==2 && yun(y)){
        return d<=29;
    }
    return d<=days_in_month[m];
}

string seasonOf(int m){
    if (m == 12 || m == 1 || m == 2) return "Winter";
    if (m >= 3 && m <= 5) return "Spring";
    if (m >= 6 && m <= 8) return "Summer";
    return "Fall";
}
int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if(!validDate(Y,M,D)){
        cout<<"-1";
        return 0;
    }
    cout<<seasonOf(M);
    
    return 0;
}