//p. 116 / ex. 1
//Програмата извежда колко пъти 'а' се среща в масив от символи
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Number Of Elements = ";
    cin>>n;
    char arr[n];
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'a'){
            counter++;
        }
    }
    cout<<"Count of 'a' = "<<counter;


    return 0;
}
