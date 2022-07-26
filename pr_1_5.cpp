#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10,20,30,40}, ch, key;

    // cout << "Enter the All the Elements of array \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a[i];
    // }

    cout << "Enter the choice where you want to enter the elements:-\t";
    cin >> ch;

    cout << "Enter the element:-\t";
    cin >> key;

    if (a[4] != NULL)
    {
        cout << "Array is Full...\n";
    }
    else if (ch > 5)
    {
        cout<<"Your choice is out of array\n";
    }
    else
    {
        for (int i = 4; i > ch; i--)
        {
            a[i] = a[i-1];
        }
        a[ch] = key;
    }

    //display array

    cout<<"All element of array\n";

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}