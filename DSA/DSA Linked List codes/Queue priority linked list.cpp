#include<iostream>
using namespace std;

struct List
{
    int Reg;
    int priority;
    List* Next;
};

List* Head = NULL;
List* Tail = NULL;
int count = 0;

bool isEmpty()
{
    if(Head == NULL)
    {
        cout<<"List is empty"<<endl;
        return 0;
    }
    else
    {
        return 1;
    }
}

bool isFull()
{
    if(count == 5)
    {
        cout<<"List is full"<<endl;
        return false;
    }
    else
    {
        return true;
    }
}

void Enqueue()
{
    if(isFull())
    {
        List* node = new List;
        cout<<"Enter reg: ";
        cin>>node->Reg;
        cout<<"Enter priority: ";
        cin>>node->priority;

        node->Next = NULL;

        if(Head == NULL)
        {
            Head = node;
            Tail = node;
        }
        else if(Head->Next == NULL)
        {
            if(Head->priority >= node->priority)
            {
                node->Next = Head;
                Head = node;
            }
            else
            {
                Head->Next = node;
            }
        }
        else
        {
            List* tempFront = Head;
            while(tempFront)
            {
                if(tempFront->Next->priority >= node->priority)
                {
                    node->Next = tempFront->Next;
                    tempFront->Next = node;
                    break;
                }
                else
                {
                    tempFront = tempFront->Next;
                }
            }
        }
    }
    //count++;    
}

void Dequeue()
{
    if(isEmpty())
    {
        Head = Head->Next;
    }
    count--;
}

List* Front_value()
{
    if(isEmpty())
    {
        return Head;
    }
}

void display()
{
    List* temp = Head;
    while(temp != NULL)
    {
        cout<<"Registration is:"<<temp->Reg<<"\npriority is:"<<temp->priority<<endl;
        temp = temp->Next;
    }
}

int main()
{
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    //display();
}
