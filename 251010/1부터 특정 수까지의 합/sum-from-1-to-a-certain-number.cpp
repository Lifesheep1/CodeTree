#include <iostream>

using namespace std;

int N;
int sum = 0;
int result;
void xx(int a){
    for(int i=1; i<=a; i++){
        sum += i; // 1부터의 합
    }
    result = sum/10;
    cout<<result;
}

int main() {
    cin >> N;

    // Please write your code here.
    xx(N);


    return 0;
}