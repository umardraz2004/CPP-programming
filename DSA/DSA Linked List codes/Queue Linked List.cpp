#include<iostream>
using namespace std;

struct List
{
    int Reg;
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
        List* Node = new List;
        cout<<"Enter registration";
        cin>>Node->Reg;
        Node->Next = NULL;
        if(Head == NULL)
        {
            Head = Node;
            Tail = Node;
        }
        else
        {
            Tail->Next = Node;
            Tail = Node;
        }
        count++;
    }
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
        cout<<"Registration is:"<<temp->Reg<<endl;
        temp = temp->Next;
    }
}

int main()
{
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    Enqueue();
    cout<<"First value is: "<<Front_value()->Reg<<endl;
    Dequeue();
    display();
}
