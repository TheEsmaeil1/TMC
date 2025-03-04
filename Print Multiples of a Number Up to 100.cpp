#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "adad zir 10 ra vared konid: ";
    cin >> num;
    if(num > 0 && num < 10){
        for(int i = num; i <= 100; i += num){
            cout << i << " ";
        }
    }
    else{
        cout << "vorudi namotabar";
    }
    return 0;
}
