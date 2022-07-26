#include<iostream>
using namespace std;
int main(){
    int a[10] , total = 0;

    cout << "Enter the all ten elements of an array" << endl;
    for(int i = 0 ; i < 10; i++){
        cin >> a[i];
    }


    for (int i = 0; i < 10; i++)
    {
        total = total + a[i];
    }

    cout << "Sum of an array is  " << total << endl;
    cout << "Avarage of an array is " << (total / 10) << endl;

    return 0;
}
