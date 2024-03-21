#include<iostream>
using namespace std;

struct List
{
    int Reg;
    List* Address;
};

List* Head = NULL;

void insertAtLast()
{
    List* Node = new List;
    cout<<"Enter registration: ";
    cin>>Node->Reg;
    Node->Address = NULL;
    if(Head == NULL)
    {
        Head = Node;
        Node->Address = Head;
    }
    else
    {
        List* temp = Head;
        while(temp != NULL)
        {
            if(temp->Address == Head)
            {
                temp->Address = Node;
                Node->Address = Head;
                break;
            }
            else
            {
                temp = temp->Address;
            }
        }
    }
    cout<<"Node is inserted"<<endl;
}

void insertAtStart()
{
    List* Node = new List;
    cout<<"Enter registration: ";
    cin>>Node->Reg;
    Node->Address = NULL;
    if(Head == NULL)
    {
        Head = Node;
        Node->Address = Head;
    }
    else
    {
        List* temp = Head;
        while(temp != NULL)
        {
            if(temp->Address == Head)
            {
                Node->Address = Head;
                Head = Node;
                temp->Address = Node;
                break;
            }
            else
            {
                temp = temp->Address;
            }
        }
    }
}

void insertBeforeSpecificNode()
{
    int specific_reg;
    cout<<"Enter reg before which you want to enter registration: ";
    cin>>specific_reg;
    List* Node = new List;
    cout<<"Enter registration: ";
    cin>>Node->Reg;
    Node->Address = NULL;
    if(Head == NULL)
    {
        Head = Node;
        Node->Address = Head;
    }
    else
    {
        List* temp = Head;
        if(temp->Reg == specific_reg)
        {
            while(temp != NULL)
            {
                if(temp->Address == Head)
                {
                    Node->Address = Head;
                    Head = Node;
                    temp->Address = Node;
                    break;
                }
                else
                {
                    temp = temp->Address;
                }
            }
        }
        else
        {
            while(temp != NULL)
            {
                if(temp->Address->Reg == specific_reg)
                {
                    Node->Address = temp->Address;
                    temp->Address = Node;
                    break;
                }
                else
                {
                    temp = temp->Address;
                }
            }
        }
        cout<<"Node Added"<<endl;
    }
}

void insertAfterSpecificNode()
{
    List* Node = new List;
    int specific_reg;
    cout<<"Enter registration after which you want to enter another registration:";
    cin>>specific_reg;
    cout<<"Enter registration: ";
    cin>>Node->Reg;
    Node->Address = NULL;
    if(Head == NULL)
    {
        Head = Node;
        Node->Address = Head;
    }
    else
    {
        List* temp = Head;
        while(temp != NULL)
        {
            if(temp->Reg == specific_reg)
            {
                Node->Address = temp->Address;
                temp->Address = Node;
                break;
            }
            else
            {
                temp = temp->Address;
            }
        }
    }
}



void display()
{
    int count = 0;
    if(Head == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        List* temp = Head;
        do
        {
            cout<<"Registration :"<<temp->Reg<<endl;
            temp = temp->Address;
        }
        while(temp != Head);
    }
    cout<<"completed";
}

int main()
{
    insertAtLast();
    insertAtLast();
    insertAtLast();
    //insertBeforeSpecificNode();
    insertAfterSpecificNode();
    display();
    return 0;
}
