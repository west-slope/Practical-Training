// 思路：建立单链表后用三个指针逐步反转每条指针方向，再从新头节点输出。
#include<iostream>
using namespace std;

struct node
{
    int m;
    node *Next;
};

int main()
{
    int n,num=0;
    node *p0,*head,*p1;
    cin>>n;
    while(n!=-1)
    {

        p0=new node;
        p0->m=n;p0->Next=NULL;
        if(num==0)
            p1=head=p0;
        else {p1->Next=p0;p1=p0;}
        num++;
        cin>>n;
    }
    node *pre,*cur,*next;
    pre=head;
    if(head->Next!=NULL){cur=next=head->Next;pre->Next=NULL;}
    else {cout<<head->m;return 0;}
    while(next->Next!=NULL)
    {
        next=next->Next;
        cur->Next=pre; // 让当前节点指向前驱节点，完成一条链的反转。
        pre=cur;
        cur=next;
    }
    next->Next=pre;
    p1=head=next;
    while(p1!=NULL)
    {
        cout<<p1->m<<" ";
        p1=p1->Next;
    }

}
// 总结：链表反转前必须保存后继节点，否则修改指针后会丢失剩余链表。