#include <iostream>
using namespace std;

int main()
{
    string a;
    int len = 0 , check = 0 ;
    cout << "\tEnter the Any string" << endl;
    cin >> a;

    len = a.length();

    for (int i = 0; i < len; i++)
    {
        if (a[i] != a[len-1-i])
        {
            cout << "\n GIven string is not palindrome \n";
            check = 1;
            break;
        }
    }
    if (check !=1)
    {
        cout << "\nGiven string is palindrome\n";
    }
    



    


    return 0;
}