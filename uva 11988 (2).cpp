#include<iostream>
using namespace std;
struct node
{
    char ltr;
    node* next;
};
int main()
{
    long long int i,n,k;
    char c;
    struct node *word, *head,*last,*current;
    word = new node[100000];
    cin>>c;
    current->ltr=c;
    head=current;
    while(cin>>c)
    {
        if(c=='\n')
            break;
        current= current->link;
        current->ltr=c;
    }
    return 0;
}

