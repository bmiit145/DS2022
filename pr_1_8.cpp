#include<iostream>
using namespace std;
int main(){


    int total_ele , location , key , count = 0;;

    cout << "\nEnter the total number of elements (Last index) :-\t";
    cin >> total_ele;

    int arr[total_ele];

    for (int i = 0; i < total_ele; i++)
    {
        cout << "\nEnter the element of " << (i + 1) << "\t\n";
        cin >> arr[i];
    }
    
    cout << "\nEnter the value which you want to find \t";
    cin >> key ;
    for (int i = 0; i < total_ele; i++)
    {
        if (arr[i] == key)
        {
            count++;
            cout << "\nKey is Found At location " << (i+1)<<endl;
        }
    }
    cout << "Total Number of founded element is " << count << endl;
    


    return 0;
}