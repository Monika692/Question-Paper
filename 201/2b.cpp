/* Assume that  you ave a single linked list .First node is pointed by pointer Ptr.Write a C function to delete alternate nodes in the linked list*/
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
        cout<<"linked list is empty";
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

void delalt()
{
    node *temp1=s;
    while (temp1 != NULL && temp1->next != NULL)
    {
        node *temp2 = temp1->next;
        temp1->next = temp2->next;
        cout << "alternative deleted node is: " << temp2->val << endl;
        delete (temp2);
        temp1 = temp1->next;
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
   do
   {
       cout<<"enter 1 to enter elements in linkedlist"<<endl;
       cout<<"enter 2 to show deleted alternative nodes in the linked list"<<endl;
       cout<<"enter 3 for display"<<endl;
       cin>>ch;
       switch(ch)
       {
       case 1:
           cout<<"enter elements in the linked list"<<endl;
           cin>>ele;
           insert(ele);
           break;
         case 2:
             delalt();
             break;
         case 3:
            display();
            break;
       }
   }while(ch<=3);
}
