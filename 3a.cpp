/*Assume that we have a single linked list with a pointer P at first node .Write a C function to check whther the linked list is
palindrome or not . example 10->20->30->20->10 the given linked list is palindrome or not */
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

void cp()
{
    node *t1=s;
    node *t2=e;
    node *t3=t1;
   // int flag=0;
    while(t1!=t2)
    {
        if(t1->val!=t2->val)
                break;

        t3=t1;
        while(t3->next!=t2)
            t3=t3->next;
        cout<<" "<<t2->val<<endl;
        t2=t3;
        t1=t1->next;

        if(t2->next==t1)
            break;
    }

    if(t1==t2 || t2->next==t1)
       cout<<"Linklist is Pallindrome "<<endl;
    else
        cout<<"Linklist is not pallindrome "<<endl;
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
        cout<<"enter 1 to enter elements in linkedlist "<<endl;
        cout<<"enter 2 for check palindrome "<<endl;
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
        cp();
        break;
    case 3:
        display();
        break;
            }
    }while(ch<=3);
}
