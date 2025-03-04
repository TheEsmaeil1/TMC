#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "adad ra vared konid: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0)
            sum += i;
    }
    cout << "majmooe adad haye zoj: " << sum;
    return 0;
}
