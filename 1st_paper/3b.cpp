/*Assume we have a single linkedlist.first node is pointed by pointer P.
Write a C function to delete last node of the linked list */
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
void dele()
{
   if(e==NULL)
        cout<<"there is no element in linked list"<<endl;
   else
   {
    temp=s;
    cout<<"deleted value at end is :"<<e->val<<endl;
    while(temp->next!=e)
        temp=temp->next;

    delete(e);
    e=temp;
    e->next=NULL;
   }
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
    do{
        cout<<"enter 1 to enter element "<<endl;
        cout<<"enter 2 to delete element at end"<<endl;
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
            dele();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
