#include <bits/stdc++.h>
using namespace std;
class Node
{
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
Node * merge(Node *b,Node *c)
{
    if(b==NULL)
    return c;
    if(c==NULL)
    return b;
    Node dummy;
    Node *result=&dummy;
    Node *ptr=b,*qtr=c;
    while(ptr!=NULL && qtr!=NULL)
    {
    if(ptr->data <= qtr->data)
    {
        result->next=new Node(ptr->data);
        result=result->next;
        ptr=ptr->next;
    }
    else
    {
        result->next=new Node(qtr->data);
        result=result->next;
        qtr=qtr->next;
    }
    }
    while(ptr!=NULL)
    {
        result->next=new Node(ptr->data);
        result=result->next;
        ptr=ptr->next;
    }
    while(qtr!=NULL)
    {
         result->next=new Node(qtr->data);
        result=result->next;
        qtr=qtr->next;
    }
    return dummy.next;
}
int main() {
	// your code goes here
	singlyLinkedList a,b,c;
	b.insertAtEnd(1);
	b.insertAtEnd(3);
	b.insertAtEnd(5);
	b.insertAtEnd(7);
	c.insertAtEnd(2);
	c.insertAtEnd(4);
	c.insertAtEnd(6);
	c.insertAtEnd(8);
	a.head=merge(b.head,c.head);
	a.printList();
	
}
