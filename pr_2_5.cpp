#include <iostream>
using namespace std;

int main()
{
    string a;
    int space = 0;

    cout << "\n\t Enter the string \t\n";
    getline(cin, a);

    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i] == ' ')
        {
            space++;
        }
    }
    if (a[0] == ' ')
    {
        space--;
    }
    if (a[len-1] == ' ')
    {
        space--;
    }
    
    
    cout << "\n\t Total number of word is \t " << (space +1) << endl;
    return 0;
}