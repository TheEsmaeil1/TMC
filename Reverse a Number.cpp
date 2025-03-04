#include <iostream>
using namespace std;
int main(){
    int num, rev = 0;
    cout << "adad ra vared konid: ";
    cin >> num;
    while(num != 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    cout << "adad be surat makoos: " << rev;
    return 0;
}
