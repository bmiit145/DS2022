#include <iostream>
#define length 5
using namespace std;
class Queue
{
private:
    int CQ[length + 1];
    int front, rear;

public:
    Queue()
    {
        front = rear = 0;
    }

    void enqueue(int item)
    {
        if (front == 0)
        {
            front = 1;
            rear = 1;
            CQ[rear] = item;
        }
        else
        {
            int next = (rear % length) + 1;

            if (next == front)
            {
                cout << "\tQueue is Full\t" << endl;
            }
            else
            {
                rear = next;
                CQ[rear] = item;
            }
        }
    }

    void dequeue()
    {
        if (front == 0)
        {
            cout << "\n\tQueue is Empty\t\n";
        }
        else
        {
            int item = CQ[front];
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else
            {
                int next = (front % length) + 1;
                front = next;
            }
            cout << "item is \t" << item << endl;
        }
    }

    void display()
    {
        if (front == 0)
        {
            cout << "\tqueue is empty\t" << endl;
        }
        else
        {
            if (front < rear)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << "|" << CQ[i] << "|\n";
                }
            }else{
                for (int i = front; i <= length; i++)
                {
                    cout << "|" << CQ[i] << "|\n";
                }
                for (int i = 1; i <= rear; i++)
                {
                    cout << "|" << CQ[i] << "|\n";
                   
                }
                
                
            }
        }
    }
};

int main()
{
    Queue q1;
    int opt, item;

    while (1)
    {
        cout << "\t1.Enqueue\t" << endl;
        cout << "\t2.Dequeue\t" << endl;
        cout << "\t3.Display\t" << endl;
        cout << "\t4.Exit\t" << endl;
        cout << "Enter the choich :\t";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter the Item \t";
            cin >> item;
            q1.enqueue(item);
            break;
        case 2:
            q1.dequeue();
            // cout << "item is \t" << item << endl;
            break;
        case 3:
            q1.display();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << endl
                 << "\t Invaild Input\t\n\t Try Again\t\n"
                 << endl;
            break;
        }
    }

    return 0;
}