#include<iostream>
using namespace std;

struct Tree
{
    int data;
    Tree* address;
    Tree* Left;
    Tree* right;
};

Tree* Root = NULL;
Tree* Front = NULL;
Tree* Back = NULL;

void insertNode()
{
    Tree* Node = new Tree;
    cout<<"Enter data:";
    cin>>Node->data;
    Node->Left = NULL;
    Node->right = NULL;
    if(Root == NULL)
    {
        Root = Node;
    }
    else
    {
        Tree* temp = Root;
        while(temp != NULL)
        {
            if(Node->data < temp->data)
            {
                if(temp->Left == NULL)
                {
                    temp->Left = Node;
                    break;
                }
                else
                {
                    temp = temp->Left;
                }
            }
            else
            {
                if(Node->data >= temp->data)
                {
                    if(temp->right == NULL)
                    {
                        temp->right = Node;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
    }
}

void enQueue(Tree* node)
{
    Tree* List = new Tree;
    List->data = node->data;
    List->address = NULL;
    if(Front == NULL)
    {
        Front = List;
        Back = List;
    }
    else
    {
        Tree* temp = Front;
        while(temp != NULL)
        {
            if(temp->address == NULL)
            {
                temp->address = List;
                Back = List;
                break;
            }
            else
            {
                temp = temp->address;
            }
        }
    }
}

void deQueue()
{
    Front = Front->address;
}

void searchInQueue(int data)
{
    Tree* temp = Root;
    while(temp != NULL)
    {
        if(temp->data == Front->data)
        {
            if(temp->Left != NULL)
            {
                enQueue(temp->Left);
            }
            if(temp->right != NULL)
            {
                enQueue(temp->right);
            }
            break;
        }
        else if(data < temp->data)
        {
            temp = temp->Left;
        }
        else
        {
            temp = temp->right;
        }
    }
}

void levelOrder(Tree* root)
{
    if(root == NULL)
    {
        cout<<"Tree is empty";
    }
    else
    {
        enQueue(root);
        while(Front != NULL)
        {
            cout<<Front->data<<" ";
            searchInQueue(Front->data);
            deQueue();
        }
    }
}

int main()
{
    insertNode();
    insertNode();
    insertNode();
    insertNode();
    insertNode();
    insertNode();
    insertNode();
    cout<<"Level order traversal:"<<endl;
    levelOrder(Root);
}
