#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "sen khod ra vared konid: ";
    cin >> age;
    if(age >= 0){
        if(age < 10)
            cout << "koodak";
        else{
            if(age < 18)
                cout << "nojavan";
            else{
                if(age < 30)
                    cout << "javan";
                else{
                    if(age < 50)
                        cout << "mianasal";
                    else
                        cout << "pir";
                }
            }
        }
    }
    else
        cout << "vorudi namotabar";
    return 0;
}
