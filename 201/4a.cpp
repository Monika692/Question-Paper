/*Assume that you have a double linked list ,first node of the list is pointed by
pointer Ptr,Write a c function to insert a node after the last node in the list.*/
#include<iostream>
using namespace std;
typedef struct linkedlist{
int val;
struct linkedlist *prev;
struct linkedlist *next;
}node;

node *s=NULL;
node *e=NULL;
node *temp=NULL;

void inserte(int x)
{
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"the linked list is empty"<<endl;
    else
    {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(s==NULL)
            s=e=temp;
        else
        {
            temp->prev=e;
            e->next=temp;
            e=temp;
        }
    }
}
void display()
{
    temp=e;
    do
    {
      cout<<" "<<temp->val;
      temp=temp->prev;
    }while(temp!=NULL);
}
int main()
{
   int ch,ele;
   do
   {
     cout<<"enter element at end of the linked list"<<endl;
     cout<<"enter 2 for display"<<endl;
     cin>>ch;
     switch(ch)
     {
    case 1:
         cout<<"enter elements in linked list "<<endl;
         cin>>ele;
         inserte(ele);
         break;
    case 2:
        display();
        break;
     }
   }while(ch<=2);
}
