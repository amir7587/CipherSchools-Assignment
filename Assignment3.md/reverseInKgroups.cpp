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
  Node * reverseGroup(Node *head,int k)
  {
      if(head==NULL || head->next==NULL)
      return NULL;
      Node *curr=head,*prev=NULL,*next=NULL;
      int count=0;
      while(curr!=NULL && count<k)
      {
          count++;
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
      }
      if(next!=NULL)
      {
          head->next=reverseGroup(next,k);
      }
      return prev;
  }
 void reverseInK(int k)
  {
      this->head=reverseGroup(head,k);
      
  }
};
int main() {
    
   singlyLinkedList sll;
   for(int i=1;i<11;i++)
   {
       sll.insertAtEnd(i);
   }
   int k=3;
   sll.reverseInK(k);
   sll.printList();
}
