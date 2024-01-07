/* Assume that we have a single linked list ,first node of the linked list is pointed by a pointer PTR.
Write a C function to print the linked list in alternate order till last node */
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
        else{
            temp->next=s;
            s=temp;
        }
    }
}

void alternate()
{
  node *temp1=s;
  for(temp1=s; temp1!=NULL && temp1->next!=NULL && temp1->next->next!=NULL; temp1=temp1->next->next)
  {
        cout<<temp1->val<<endl;
  }
  cout<<temp1->val;
}

void display()
{
    do{
        cout<<" "<<temp->val;
        temp=temp->next;
    }while(temp!=NULL);
}

int main()
{
    int ch,ele;
    do{
        cout<<"enter 1 to elements in linked list"<<endl;
        cout<<"enter 2 for printing the alternate elements "<<endl;
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
            alternate();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
