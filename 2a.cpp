/*Assume that we have a singly linked list ,first node of the linked list is poined by a pointer PTR. Write a C function to split that linked list
in two linked lists as per the choice given by the user (Nodes' information)*/
#include<iostream>
using namespace std;
typedef struct linkedlist{
    int val;
    struct linkedlist *next;
}node;

node *s1=NULL;
node *s2=NULL;
node *e=NULL;
node *temp=NULL;

void insert(int x)
{
    temp=new linkedlist;
    if(temp==nullptr)
        cout<<"linked list is empty"<<endl;
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(s1==NULL)
            s1=e=temp;
        else
        {
            temp->next=s1;
            s1=temp;
        }
    }
}

void splitn(int pos)
{
    int i=1;
    node *t1=nullptr;
    node *t2=s1;
    while(i!=pos+1)
    {
        t1=t2;
        t2=t2->next;
        i++;
    }
    t1->next=NULL;
    s2=t2;
}

void display(node *tmp)
{
    while(tmp!=nullptr)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}


int main()
{
   int ch,ele,pos;
   do{
    cout<<"enter 1 for to insert element "<<endl;
    cout<<"enter 2 for splitting "<<endl;
    cout<<"enter 3 for display "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"enter elements in linked list"<<endl;
        cin>>ele;
        insert(ele);
        break;
    case 2:
        cout<<"enter position from where it will be splitted "<<endl;
        cin>>pos;
        splitn(pos);
        break;
    case 3:
        cout<<endl;
        display(s1);
        cout<<endl;
        display(s2);
        cout<<endl;
        break;
    }
   }while(ch<=3);
}
