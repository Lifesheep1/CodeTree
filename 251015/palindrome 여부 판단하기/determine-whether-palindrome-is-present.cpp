#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string A;

bool isp(string &s){
    string a = s;
    reverse(a.begin(),a.end());
    if(s==a) return true;
    else return false;
}
int main() {
    cin >> A;

    // Please write your code here.
    if(isp(A)) {
        cout<<"Yes";
    }else cout<<"No";

    return 0;
}