/*Assume that we have two singly linked lists .Pointers P and Q are pointing to first node of the linked list respectively
Write a C function to print similar nodes from both the linked list*/
#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
}node;

node *temp=NULL;

node *ins(node *s)
{
    int x1;
    cout<<"enter elements in linked list "<<endl;
    cin>>x1;
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"no elements in linked list"<<endl;
    else
    {
        temp->val=x1;
        temp->next=NULL;
      if(s==NULL)
            s=temp;
      else
      {
        temp->next=s;
       s=temp;
      }
    }
    return s;
}

int min(node *t)
{
    int mini=t->val;
   do
   {
       if(mini>t->val)
            mini=t->val;
       t=t->next;
   }while(t!=NULL);

   return mini;
}

int max(node *t)
{
    int maxx=t->val;
   do
   {
       if(maxx<t->val)
            maxx=t->val;

       t=t->next;
   }while(t!=NULL);

    return maxx;
}

void simnode(node *p,node *q )
{
    int minn=(min(p)>min(q)?min(q):min(p));
    int maxx=(max(p)<max(q)?max(q):max(p));

  /*  cout<<minn<<endl;
    cout<<maxx<<endl;*/

    for(int i=minn;i<=maxx;i++)
    {
        /*cout<<i<<"\t";*/
        int a=0;
        int b=0;

        for(node *t=p;t!=nullptr;t=t->next)
        {
          /*  cout<<p->val<<endl;*/
            if(t->val==i)
                a=1;
        }
        for(node *t1=q;t1!=nullptr;t1=t1->next)
        {
           /* cout<<q->val<<endl;*/
            if(t1->val==i)
                b=1;
        }
        if(a==1 && b==1)
            cout<<i<<"\t ";
    }
}

void display(node *s)
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
    node *p=NULL;
    node *q=NULL;

    int ch,ele;
     do
     {
         cout<<"enter 1 for element in linked list"<<endl;
         cout<<"enter 2 for similar nodes in linked list"<<endl;
         cout<<"enter 3 for display"<<endl;
         cin>>ch;
         switch(ch)
         {
         case 1:
                p=ins(p);
                q=ins(q);
                break;
        case 2:
            simnode(p,q);
            break;
         case 3:
            display(p);
            cout<<endl;
            display(q);
            break;
         }
     }while(ch<=3);
}
