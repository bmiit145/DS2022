#include <iostream>
#define length 5
using namespace std;
class Queue
{
private:
    int SQ[length + 1];
    int front, rear;

public:
    Queue()
    {
        front = rear = 0;
    }

    void enqueue(int item)
    {
        if (rear == length)
        {
            cout << "\n\tQueue is full\t\n";
        }
        else
        {
            if (front == 0 & rear == 0)
            {
                front = 1;
            }

            rear++;
            SQ[rear] = item;
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
            int item = SQ[front];
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else
            {
                front++;
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
            for (int i = front; i <= rear; i++)
            {
                cout << "|" << SQ[i] << "|\n";
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