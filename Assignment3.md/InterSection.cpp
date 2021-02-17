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
Node *Intersection(Node *a, Node *b)
{
    if (a == NULL || b == NULL)
        return NULL;

    Node dummy;
    Node *result = &dummy;
    Node *ptr = a, *qtr = b;
    while(ptr != NULL && qtr != NULL) {
        if (ptr->data == qtr->data) {
            result->next = new Node(ptr->data);
            result = result->next;
            ptr = ptr->next;
            qtr = qtr->next;
        } else if (ptr->data < qtr->data) {
            ptr = ptr->next;
        } else {
            qtr = qtr->next;
        }
    }
    return dummy.next;
}
int main()
{
    singlyLinkedList a,b,c;
    a.insertAtEnd(1);
    a.insertAtEnd(2);
    a.insertAtEnd(3);
    a.insertAtEnd(4);
    b.insertAtEnd(1);
    b.insertAtEnd(10);
    b.insertAtEnd(3);
    b.insertAtEnd(21);
    c.head=Intersection(a.head,b.head);
    c.printList();
    return 0;
}
