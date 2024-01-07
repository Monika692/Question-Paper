/*Assume that we have a single linkedlist ,first node of the linkedlist is pointed by a
pointer Start .write a C function to print the node having largest information in that singly linkedlist */
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


void largest()
{
    int maxx=0;
    node *temp1=s;

    maxx=temp1->val;

    while(temp1!=nullptr)
    {
        if(temp1->val>maxx)
            maxx=temp1->val;

        temp1=temp1->next;
    }
    cout<<"Maximum in Linked list "<<maxx<<endl;
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
        cout<<"enter 1 for entering element in linked list"<<endl;
        cout<<"enter 2 for checking the largest node in linkedlist"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter element in linked list"<<endl;
            cin>>ele;
            insert(ele);
            break;
        case 2:
            largest();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
