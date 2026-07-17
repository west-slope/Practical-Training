// 思路：同时遍历两个有序链表，每次取较小节点值接入新链表，最后连接剩余部分。
#include<iostream>
using namespace std;

struct node
{
    int num;
    node *next;
};
int main()
{
    node *head0=NULL,*head1=NULL,*head2=NULL,*p0,*p1,*p2,*p;
    int m,n;
    cin>>m;
    while(m!=-1)
    {
        p0=new node;p0->num=m;p0->next=NULL;
        if(head1==NULL)head1=p1=p0;
        else {
            p1->next=p0;
            p1=p0;
        }
        cin>>m;
    }
        cin>>n;
        while(n!=-1)
    {
        p0=new node;p0->num=n;p0->next=NULL;
        if(head2==NULL)head2=p2=p0;
        else {
            p2->next=p0;
            p2=p0;
        }
        cin>>n;
    }
    if(head1==NULL)head0=head2;
    else if(head2==NULL)head0=head1;
    else {
        p1=head1,p2=head2;
        while(p1!=NULL&&p2!=NULL)
        {
            if(p1->num>=p2->num) // 比较两个当前节点，优先复制数值较小的一方。
            {
                p0=new node;
                p0->num=p2->num;
                p0->next=NULL;
                if(head0==NULL)
                {
                    head0=p=p0;
                }
                else {
                    p->next=p0;
                    p=p0;
                }
                p2=p2->next;
            }
            else if(p1->num<p2->num)
            {
                p0=new node;
                p0->num=p1->num;
                p0->next=NULL;
                if(head0==NULL)
                {
                    head0=p=p0;
                }   
                else {
                    p->next=p0;
                    p=p0;
                }
                p1=p1->next;
            }
        }
    
        if(p1==NULL)
            p->next=p2;
        else if(p2==NULL)
            p->next=p1;
    }
    p=head0;
    while(p!=NULL)
    {
        cout<<p->num<<" ";
        p=p->next;
    }


}
// 总结：归并有序链表的关键是双指针推进，并在一方结束后直接接上另一方。