#include<iostream>
using namespace std;

int Reg[10];
int Head = 0;
int Tail = -1;

bool isEmpty()
{
    if(Tail == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isFull()
{
    if(Tail == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Enqueue(int val)
{
    if(isFull() == 1)
    {
        cout<<"Stack is full";
    }
    else
    {
        Tail++;
        Reg[Tail] = val;
    }
}

void Dequeue()
{
    if(isEmpty() == 1)
    {
        cout<<"List is empty";
    }
    else
    {
        for(int i=Head ;i<Tail ;i++)
        {
            Reg[i] = Reg[i+1];
        }
        Tail--;
    }
}

int Front_Value()
{
    if(isEmpty() == 1)
    {
        cout<<"List is empty";
    }
    else
    {
        return Reg[Head];
    }
}

void display()
{
    for(int i=Head; i<=Tail; i++)
    {
        cout<<"Registration is: "<<Reg[i]<<endl;
    }
}

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Dequeue();
    cout<<"Top value is: "<<Front_Value()<<endl;
    display();
}
