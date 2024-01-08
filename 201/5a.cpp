/*Assume that we have a single linked list and a key .First of the first linked list is pointed by a pointer P.
Write a C function to print the nodes having information smaller than key value in the linked list*/
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
    else{
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

void snode()
{
    temp=s;
    int key;
    cout<<"enter the key to be taken "<<endl;
    cin>>key;
     while(temp!=NULL)
     {
           if(temp->val<key)
        cout<<" "<<temp->val<<endl;
        temp=temp->next;
     }
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
 do
 {
     cout<<"enter 1 to enter elements in linked list "<<endl;
     cout<<"enter 2 for showing nodes having information smaller than the key elements"<<endl;
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
        snode();
        break;
     case 3:
        display();
        break;
    }
 }while(ch<=3);
}
