#include<iostream>
using namespace std;
int main(){
    int a[5] , total = 0;

    cout << "Enter the mark of 5 subject" << endl;
    for(int i = 0 ; i < 5; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        total = total + a[i];
    }
    float per = (total / 5) ;

    cout << "Sum of  mark is  " << total << endl;
    cout << "percebntage of  mark is " <<  per <<"%"<< endl;

    if (per > 90)
    {
        cout << "class is Distinction" << endl;
    }else if(per > 80){
        cout << "class is first class" << endl;
    }else if (per > 60)
    {
        cout << "class is second class" << endl;
    }else if (per > 40)
    {
        cout << "class is pass" << endl;
    }else
    {
        cout << "you are fail" <<endl;
    } 
    return 0;
}