// program to stack
#include <iostream>
#define size 5
using namespace std;
class Stack1
{
private:
    int stack[size];
    int top;

public:
    Stack1()
    {
        top = 0;
    }
    void push(int item)
    {
        if (top >= size)
        {
            cout << "Stack Overflow\n";
        }
        else
        {
            top++;
            stack[top] = item;
        }
    }
    int pop()
    {
        if (top <= 0)
        {
            cout << "Stack is Underflow\n";
        }
        else
        {
            int item =  stack[top];
            top--;
            return item;
        }
    }
    void peep (){
        if (top < 1)
        {
            cout << "Stack is Empty (Underflow)";
        }else{
            if (top >= size)
            {
                cout << "Stack is Full (Overflow)";
                int freespace  = size - top;
                cout << ""
            }
            
        }
        
    }
    void display()
    {
        cout << "Stack Element" << endl;
        for (int i = top; i > 0; i--)
        {
            cout << "|" << stack[i] << "|" << endl;
        }
    }
};

int main()
{
    Stack1 s;
    int opt, item;
    char ch;
    do
    {
        cout << "\t1.Push\t" << endl;
        cout << "\t2.Pop\t" << endl;
        cout << "\t3.Peep / Status\t" << endl;
        cout << "\t4.Display\t" << endl;
        cout << "\t5.Exit\t"<<endl;
        cout << "Enter the choich :\t";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter the Item \t";
            cin >> item;
            s.push(item);
            break;
        case 2:
            item = s.pop();
            cout << "Stack item is \t" << item << endl;
            break;
        case 3:
            cout << "Peep Of Stack\n";

            break;
        case 4:
            s.display();
            break;
        case 5:
            return 0;
            break;
        default:
            cout <<endl<< "\t Invaild Input\t\n\t Try Again\t\n" <<endl;
            break;
        }
        cout <<endl << "Do you want to continoues (Y|N)\t";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}