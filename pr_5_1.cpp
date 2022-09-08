#include <iostream>
#define length 5
using namespace std;
class Queue
{
private:
    int SQ[length+1];
    int front, rear, item;

public:
    Queue()
    {
        front = rear = 0;
    }

    void enqueue(int item)
    {
        if (front == 0 & rear == 0)
        {
            front = 1;
        }
        if (rear == length)
        {
            cout << "\n\tQueue is full\t\n";
        }
        else
        {
            rear++;
            SQ[rear] = item;
        }
    }

    int dequeue()
    {
        if (front == 0 & rear == 0)
        {
            cout << "\n\tQueue is Empty\t\n";
        }
        else
        {
            if (front == length)
            {
                item = SQ[front];
                front = 0;
                rear = 0;
            }
            else
            {
                item = SQ[front];
                front++;
            }
                return item;
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << "|" << SQ[i] << "|\n";
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
            item = q1.dequeue();
            cout << "item is \t" << item << endl;
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