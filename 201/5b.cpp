/*Assume that we have two single linked lists.Pointers P and Q are pointing to first node of the linked lists respectively.
Write a C function to print dissimilar nodes from both the linked lists.*/
#include<iostream>
using namespace std;

typedef struct linkedlist
{
    int val;
    struct linkedlist* next;
} node;

node* temp = NULL;

node* insert(node* s1)
{
    int x;
    cout << "enter elements in linked list" << endl;
    cin >> x;
    temp = new linkedlist;
    if (temp == NULL)
        cout << "the linked list is empty";
    else
    {
        temp->val = x;
        temp->next = NULL;
        if (s1 == NULL)
            s1 = temp;
        else
        {
            temp->next = s1;
            s1 = temp;
        }
    }
    return s1;
}

int min(node* t)
{
    int mini = t->val;
    do
    {
        if (mini > t->val)
            mini = t->val;
        t = t->next;
    } while (t != NULL);

    return mini;
}

int max(node* t)
{
    int maxx = t->val;
    do
    {
        if (maxx < t->val)
            maxx = t->val;

        t = t->next;
    } while (t != NULL);

    return maxx;
}

void dnodes(node* p, node* q)
{
    int mini = (min(p) < min(q) ? min(p) : min(q));
    int maxi = (max(p) > max(q) ? max(p) : max(q));
    for (int i = mini; i <= maxi; i++)
    {
        int a = 0;
        int b = 0;
        for (node* t = p; t != nullptr; t = t->next)
        {
            if (t->val == i)
                a = 1;
        }
        for (node* t1 = q; t1 != nullptr; t1 = t1->next)
        {
            if (t1->val == i)
                b = 1;
        }
        if (a != b)
            cout << i << " ";
    }
    cout << endl;
}

void display(node* s)
{
    temp = s;
    do
    {
        cout << " " << temp->val;
        temp = temp->next;
    } while (temp != NULL);
}

int main()
{
    node* p = NULL;
    node* q = NULL;

    int ch, ele;
    do
    {
        cout << "enter 1 for element in linked list" << endl;
        cout << "enter 2 for dissimilar nodes in linked list" << endl;
        cout << "enter 3 for display" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            p = insert(p);
            q = insert(q);
            break;
        case 2:
            dnodes(p, q);
            break;
        case 3:
            display(p);
            cout << endl;
            display(q);
            break;
        }
    } while (ch <= 3);
}
