#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    Node()
    {
        Node(0);
    }
};
class singlyLinkedList{
  public:
  Node *head;
  singlyLinkedList()
  {
      this->head=NULL;
  }
   void insertAtEnd(int data)
  {
      Node *newNode=new Node(data);
      if(head==NULL)
      {
         head=newNode;
      }
      Node *ptr=head;
      while(ptr->next!=NULL)
      {
          ptr=ptr->next;
      }
      ptr->next=newNode;
      newNode->next=NULL;
  }
    void printList()
  {
      Node *ptr=head;
      while(ptr!=NULL)
      {
          cout<<ptr->data<<" ";
          ptr=ptr->next;
      }
      cout<<endl;
  }
};
 Node * sumTwoList(Node *a,Node *b)
  {
      if(a==NULL)
      return b;
      if(b==NULL)
      return a;
      Node dummy;
      Node *ptr=a,*qtr=b,*result=&dummy;
      int carry=0;int sum=0;
      while(ptr!=NULL || qtr!=NULL)
      {
          sum=carry+(ptr!=NULL?ptr->data:0)+(qtr!=NULL?qtr->data:0);
          carry=sum/10;
          result->next=new Node(sum);
          result=result->next;
          if(ptr!=NULL)
          ptr=ptr->next;
          if(qtr!=NULL)
          qtr=qtr->next;
      }
       if (carry > 0)
    {
        result->next = new Node(carry);
    }

    return dummy.next;
  }
int main()
{
    singlyLinkedList a,b,c;
    a.insertAtEnd(1);
    a.insertAtEnd(2);
    a.insertAtEnd(3);
    b.insertAtEnd(3);
    b.insertAtEnd(2);
    b.insertAtEnd(1);
    c.head=sumTwoList(a.head,b.head);
    c.printList();
}
