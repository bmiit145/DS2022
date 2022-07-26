#include<iostream>
#include<string.h>
using namespace std;
int main(){


    int total_ele , key , count = 0;

    cout << "\nEnter the total number of elements (Last index) :-\t";
    cin >> total_ele;

    int arr[total_ele];

    for (int i = 0; i < total_ele; i++)
    {
        cout << "\nEnter the element of " << (i + 1) << "\t\n";
        cin >> arr[i];
    }

        
    cout << "\nEnter the value which you want to delete \t";
    cin >> key ;

    for (int i = 0; i < total_ele; i++)
    {
        if (arr[i] == key)
        {
            cout << "\nKey is Found At location " << (i+1)<<endl;
            count++;
            for (int j = i; j < total_ele; j++)
            {
                arr[i] = arr[i+1];
            }
            arr[total_ele -1 ] = NULL;   
        }
    }

     cout << "\nTotal Number of deleted element is " << count << endl;

    cout << "\n\n \t\tNew Array \t\t\n\n";

    for (int i = 0; i < total_ele; i++)
    {
        cout << "Ele of " << (i+1) << "\t " << arr[i] << endl;
    }
    return 0 ;
}