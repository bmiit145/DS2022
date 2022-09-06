#include <iostream>
#include <string.h>
#define size 5
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;
    int salary;

public:
    Employee()
    {
        emp_id = salary = 0;
        name = "";
    }
    void getdata()
    {
        cout << "\nEnter Employee id : \t";
        cin >> emp_id;

        cout << "Enter the name : \t";
        cin.ignore();
        getline(cin, name);
        // cin >> name;

        cout << "Enter the salary of employee \t";
        cin >> salary;
    }
    void displaydata()
    {
        cout << "Employee Id :\t" << emp_id << endl;
        cout << "Employee name :\t" << name << endl;
        cout << "Employee salary :\t" << salary << endl;
    }
};

class EmployeeStack
{
private:
    int top;
    Employee stack[size];

public:
    EmployeeStack()
    {
        top = 0;
    }

    void push(Employee e1)
    {

        if (top >= size)
        {
            cout << "\tStack is Overflow \t\n";
        }
        else
        {
            stack[++top] = e1;
        }
    }

    void pop()
    {
        Employee item;
        if (top <= 0)
        {
            cout << "\tStack is Underflow\t\n";

        }
        else
        {
            item = stack[top];
            top--;
            item.displaydata();
        }
    }

    void peep()
    {
        if (top >= size)
        {
            cout << "\tStack is Overflow\t\n";
        }
        else
        {
            if (top <= 0)
            {
                cout << "\tStack is Underflow\t\n";
            }
            else
            {
                int freespace = size - top;

                cout << "\t Available space is " << freespace << "\t\n";
            }
        }
    }

    void display()
    {
        // cout << "Stack Element" << endl;
        if (top <= 0)
        {
            cout << "No Elements";
        }
        else
        {

            for (int i = top; i > 0; i--)
            {
                stack[i].displaydata();
            }
        }
    }
};
int main()
{

    EmployeeStack e_stack;

    int ch;
    Employee e1;

    while (1)
    {
        // cout << "\tEmployee Details\t\n";
        cout << "\n\n \t Stack operations \t\n\n";
        cout << "\t1.push\t\n";
        cout << "\t2.pop\t\n";
        cout << "\t3.peep\t\n";
        cout << "\t4.diplay\t\n";
        cout << "\t5.Exit\t\n";

        cout << "Enter the your choice :\t";
        cin >> ch;

        switch (ch)
        {
        case 1:
            e1.getdata();
            e_stack.push(e1);
            break;
        case 2:
            e_stack.pop();
            break;
        case 3:
            e_stack.peep();
            break;
        case 4:
            e_stack.display();
            break;
        case 5:
            cout << "Exited\n";
            return 0;
            break;
        default:
            cout << "\tEnter the vaild Inputs\t\n";
            break;
        }
    }

    return 0;
}