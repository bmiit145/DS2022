#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int high_val;
    cout << "Enter the all element of an array" << endl;
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i];
    }

    for (int i = 5 ; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j] , a[j+1]);
            }
        }
        
    }   
    high_val = a[3];
    cout << "Second Highest value is \t " << high_val << endl;
    
    return 0;
}