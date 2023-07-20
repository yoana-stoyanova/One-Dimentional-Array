//p. 116 / ex. 13
//Програмата извежда позицията на 1вото срещане на 'х' в редицата от числа
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n <= 1 || n >= 36){
        cout << "n = ";
        cin >> n;
    }
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cout << "x = ";
    cin >> x;

    bool meet = false;
    int j;
    for(j = 0; j < n; j++){
        if(a[j] == x){
            meet = true;
            break;
        }
    }
    if(meet==true){
        cout<<j+1;
    } else {
        cout<<"No";
    }


    return 0;
}
