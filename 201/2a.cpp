/*Assume that we have a singly linked list .First node is pointed by pointer Ptr .Write a C function to delete
second last node of the linked list*/
#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
}node;

node *s=NULL;
node *e=NULL;
node *temp=NULL;
void insert(int x)
{
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"the linked list is empty"<<endl;
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(s==NULL)
            s=e=temp;
        else
        {
            temp->next=s;
            s=temp;
        }
    }
}

void del()
{
    temp=s;
    node *temp1=NULL;
    while(temp->next->next!=e)
    {
            temp=temp->next;
    }
       temp1=temp->next;
       temp->next=e;
       cout<<"deleted node is :"<< temp1->val;
       delete(temp1);
}

void display()
{
    temp=s;
    do{
        cout<<" "<<temp->val;
        temp=temp->next;
    }while(temp!=NULL);
}
int main()
{
    int ch,ele;
    do{
        cout<<"enter 1 to enter in linked list"<<endl;
        cout<<"enter 2 for deleting second last node in linked list"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter elements in linked list"<<endl;
            cin>>ele;
            insert(ele);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
