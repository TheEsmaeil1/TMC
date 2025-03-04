#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cout << "adad ra vared konid: ";
    cin >> n;
    if(n < 2)
        isPrime = false;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime)
        cout << "adad aval ast";
    else
        cout << "adad aval nist";
    return 0;
}
