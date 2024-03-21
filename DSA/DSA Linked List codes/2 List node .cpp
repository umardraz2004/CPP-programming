#include<iostream>
using namespace std;

struct List
{
    string name;
    int Reg;
    float CGPA;
    List* next;
};

List* CS = NULL;
List* SE = NULL;

List* insertATLast(List* Head)
{
    List* Node = new List;
    cout<<"Enter your name: ";
    cin>>Node->name;
    cout<<"Enter your registration: ";
    cin>>Node->Reg;
    cout<<"Enter your CGPA: ";
    cin>>Node->CGPA;
    Node->next = NULL;
    if(Head == NULL)
    {
        Head = Node;
    }
    else
    {
        List* temp = Head;
        while(temp != NULL)
        {
            if(temp->next == NULL)
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
    return Head;
}

List* insertAtStart(List* Head)
{
    List* Node = new List;
    cout<<"Enter your name: ";
    cin>>Node->name;
    cout<<"Enter your registration: ";
    cin>>Node->Reg;
    cout<<"Enter your CGPA: ";
    cin>>Node->CGPA;
    Node->next = NULL;
    if(Head == NULL)
    {
        Head = Node;
    }
    else
    {
        Node->next = Head;
        Head = Node;
    }
    return Head;
}

List* insertBeforeSpecificNode(List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration before which you want to insert list:";
    cin>>specific_reg;
    List* Node = new List;
    cout<<"Enter your name: ";
    cin>>Node->name;
    cout<<"Enter your registration: ";
    cin>>Node->Reg;
    cout<<"Enter your CGPA: ";
    cin>>Node->CGPA;
    Node->next = NULL;
    if(Head == NULL)
    {
        Head = Node;
    }
    else
    {
        List* temp = Head;
        if(temp->Reg == specific_reg)
        {
            Node->next = Head;
            Head = Node;
        }
        else
        {
            while(temp != NULL)
            {
                if(temp->next->Reg == specific_reg)
                {
                    Node->next = temp->next;
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
    return Head;
}

List* insertAfterSpecificNode(List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration after which you want to insert list:";
    cin>>specific_reg;
    List* Node = new List;
    cout<<"Enter your name: ";
    cin>>Node->name;
    cout<<"Enter your registration: ";
    cin>>Node->Reg;
    cout<<"Enter your CGPA: ";
    cin>>Node->CGPA;
    Node->next = NULL;
    if(Head == NULL)
    {
        Head = Node;
    }
    else
    {
        List* temp = Head;
        while(temp != NULL)
        {
            if(temp->Reg == specific_reg)
            {
                Node->next = temp->next;
                temp->next = Node;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    return Head;
}

void searchSpecificNode(List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration you want to search:";
    cin>>specific_reg;
    int count = 0;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->Reg == specific_reg)
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

void SearchDuplicateNode(List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration you want to know if it is duplicated or not:";
    cin>>specific_reg;
    int count = 0;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->Reg == specific_reg)
            {
                count++;
                temp = temp->next;
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
        else if(count == 1)
        {
            cout<<specific_reg<<" is not duplicated";
        }
        else
        {
            cout<<"The duplicate registration numbers of "<<specific_reg<<" is "<<count;
        }
    }
}

void update_node (List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration you want to update:";
    cin>>specific_reg;
    int count = 0;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List not exist";
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->Reg == specific_reg)
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
    cout<<"Updated"<<endl;
    }
}

void delete_node(List* Head)
{
    int specific_reg;
    cout<<"\nEnter registration you want to delete:";
    cin>>specific_reg;
    List* temp = Head;
    if(temp == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        if(temp->Reg == specific_reg)
        {
            Head = Head->next;
        }
        else
        {

            while(temp != NULL)
            {
                if(temp->next->Reg == specific_reg)
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

void display(List* Head)
{
    cout<<"\nData in your list is"<<endl;
    if(Head == NULL)
    {
        cout<<"List is empty";
    }
    List* temp = Head;
    while(temp != NULL)
    {
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Reg:  "<<temp->Reg<<endl;
        cout<<"CGPA: "<<temp->CGPA<<endl;
        temp = temp->next;
    }
}

int main()
{
    // CS department List
    CS = insertATLast(CS);
    CS = insertAtStart(CS);
    CS = insertAfterSpecificNode(CS);
    CS = insertBeforeSpecificNode(CS);
    CS = insertATLast(CS);
    CS = insertAtStart(CS);
    CS = insertAfterSpecificNode(CS);
    CS = insertBeforeSpecificNode(CS);
    searchSpecificNode(CS);
    SearchDuplicateNode(CS);
    update_node(CS);
    delete_node(CS);
    display(CS);

    // SE department List
    CS = insertATLast(SE);
    CS = insertAtStart(SE);
    CS = insertAfterSpecificNode(SE);
    CS = insertBeforeSpecificNode(SE);
    CS = insertATLast(SE);
    CS = insertAtStart(SE);
    CS = insertAfterSpecificNode(SE);
    CS = insertBeforeSpecificNode(SE);
    searchSpecificNode(SE);
    SearchDuplicateNode(SE);
    update_node(SE);
    delete_node(SE);
    display(SE);
    return 0;
}
