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
  void removeDuplicate()
  {
      if(head==NULL && head->next==NULL)
      return;
      Node *prev=NULL,*curr=head;
      while(curr->next!=NULL)
      {
          prev=curr;
          curr=curr->next;
          if(prev->data==curr->data)
          {
              Node *temp=curr;
              prev->next=curr->next;
              curr=prev->next;
              delete temp;
              if(curr==NULL)
              break;
          }
      }
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

int main()
{
    singlyLinkedList sll;
    for(int i=0;i<5;i++)
    sll.insertAtEnd(i);
    sll.insertAtEnd(4);
    sll.insertAtEnd(5);
    sll.insertAtEnd(5);
    sll.insertAtEnd(6);
    sll.insertAtEnd(7);
    sll.insertAtEnd(7);
    sll.printList();
    sll.removeDuplicate();
    sll.printList();
    return 0;
}
