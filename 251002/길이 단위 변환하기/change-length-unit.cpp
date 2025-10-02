#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double ft = 30.48;
    double mi = 160934;

    cout<<fixed;
    cout.precision(1);

    cout<<"9.2ft = "<< (9.2 * ft)<<"cm\n";
    cout<<"1.3mi = "<< (1.3 * mi)<<"cm\n";
    
    return 0;
}