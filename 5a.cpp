/*Assume that we have a single linked list and a key.First of the first linked list is pointed
by a pointer P. Write a C function to print the node having information
greater than key value in the linked list.*/
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
        cout<<"the linkedlist is empty"<<endl;
    else
    {
        temp->val=x;
        temp->next=nullptr;

        if(s==NULL)
            s=e=temp;
        else
        {
            temp->next=s;
            s=temp;
        }
    }
}

void display_key(int key)
{
    temp=s;
    do
    {
        if(temp->val>key)
            cout<<" "<<temp->val<<endl;

        temp=temp->next;
    }while(temp!=NULL);

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
    int ele,ch,k;
    do{
        cout<<"enter 1 for insert"<<endl;
        cout<<"enter 2 for display key"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>ch;

    switch(ch)
        {
    case 1:
        cout<<"enter element in the linkedlist :"<<endl;
        cin>>ele;
        insert(ele);
        break;
    case 2:
        cout<<"enter key :"<<endl;
        cin>>k;
        display_key(k);
        break;
       case 3:
        display();
        break;
        }
    }while(ch<=3);
}
