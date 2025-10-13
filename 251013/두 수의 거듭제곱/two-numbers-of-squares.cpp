#include <iostream>

using namespace std;

int a, b;
int ret = 1;
int main() {
    cin >> a >> b;

    // Please write your code here.
    for(int i = 0; i<b; i++){
        ret = ret * a;
    }
    cout<<ret;

    return 0;
}