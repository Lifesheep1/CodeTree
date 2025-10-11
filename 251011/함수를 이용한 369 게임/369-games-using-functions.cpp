#include <iostream>

using namespace std;

bool has369(int x){
    while(x>0){
        int d = x % 10;
        if(d==3|| d==6 || d==9) return true;
        x/=10;
    }
    return false;
}
void f(int n,int m){
    int cnt = 0;
    for(int i =n; i<=m; i++){
        if(i%3 == 0 || has369(i)) cnt++;
    }
    cout<<cnt;
}
int main(){
    int a,b;
    cin>>a>>b;
    f(a,b);
    return 0;
}