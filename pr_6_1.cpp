#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

class Sim_link
{
public:
    Node *head = NULL, *newnode, *temp;

    void insert_first(int item)
    {
        newnode = new Node();
        newnode->data = item;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            // temp = head;
            // head->next = newnode;
            // newnode->next = temp;

            newnode->next = head;
            head = newnode;
        }
    }

    void insert_last(int item)
    {
        newnode = new Node();
        newnode->data = item;

        if (head == NULL)
        {
            head = newnode;
        }else{
            temp = head;
            while (temp->next = NULL)
            {
                
            }
            
        }
        

    }
};

int main()
{

    return 0;
}