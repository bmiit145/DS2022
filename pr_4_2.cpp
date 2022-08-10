#include<iostream>
#define size 5
using namespace std;
class Student{
    int id;
    string name;
    string email;
    // Student(){
    //     id = 0;
    //     name = "";
    //     email = "";
    // }
public:
    void getdata(){
        cout << "Enter the id :";
        cin >> id;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the email id : ";
        cin >> email;
    }
    void display(){
        cout << endl;
        cout << "Id :\t" << id <<endl;
        cout << "Name :\t" << name << endl;
        cout << "Email Address :\t" << email << endl;
        cout << endl;
    }
};

// class Student_stack{
//     int top=0;
//     Student stack[size];
//     public:
//     Student_stack(){
//         top = 0;
//         for (int i = 0; i < size; i++)
//         {
//             stack[i] = new Student();
//         }
        
//     }

//     void pop(){

//     }
// };

// program to stack
class StudentStack
{
private:
    Student stack[size];
    int top;

public:
    StudentStack()
    {
        top = 0;
    }
    void push(Student item)
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
    Student pop()
    {
        if (top <= 0)
        {
            cout << "Stack is Underflow\n";
        }
        else
        {
            Student item =  stack[top];
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
            }else{
                int freespace  = size - top;
                cout << "Available Space \t" <<  freespace;
            }
            
        }
        
    }
    void display()
    {
        cout << "Stack Element" << endl;
        for (int i = top; i > 0; i--)
        {
            // cout << "|" << stack[i] << "|" << endl;
            stack[i].display();
        }
    }
};

int main()
{
    Student s1;
    StudentStack s;
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
            cout << "Enter the Student Deatils \t";
            s1.getdata();
            s.push(s1);
            break;
        // case 2:
        //     Student item1 = s.pop();
        //     // cout << "Stack item is \t" << item << endl;
        //     item1.display();
        //     break;
        case 3:
            cout << "Peep Of Stack\n";
            s.peep();
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