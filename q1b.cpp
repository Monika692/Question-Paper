/*Q2.Assume that we have a single linked list first node of the linked list is pointed by a
pointer PTR. Write a C function to delete duplicate nodes in the linked list.  Using bubble sort techqniue here taking start and end with a mid val checking
the value .*/
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
        cout<<" Empty LinkedList "<<endl;
    else
    {
        if(s==NULL)
            s=e=temp;
        else
        {
         temp->next=s;
         s=temp;
        }
    }
}

void del(int x)
{

}
int main()
{
    int ch;
 cout<<"enter your choice "<<endl;
 cin>>ch;

}
