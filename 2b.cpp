/*Consider a circular linked list with a pointer (PTR) pointing to its head .Write
a C function to delete a node from the circular linked list (consider all the cases).*/
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
        cout<<" the linked list is empty"<<endl;
    else{
        temp->val=x;
        temp->next=s;
        if(s==NULL)
            s=e=temp;
        else
        {
          temp->next=s;
          s=temp;
          e->next=s;
        }
    }
}

void deletesp()
{
    node *temp1=NULL;
    temp=s;
    int x;
    cout<<"enter value to be deleted "<<endl;
    cin>>x;
    while(temp->val!=x)
    {
        temp1=temp;
        temp=temp->next;
    }
    cout<<"deleted value is :"<<temp->val<<endl;
    temp1->next=temp->next;
    delete(temp);
}

void display()
{
     temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=s);
}

int main()
{
    int ch,ele;
    do{
        cout<<"enter 1 to enter element in linked list"<<endl;
        cout<<"enter 2 to delete element in linked list "<<endl;
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
            deletesp();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
