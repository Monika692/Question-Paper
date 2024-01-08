/*Assuming that you have two linked lists .Write a c function to connect them one after the other.
First linked list is pointed by a pointer S and the second list is pointed by Pointer Q*/
#include<iostream>
using namespace std;

typedef struct linkedlist
{
 int val;
 struct linkedlist *next;
}node;

node *insert(node *s,int x)
{
    node *temp=new linkedlist();
    if(temp==NULL)
        cout<<"the linked list is empty"<<endl;
    else{
        temp->val=x;
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

void display(node *temp)
{
    do
    {
        cout<<" "<<temp->val;
        temp=temp->next;
    }while(temp!=NULL);
}

void mergenode(node *s1,node *s2)
{
    node *temp1=s1;
    while(temp1->next!=NULL)
        temp1=temp1->next;

    temp1->next=s2;

    cout<<endl<<"Linklist after Merging : \t "<<endl;
    display(s1);
}


int main()
{
    node *start1=NULL;
    node *start2=NULL;
    node *temp=NULL;
    int ch,ele;
    do
    {
        cout<<"\nEnter 1 to enter in linked list"<<endl;
        cout<<"\nEnter 2 for merge nodes to display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
                for(int i=0;i<5;i++)
                {
                    cout<<"\nEnter elements in First linked list"<<endl;
                    cin>>ele;
                    start1=insert(start1,ele);

                    cout<<"\nEnter elements in second linked list"<<endl;
                    cin>>(ele);
                    start2=insert(start2,ele);
                }
                cout<<endl;
                display(start1);
                cout<<endl;
                display(start2);
                break;
        case 2:
                mergenode(start1,start2);
                break;
        }
    }while(ch<=2);
}
