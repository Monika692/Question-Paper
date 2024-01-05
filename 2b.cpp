#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *prev;
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
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;

        if(s==NULL)
            s=e=temp;
        else
        {
            temp->next=s;
            s->prev=temp;
            s=temp;
        }
    }
}
void display()
{
    temp=s;
    do{
       cout<<temp->val<<endl;
       temp=temp->next;
    }while(temp!=NULL);

}

void insp(int x,int pos)
{
    int i=1;
    temp1=s;
    temp=s;
    while(temp1->next!=nullptr)
    {
        temp=temp1;
        temp1=temp1->next;
    }

    node *temp1=temp->next;
    node *temp2=NULL;
    temp2=new linkedlist;
    temp2->val=x;
    temp2->next=temp1;
    temp2->prev=temp;
    temp->next=temp2;
    temp1->prev=temp2;
}

int main()
{

     int ch,ele,pos;
    do{
        cout<<"enter 1 for insert "<<endl;
        cout<<"enter 2 for inserting node at specific"<<endl;
        cout<<"enter 3 to display "<<endl;
        cin>>ch;
        switch(ch)
        {
    case 1:
        cout<<"enter element :"<<endl;
        cin>>ele;
        insert(ele);
        break;
    case 2:
         cout<<"enter element to be inserted "<<endl;
         cin>>ele;
         cout<<"enter position at which you want to insert the value"<<endl;
         cin>>pos;
         insp(ele,pos);
         break;
    case 3:
        cout<<"enter 2 for display"<<endl;
        display();
        break;
        }
    }while(ch<=3);
}
