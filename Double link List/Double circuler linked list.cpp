#include<iostream>
using namespace std;
struct List
{
	int data;
	List* prev;
	List* next;
};

List* Head = NULL;
List* Tail = NULL;

void insertAtLast()
{
	List* Node = new List;
	cout<<"Enter data:";
	cin>>Node->data;
	Node->prev = NULL;
	Node->next = NULL;
	if(Head == NULL)
	{
		Head = Node;
		Head->next = Head;
	}
	else
	{
		List* temp = Head;
		while(temp != NULL)
		{
			if(temp->next == Head)
			{
				temp->next = Node;
				Tail = Node;
				Node->prev = temp;
                Tail->next = Head;
                Head->prev = Node;
				break;
			}
			else
			{
				temp = temp->next;
			}
		}
	}
}

void displayFromHead()
{
	if(Head == NULL)
	{
		cout<<"List is empty";
	}
	else
	{
		List* temp1 = Head;
		do
		{
			cout<<temp1->data<<" ";
			temp1 = temp1->next;
		}
		while(temp1 != Head);
	}
}

void displayFromTail()
{
	if(Head == NULL)
	{
		cout<<"List is empty";
	}
	else
	{
		List* temp2 = Tail;
		do
		{
            cout<<temp2->data<<" ";
            temp2 = temp2->prev;
		}
		while(temp2 != Tail);
	}
}

int main()
{
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	cout<<"Display data:"<<endl;
	displayFromHead();
	cout<<"\nDisplay data:"<<endl;
	displayFromTail();
	return 0;
}
