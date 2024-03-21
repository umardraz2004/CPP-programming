#include<iostream>
using namespace std;

struct List
{
    int data;
    List* address;
};

List* Front = NULL;
List* Back = NULL;
//Insertion in Queue
void enQueue(int value)
{
    List* Node = new List;
    Node->data = value;
    Node->address = NULL;
    if(Front == NULL)
    {
        Front = Node;
        Back = Node;
    }
    else
    {
        Back->address = Node;
        Back = Node;
    }
}
//Function to find maximum data in queue
void findMaxValue()
{
    int maxValue = Front->data;
    List* temp = Front->address;
    while(temp != NULL)
    {
        if(temp->data > maxValue)
        {
            maxValue = temp->data;
            temp = temp->address;
        }
        else
        {
            temp = temp->address;
        }
    }
    cout<<"Maximum value is:"<<maxValue;
}
//Function to display data in queue
void display()
{
    List* temp = Front;
    if(temp == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        while(temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->address;
        }
    }
}

int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    display();
    findMaxValue();
    return 0;
}
