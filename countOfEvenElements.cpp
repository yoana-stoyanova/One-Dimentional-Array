//p. 116 / ex. 14
//Програмата извежда броя на четните числа от редицата цели числа
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n <= 2 || n >= 30){
        cout << "n = ";
        cin >> n;
    }

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int br = 0;
    for(int j = 0; j < n; j++){
        if(a[j] % 2 == 0){
            br++;
        }
    }

    cout << "br = "<<br;

    return 0;
}
