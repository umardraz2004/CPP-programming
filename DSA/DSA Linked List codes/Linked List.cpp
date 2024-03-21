#include<iostream>
using namespace std;

struct List
{
    string name;
    int Reg;
    float CGPA;
    List* next;
};

List* Head = nullptr;

void insert_data()
{
    List* Node = new List;
    cout<<"Enter your name: ";
    cin>>Node->name;
    cout<<"Enter your registration: ";
    cin>>Node->Reg;
    cout<<"Enter your CGPA: ";
    cin>>Node->CGPA;
    Node->next = nullptr;
    if(Head == nullptr)
    {
        Head = Node;
    }
    else
    {
        List* temp = Head;
        while(temp != nullptr)
        {
            if(temp->next == nullptr)
            {
                temp->next = Node;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
}

void search_node(int reg)
{
    int count = 0;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != nullptr)
        {
            if(temp->Reg == reg)
            {
                cout<<"Data found"<<endl;
                cout<<"Name: "<<temp->name<<endl;
                cout<<"Reg: "<<temp->Reg<<endl;
                cout<<"CGPA: "<<temp->CGPA<<endl;
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

void update_node (int reg)
{
    int count = 0;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != nullptr)
        {
            if(temp->Reg == reg)
            {
                cout<<"Data found\nEnter registration to update:";
                cin>>temp->Reg;
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
    cout<<"Updated"<<endl;
}

void delete_node(int reg)
{
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        if(temp->Reg == reg)
        {
            Head = Head->next;
        }
        else
        {

            while(temp != NULL)
            {
                if(temp->next->Reg == reg)
                {
                    temp->next = temp->next->next;
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
    cout<<"\nData in your list is"<<endl;
    if(Head == nullptr)
    {
        cout<<"List is empty";
    }
    List* temp = Head;
    while(temp != nullptr)
    {
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Reg:  "<<temp->Reg<<endl;
        cout<<"CGPA: "<<temp->CGPA<<endl;
        temp = temp->next;
    }
}

int main()
{
    int search_data,update_data,delete_data;
    //insert data function
    insert_data();
    insert_data();
    insert_data();
    //Search data function
    cout<<"\nEnter registration you want to search:";
    cin>>search_data;
    search_node(search_data);
    //Update function
    cout<<"\nEnter registration you want to update:";
    cin>>update_data;
    update_node(update_data);
    //Delete Function
    cout<<"\nEnter the registration you want to delete:";
    cin>>delete_data;
    delete_node(delete_data);
    //Display function
    display();
    return 0;
}
