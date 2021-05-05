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
    cout<<endl;
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
void middle(node* head)
{
    if(head==NULL and head->next==NULL)
    {
        cout<<head->data;
        return;
    }
    node* slow= head;
    node* fast = head;
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;

    

}





int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2); 
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    print(head);
    middle(head);


    return 0;

}