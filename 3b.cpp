/*Assume that we have a single linked list with a pointer P at first node .Write a C function to input a number and search it in the linked list if number if found update
the linked list by deleting that node otherwise print number not found*/
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
    node *temp1=NULL;
    temp=s;
    int x,flag=0;
    cout<<"enter element to be deleted"<<endl;
    cin>>x;
    while(temp!=NULL)
    {
        if(temp->val==x)
        {
            flag=1;
            break;
        }
        temp1=temp;
        temp=temp->next;
    }
    if(flag==0)
    {
        cout<<"no element found"<<endl;
    }
    else
    {
     cout<<"the deleted node is: "<<temp->val<<endl;
     temp1->next=temp->next;
     delete(temp);
    }
}

void display()
{
    temp=s;
    do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
    }while(temp!=NULL);
}

int main()
{
    int ch,ele;
    do{
        cout<<"enter 1 for enter element in linked list "<<endl;
        cout<<"enter 2 for deleting the node"<<endl;
        cout<<"enter 3 for display "<<endl;
        cin>>ch;
        switch(ch)
        {
    case 1:
        cout<<"enter elements in linked list "<<endl;
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
