/*Assume that we have a single linked list .First node is pointed by pointer F .Write a C of the linked list respectively.
Write a C function to find and print the middle node int the linked list*/

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
    cout<<"linked list is empty"<<endl;
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

void midnode(node *s)
{
   node *temp=s;
   node *temp1=s;
   for(temp=s;temp1!=NULL;temp=temp->next)
   {
       if(temp1->next!=nullptr && temp1->next->next!=nullptr)
            temp1=temp1->next->next;
        else
            break;
   }
   cout<<"Middle Node is : "<<temp->val<<endl;
}

void display()
{
    temp=s;
    do
    {
        cout<<" "<<temp->val<<endl;
        temp=temp->next;
    }while(temp!=NULL);
}

int main()
{
 int ch,ele;
 do
 {
     cout<<"enter 1 for entering elements in linked list"<<endl;
     cout<<"enter 2 for shoeing middle node"<<endl;
     cout<<"enter 3 for display"<<endl;
     cin>>ch;
     switch(ch)
     {
     case 1:
        cout<<"enter elements in linkedlist "<<endl;
        cin>>ele;
        insert(ele);
        break;
     case 2:
        midnode(s);
        break;
     case 3:
        display();
        break;
     }
 }while(ch<=3);
}
