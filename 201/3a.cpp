/*Consider the following circular linked list,first node of the linked list is pointed by a pointer Ptr.
Write a C function to delete a node in the linked list*/
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

void delsp()
{
    node *temp1=NULL;
    int x;
    cout<<"enter element to be deleted"<<endl;
    cin>>x;
    temp=s;
    while(temp->val!=x)
    {
        temp1=temp;
        temp=temp->next;
    }
    cout<<" the deleted node is :"<<temp->val<<" "<<endl;
    temp1->next=temp->next;
    delete(temp);
}

void display()
{
    temp=s;
    do
    {
        cout<<" "<<temp->val;
        temp=temp->next;
    }while(temp!=NULL);
}

int main()
{
  int ch,ele;
  do
  {
      cout<<"enter 1 to enter element in linked list"<<endl;
      cout<<"enter 2 to delete any node chosen by user"<<endl;
      cout<<"enter 3 to display"<<endl;
      cin>>ch;
      switch(ch)
      {
    case 1:
        cout<<"enter elements to enter into linked list"<<endl;
        cin>>ele;
        insert(ele);
        break;
    case 2:
        delsp();
        break;
    case 3:
        display();
        break;
      }
  }while(ch<=3);
}
