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
	}
	else
	{
		List* temp = Head;
		while(temp != NULL)
		{
			if(temp->next == NULL)
			{
				temp->next = Node;
				Tail = Node;
				Node->prev = temp;
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
		while(temp1 != NULL)
		{
			cout<<temp1->data<<" ";
			temp1 = temp1->next;
		}
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
		List* temp = Tail;
		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->prev;
		}
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