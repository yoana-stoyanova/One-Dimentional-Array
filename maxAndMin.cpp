//p. 116 / ex. 18
//���������� ������� �������������� � ��������� �� ����������� � ���������� ������� �� ������
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n < 2 || n > 15){
        cout << "n = ";
        cin >> n;
    }

    double a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    double max = a[0];
    double min = a[0];

    for(int j = 1; j < n; j++){
        if(a[j] > max){
            max = a[j];
        }
        if(a[j] < min){
            min = a[j];
        }
    }

    cout << "product = " << max * min << endl;
    cout << "diff = " << max - min;

    return 0;
}
