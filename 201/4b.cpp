/*Assume that you have a singly linked list with a pointer Ptr at first node.
Write a C function to count nodes having information ,multiple of 4 in the linked list*/
#include<iostream>
using namespace std;
typedef struct linkedlist{
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

void mulnode()
{
     temp=s;
     int flag=0;
     while(temp!=NULL)
     {
        if(temp->val%4==0)
           {
                cout<<" "<<temp->val<<endl;
                flag=1;
           }
            temp=temp->next;
     }
     if(flag==0)
     {
     cout<<"not a multiple of 4"<<endl;
     }
}

int main()
{
    int ch,ele;
    do
    {
        cout<<"enter 1 to enter element in linked list"<<endl;
        cout<<"enter 2 to display multiple of 4 in the given linked list "<<endl;
        cin>>ch;
        switch(ch)
        {
    case 1:
        cout<<"enter elements in linked list"<<endl;
        cin>>ele;
        insert(ele);
        break;
    case 2:
        mulnode();
        break;
        }
    }while(ch<=2);
}
