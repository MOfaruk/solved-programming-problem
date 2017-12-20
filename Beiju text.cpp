#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
struct node
{
    char ch;
    struct node *next;
};
int main()
{
    struct node *head,*current,*link;
    int i;
    char ltr;

    current = new node;
    head= new node;
    head=current;
    cin>>ltr;
    current->ch= ltr;

    while(scanf("%c",&ltr)==1)
    {
        link= new node;
        current->next= link;
        link->ch=ltr;
        if(ltr=='\n')
            break;
        current->next= link->next;
    }
    current=head;
    while((current->ch)!='\n')
    {
        cout<<(current->ch);
        current=current->next;
    }
    cout<<12;
}
