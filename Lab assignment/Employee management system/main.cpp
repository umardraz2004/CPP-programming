#include<iostream>
using namespace std;
struct EMP
{
    string Name;
    int ID;
    EMP* prev;
    EMP* next;
};

EMP* Head = NULL;
EMP* Tail = NULL;

void insertNode()
{
    EMP* Node = new EMP;
    cout<<"Enter username:";
    cin>>Node->Name;
    cout<<"Enter ID:";
    cin>>Node->ID;
    Node->prev = NULL;
    Node->next = NULL;
    if(Head == NULL)
    {
        Head = Node;
        Tail = Node;
        cout<<"Node inserted";
    }
    else
    {
        EMP* temp = Head;
        while(temp != NULL)
        {
            if(temp->next == NULL)
            {
                temp->next = Node;
                Tail = Node;
                Tail->prev = temp;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        cout<<"Node inserted";
    }
}

void searchNode(int id)
{
    int count = 0;
    EMP* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != nullptr)
        {
            if(temp->ID == id)
            {
                cout<<"Data found"<<endl;
                cout<<"Name: "<<temp->Name<<endl;
                cout<<"ID: "<<temp->ID<<endl;
                count++;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        if(count == 0)
        {
            cout<<"Invalid registration"<<endl;
        }
    }
}

void updateNode(int id)
{
    int count = 0;
    EMP* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != nullptr)
        {
            if(temp->ID == id)
            {
                cout<<"Data found\nEnter id to be updated:";
                cin>>temp->ID;
                cout<<"Enter username to be updated:";
                cin>>temp->Name;
                count++;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        if(count == 0)
        {
            cout<<"Invalid registration"<<endl;
        }
        cout<<"Updated"<<endl;
    }
}

void deleteNode(int id)
{
    if(Head == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        if(Head->ID == id && Head->next == NULL)
        {
            Head = NULL;
        }
        else if(Head->ID == id && Head->next != NULL)
        {
            Head = Head->next;
            Head->prev = NULL;
        }
        else
        {
            EMP* temp = Head;

            while(temp != NULL)
            {
                if(temp->next->ID == id && temp->next != Tail)
                {
                    temp->next = temp->next->next;
                    temp->next->prev = temp ;
                    break;
                }
                else if(temp->next->ID == id && temp->next == Tail)
                {
                    temp->next = NULL;
                    Tail->prev = NULL;
                    Tail = temp;
                    break;
                }
                else
                {
                    temp = temp->next;
                }
            }
        }
    }
    cout<<"Deleted"<<endl;
}


void display()
{
    if(Head == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        EMP* temp = Head;
        while(temp != NULL)
        {
            cout<<temp->Name<<" "<<temp->ID<<endl;
            temp = temp->next;
        }
    }
}

int main()
{
    int opt;
    cout<<"Its a concole base employee management system must enter one value before using it:"<<endl;
    cout<<"\n\tEmployee Management system"<<endl;
    while(true)
    {
        cout<<"\n\t[1] Insert data\n\t[2] Search data\n\t[3] Update data\n\t[4] Delete data\n\t[5] Display data\n\tPress any other key to Exit"<<endl;
        cin>>opt;
        if(opt == 1)
        {
            insertNode();
        }
        else if(opt == 2)
        {
            int id;
            cout<<"Enter id you want to search:";
            cin>>id;
            searchNode(id);
        }
        else if(opt == 3)
        {
            int id;
            cout<<"Enter id you want to update:";
            cin>>id;
            updateNode(id);
        }
        else if(opt == 4)
        {
            int id;
            cout<<"Enter id you want to delete:";
            cin>>id;
            deleteNode(id);
        }
        else if(opt == 5)
        {
            display();
        }
        else
        {
            break;
        }
    }
}
