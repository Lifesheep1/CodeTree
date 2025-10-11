#include <iostream>

using namespace std;

int a, b;
int x,y;
int cnt = 0;
void f(int n,int m){
    for(int i=n;i<=m;i++){
        for(int k=1;k<4;k++){
            if(i%3==0||i%10==3*k||i/10==3*k||i/100==3*k||i/1000==3*k||i/10000==3*k||i/100000==3*k||i/1000000==3*k){
                cnt+=1;
                break;
            }
        }
    }
    cout<<cnt;
}
int main() {
    cin >> a >> b;

    
    // Please write your code here.
    f(a,b);



    return 0;
}