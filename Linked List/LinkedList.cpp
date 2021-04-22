#include <bits/stdc++.h>
#define int long long
using namespace std;
class node 
{
    public: 
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void print (node* head)
{
    node* cur=head;
    for(cur=head;cur!=NULL;cur=cur->next)
    {
        cout<<cur->data<<" ";
    }
}
node* insertAtHead(node* &head , int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        head->next=NULL;
    }
    else
    {
        n->next=head;
        head=n;
    }
    return head;

    
}
node* insertAtEnd(node* &head,int val){
    node* n=new node(val);
    node* cur=head;
    if(head==NULL)
    {
        head=n;
        head->next=NULL;
    }
    else
    {
       for(cur=head;cur->next!=NULL;cur=cur->next)
        {

        }
        cur->next=n; /* code */
    }
    
    
    return head;

}
node* insertAtNth(node* &head,int val,int pos)
{
    node* n=new node( val);
    node* cur=head;
    if (pos==1)
    {
        n->next=head;
        head=n;
        //return head;

    }
    pos=pos-1;
    while(--pos and cur!=NULL)
    {
        cur=cur->next;
    }
    if(cur==NULL)
    {
        return NULL;
    }
    n->next=cur->next;
    cur->next=n;
    return head;
 }



int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    node* head=NULL;
    insertAtHead(head,1);
    insertAtEnd(head,2); 
    insertAtEnd(head,3);
    insertAtNth(head,4,4);
    
    
    print(head);


    return 0;

}