#include <iostream>
using namespace std;

int main()
{

    int total_ele, t_even = 0, t_odd = 0, t_zero = 0;

    cout << "\nEnter the total number of elements (Last index) :-\t";
    cin >> total_ele;

    int arr[total_ele];

    for (int i = 0; i < total_ele; i++)
    {
        cout << "\nEnter the element of " << (i + 1) << "\t\n";
        cin >> arr[i];
    }

    {
        // cout << "total element which has zero" << endl;
        for (int i = 0; i < total_ele; i++)
        {
            if (arr[i] == 0)
            {
                t_zero++;
            }
        }
        cout << "\nTotal number of element which has zero is\t" << t_zero << endl;
    }

    {
        cout << "\n\ttotal number odd element which has odd number \t" << endl;

        for (int i = 0; i < total_ele; i++)
        {
            if (arr[i] % 2 == 1)
            {
                cout << "ele of \t" << (i + 1) << "\t" << arr[i] << endl
                     << endl;
                t_odd++;
            }
        }
        cout << "\n\tTotal number of Odd element \t " << t_odd << endl;
    }
    
    {
        cout << "\n\ttotal number Even element which has odd number " << endl;

        for (int i = 0; i < total_ele; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << "ele of \t" << (i + 1) << "\t" << arr[i] << endl
                     << endl;
                t_even++;
            }
        }
        cout << "\n\tTotal number of Odd element \t " << t_even << endl;
    }

    // for (int i = 0; i < total_ele; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         t_zero++;
    //     }
    //     else if (arr[i] % 2 == 0)
    //     {
    //         t_even++;
    //     }
    //     else
    //     {
    //         t_odd++;
    //     }
    // }
}