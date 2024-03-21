#include<iostream>
using namespace std;
struct Tree
{
    int data;
    Tree* Left;
    Tree* right;
};

Tree* Root = NULL;

void insertNode(int val)
{
    Tree* Node = new Tree;
    Node->data = val;
    Node->Left = NULL;
    Node->right = NULL;
    if(Root == NULL)
    {
        Root = Node;
        cout<<"Node inserted"<<endl;
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
//In order L-N-R
void InOrder(Tree* temp)
{
    if(temp == NULL)
    {
    }
    else
    {
        InOrder(temp->Left);
        cout<<temp->data<<" ";
        InOrder(temp->right);
    }
}
//Pre order N-L-R
void preOrder(Tree* temp)
{
    if(temp == NULL)
    {
    }
    else
    {
        cout<<temp->data<<" ";
        preOrder(temp->Left);
        preOrder(temp->right);
    }
}
//Post L-R-N
void postOrder(Tree* temp)
{
    if(temp == NULL)
    {
    }
    else
    {
        postOrder(temp->Left);
        postOrder(temp->right);
        cout<<temp->data<<" ";
    }
}



int main()
{
    insertNode(100);
    insertNode(200);
    insertNode(20);
    insertNode(10);
    insertNode(30);
    insertNode(150);
    insertNode(300);
    cout<<"\n"<<"In order:"<<endl;
    InOrder(Root);
    cout<<"\n"<<"Pre order:"<<endl;
    preOrder(Root);
    cout<<"\n"<<"Post order:"<<endl;
    postOrder(Root);
}
