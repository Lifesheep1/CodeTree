#include <iostream>

using namespace std;

int Y, M, D;

bool yun(int n){
    // 윤년 판별:
    // 100의 배수이면서 400의 배수가 아니면 윤년 아님
    if(n % 100 == 0 && n % 400 != 0 ) return false;
    // 그 외에 4의 배수면 윤년
    if(n % 4 == 0) return true;
    else return false;
    
}

int main() {
    cin >> Y >> M >> D;

    // 기본 범위 검사: 월 1~12, 일 1~31이 아니면 -1
    if (M < 1 || M > 12 || D < 1 || D > 31) {
        cout << "-1";
        return 0;
    }

    // 2월 검사: 윤년이면 29일 허용, 아니면 28일까지
    if (M == 2) {
        if (yun(Y)) {
            if (D > 29) { cout << "-1"; return 0; }
        } else {
            if (D > 28) { cout << "-1"; return 0; }
        }
    }
    // 4,6,9,11월은 30일까지
    else if (M == 4 || M == 6 || M == 9 || M == 11) {
        if (D > 30) { cout << "-1"; return 0; }
    }

    // 유효한 날짜면 계절 출력 (문제의 계절 기준 사용)
    if (M == 12 || M == 1 || M == 2) cout << "Winter";
    else if (M >= 3 && M <= 5) cout << "Spring";
    else if (M >= 6 && M <= 8) cout << "Summer";
    else if (M >= 9 && M <= 11) cout << "Fall";

    return 0;
}
