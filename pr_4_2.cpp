#include<iostream>
#define size 5
using namespace std;
class Student{
    int id;
    string name;
    float mark;

public:
    Student(){
         id = 0;
         name = "";
         mark = 0;
    }
    Student(int s_id , string s_name , float s_mark){
        id = s_id;
        name = s_name;
        mark = s_mark;
    }
    Student(Student &s){
        id = s.id;
        name = s.name;
        mark = s.mark;
    }

    void getdata(){
        cout << "Enter the id :";
        cin >> id;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the mark : ";
        cin >> mark;
    }
    void display(){
        cout << endl;
        cout << "Id :\t" << id <<endl;
        cout << "Name :\t" << name << endl;
        cout << "mark :\t" << mark << endl;
        cout << endl;
    }
};


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
            stack[++top] = item;
        }
    }
    Student pop()
    {
        Student item;
        if (top <= 0)
        {
            cout << "Stack is Underflow\n";
        }
        else
        {
            item =  stack[top];
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
        Student s1;
        switch (opt)
        {
            case 1:
                
                cout << "Enter the Student Deatils \t\n";
                s1.getdata();
                s.push(s1);
                break;
            case 2:
                s1 = s.pop();
                // cout << "Stack item is \t" << item << endl;
                s1.display();
                break;
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