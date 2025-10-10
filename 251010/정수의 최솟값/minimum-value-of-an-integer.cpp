#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;
int result;

void aa(int a, int b, int c){
    result = min({a,b,c});
    cout<<result;
}
int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    aa(a,b,c);


    return 0;
}