#include <iostream>
#define length 5
using namespace std;
class Queue
{
private:
    int DQ[length + 1];
    int front, rear;

public:
    Queue()
    {
        front = rear = 0;
    }

    void enqueue_front(int item)
    {
        int next;
        if (front == 0)
        {
            rear = 1;
        }

        if (front == 1 || front == 0)
        {
            next = length;
        }
        else
        {

            next = front - 1;
        }

        if (next == rear)
        {
            cout << "\tQueue is full\t\n";
            return;
        }
        else
        {
            front = next;
            DQ[front] = item;
        }
    }

    void enqueue_rear(int item)
    {
        if (front == 0)
        {
            front = 1;
            rear = 1;
            DQ[rear] = item;
        }
        else
        {
            int next = (rear % length) + 1;
            if (front == next)
            {
                cout << "\tQueue  is full\t\n";
            }
            else
            {
                rear = next;
                DQ[rear] = item;
            }
        }
    }

    void dequeue_front()
    {
        if (front == 0)
        {
            cout << "\tQueue is empty\t\n";
        }
        else
        {
            int item = DQ[front];
            if (front == rear)
            {
                front = rear = 0;
            }
            else
            {
                int next = (front % length) + 1;
                front = next;
            }
            cout << "Item is \t" << item << endl;
        }
    }

    void dequeue_rear()
    {
        if (rear == 0)
        {
            cout << "\tQueue is Empty\t\n";
        }
        else
        {
            int item = DQ[rear];
            if (rear == front)
            {
                front = rear = 0;
            }
            else
            {
                if (rear == length)
                {
                    rear = 1;
                }
                else if (rear == 1)
                {
                    rear = length;
                }
                else
                {
                    rear--;
                }
            }

            cout << "Item is\t" << item << endl;
        }
    }

    void display()
    {
    }
};

int main()
{
    Queue q1;
    int opt, item;

    while (1)
    {
        cout << "\t1.Enqueue At front\t" << endl;
        cout << "\t2.Dequeue At Front\t" << endl;
        cout << "\t3.Enqueue At Rear\t" << endl;
        cout << "\t4.Dequeue At Rear\t" << endl;
        cout << "\t5.Display\t" << endl;
        cout << "\t6.Exit\t" << endl;
        cout << "Enter the choich :\t";
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Enter the Item \t";
            cin >> item;
            q1.enqueue_front(item);
            break;
        case 2:
            q1.dequeue_front();
            // cout << "item is \t" << item << endl;
            break;
        case 3:
            cout << "Enter the Item \t";
            cin >> item;
            q1.enqueue_rear(item);
            break;
        case 4:
            q1.dequeue_rear();
            // cout << "item is \t" << item << endl;
            break;
        case 5:
            q1.display();
            break;
        case 6:
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