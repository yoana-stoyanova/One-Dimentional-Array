//p. 116 / ex. 16
//Програмата извежда произведението на числата от редицата, които са кратни на 7
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while (n <= 2 || n >= 40){
        cout << "n = ";
        cin >> n;
    }

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pr = 1;
    for(int j = 0; j < n; j++){
        if(a[j] % 7 == 0){
            pr = pr * a[j];
        }
    }

    if(pr == 1){
        cout << "No";
    } else {
        cout << "product = " << pr;
    }


    return 0;
}
