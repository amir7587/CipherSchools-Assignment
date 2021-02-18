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
   int getSize()
    {
        Node *ptr = head;
        int size = 0;
        while (ptr != NULL)
        {
            size++;
            ptr = ptr->next;
        }
        return size;
    }
 Node * reverseAlternateKNodes(Node *head,int k)
 {
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
     if(head!=NULL)
     head->next=curr;
     count=0;
     while(count<k-1 && curr!=NULL)
     {
         curr=curr->next;
         count++;
     }
     if(curr!=NULL)
     {
         curr->next=reverseAlternateKNodes(curr->next,k);
     }
     return prev;
 }
 void reverseKnodes(int k)
 {
     this->head=reverseAlternateKNodes(head,k);
 }
};
int main() {
    
   singlyLinkedList sll;
   for(int i=1;i<10;i++)
   {
       sll.insertAtEnd(i);
   }
   int k=3;
   sll.reverseKnodes(3);
   sll.printList();
}
