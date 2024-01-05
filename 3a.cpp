/*consider the following linkedlist,first node of the linkedlist is pointed by a pointer P.Write a C function to count nodes having odd information in linked list .*/
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
        cout<<"linked list is empty"<<endl;
    else
    {
       temp->val=x;
       temp->next=s;

       if(s==NULL)
            s=e=temp;
       else
       {
            temp->next=s;
            s=temp;
            e->next=s;
       }
    }
}

void cnt()
{
    int i=1, odd=0,even=0;
    temp=s;
    do{
       if(temp->val%2==0)
            even++;
       else
            odd++;
       temp=temp->next;
    }while(temp!=s);

    cout<<"No of Odd Node's "<<odd<<endl;
    cout<<"No of Even Node's "<<even<<endl;
}


void display()
{
    temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=s);
}


int main()
{
     int ch,ele,pos;
    do{
        cout<<"enter 1 to enter elements in linkedlist"<<endl;
        cout<<"enter 2 for showing the count of odd nodes"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
             cout<<"enter element to enter at start"<<endl;
             cin>>ele;
             insert(ele);
             break;
        case 2:
            cnt();
            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
