#include <iostream>

using namespace std;

int n, m;
void swap(int &n, int &m){
    int tmp = n;
    n = m;
    m=tmp;
    cout<<n<<" "<<m;
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    swap(n,m);

    return 0;
}