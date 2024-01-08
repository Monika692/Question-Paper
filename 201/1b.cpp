/*Convert the following infix expression into postfix expression using Stack (Show all steps)
(A*B)/C+D*(G-H)+I/E   Answer-> AB*C/DGH-*IK/++ */

#include<iostream>
#define MAX 10
using namespace std;
int top=-1;
char stack[MAX];

void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    char p=stack[top];
    top--;
    return p;
}

int prior(char ch)
{
    if(ch=='('|| ch==')' || ch=='^')
        return 3;
    else if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;
}

int main()
{
    char ch[]={'(','A','*','B',')','/','C','+','D','*','(','G','-','H',')','+','I','/','K','\0'};
    char output[100];
    int j=0;
    for(int i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            output[j++]=ch[i];
        else
        {
            if(ch[i]==')')
            {
                while(stack[top]!='(')
                    output[j++]=pop();
                pop();
            }
            // stack[top] is * and priro(ch[i]) is +
            if(prior(stack[top])>prior(ch[i]))
            {
                while(prior(stack[top])>prior(ch[i]))
                    output[j++]=pop();

                push(ch[i]);
            }
        }
        //cout<<output[j]<<" \t ";
    }
    output[j]='\0';

    for(j=0;output[j]!=NULL;j++)
       cout<<output[j]<<" \t ";
}
