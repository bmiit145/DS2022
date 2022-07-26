#include<iostream>
using namespace std;

int main(){
    int a[5];
    for(int i=0 ; i<5 ; i++){
        cout << "Enter the number of element of "<< (i+1) << ":: ";
        cin >> a[i];
    }
    cout << endl << endl << "All the element of Array" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<endl;
    }
       
    return 0;
}