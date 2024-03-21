#include<iostream>
using namespace std;

int Reg[10];
int Top = -1;

bool isEmpty()
{
    if(Top == -1)
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
    if(Top == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int val)
{
    if(isFull() == 1)
    {
        cout<<"Stack is full";
    }
    else
    {
        Top++;
        Reg[Top] = val;
    }
}

void pop()
{
    if(isEmpty() == 1)
    {
        cout<<"List is empty";
    }
    else
    {
        Top--;
    }
}

int Top_value()
{
    if(isEmpty() == 1)
    {
        cout<<"List is empty";
    }
    else
    {
        return Top;
    }
}

void display()
{
    for(int i=Top; i>=0; i--)
    {
        cout<<"Registration is: "<<Reg[i]<<endl;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout<<"Top value is: "<<Top_value()<<endl;
    pop();
    display();
}
