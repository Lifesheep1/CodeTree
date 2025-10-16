#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[50];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout<< abs(arr[i])<<" ";
    }

    // Please write your code here.

    return 0;
}