#include <iostream>
using namespace std;
struct queue
{
  int val;
  struct queue *next;
};

struct queue *temp=NULL;
struct queue *f=NULL;
struct queue *r=NULL;

void insert()
{
    int x;
    temp=new queue;
    if(temp==NULL)
    cout<<"overflow";
    else
    {
        cout<<"enter value ";
        cin>>x;
        temp->val=x;
        temp->next=nullptr;

        if(f==NULL)
            f=r=temp;
        else
        {
            r->next=temp;
            r=temp;
        }
    }
}

void dequeue()
{
    struct queue *t1=f;
    struct queue *t2=r;
    struct queue *t3=t1;

    /* while(t1!=t2)
    {
        t3=t1;
        while(t3->next!=t2)
            t3=t3->next;

        cout<<t2->val<<"\t";
        t2=t3;
    }
    cout<<t2->val<<"\t";


    */
    while(true)
    {
        t3=t1;
        while(t3->next!=t2)
            t3=t3->next;

        if(t2==t1 && t1!=NULL && t2!=NULL)
        {
            cout<<t2->val<<"\t";
            break;
        }
        else
            cout<<t2->val<<"\t";

        t2=t3;
    }
}
void display()
{
    for(temp=f;temp!=NULL;temp=temp->next)
        cout<<" "<<temp->val<<endl;

}
int main() {
    int ch,ele;
    do{
    cout<<"enter 1 for insert"<<endl;
    cout<<"enter 2 for dequeue"<<endl;
    cout<<"enter 3 for display"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        insert();
        break;
    case 2:
       dequeue();
        break;
     case 3:
        display();
        break;
    }
    }while(ch<=3);
}
