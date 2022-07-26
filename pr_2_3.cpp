#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a;
    cin >> a;

    for (int i = 0;; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        cout <<endl<< a[i]; 
    }
    cout<<endl;
    
    return 0;
}