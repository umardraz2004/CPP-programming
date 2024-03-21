#include<iostream>
using namespace std;
struct List
{
    int Reg;
    List* previous;
};

List* Top = NULL;
int count = 0;

bool isEmpty()
{
    if(Top == NULL)
    {
        cout<<"List is empty";
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
        cout<<"List is full";
        return false;
    }
    else
    {
        return true;
    }
}

void push()
{
    if(isFull())
    {
        List* Node = new List;
        cout<<"Enter registration:";
        cin>>Node->Reg;
        Node->previous = NULL;
        if(Top == NULL)
        {
            Top = Node;
        }
        else
        {
            Node->previous = Top;
            Top = Node;
        }
        count++;
    }
}

void pop()
{
    if(isEmpty())
    {
        Top = Top->previous;
    }
    count--;
}

List* Top_Node()
{
    if(isEmpty())
    {
        return Top;
    }
}


void display()
{
    List* temp = Top;
    if(isEmpty())
    {
        while(temp != NULL)
        {
            cout<<"Registration is:"<<temp->Reg<<endl;
            temp = temp->previous;
        }
    }
}

int main()
{
    push();
    push();
    push();
    push();
    push();
    push();
    cout<<"Top value is: "<<Top_Node()->Reg<<endl;
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    if(isEmpty())
    {
        cout<<"Top value is: "<<Top_Node()->Reg<<endl;
    }
}
