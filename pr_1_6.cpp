#include <iostream>
using namespace std;

int main()
{
    int total_ele;

    cout << "Enter the total number of elements (Last index) :-\t";
    cin >> total_ele;

    int arr[total_ele];

    for (int i = 0; i < total_ele; i++)
    {
    a:
        cout << "Enter the element of " << (i + 1) << "\t";
        cin >> arr[i];
        if (arr[i] < 0)
        {
            cout << "\t\t\tInvaild Input\t\t\t\n";
            goto a;
        }
    }


    cout << "\t\t\t Array \t\t\t" <<endl;;
    for (int i = 0; i < total_ele; i++)
    {
        cout << arr[i]<<endl;
    }
    

    return 0;
}
