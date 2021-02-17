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
  bool detectLoop()
  {
      if(head==NULL||head->next==NULL)
      return false;
      Node *slow=head,*fast=head;
      while(slow!=NULL && fast!=NULL && fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast)
          return true;
      }
      return false;
  }
  void RemoveLoop()
  {
      if(head==NULL && head->next==NULL)
      return ;
      Node *slow=head,*fast=head;
      bool isLoopPresent=false;
      while(slow!=NULL && fast!=NULL&&fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast)
          {
              isLoopPresent=true;
              break;
          }
      }
      if(isLoopPresent)
      {
          slow=head;
          if(slow==fast)
          {
             while(fast->next!=slow)
             {
                 fast=fast->next;
             }
          }
          else
          {
          while(slow->next!=fast->next)
          {
              slow=slow->next;
              fast=fast->next;
          }
          }
          fast->next=NULL;
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
    singlyLinkedList *sll = new singlyLinkedList();
    sll->head = new Node(1);
    sll->head->next = new Node(2);
    sll->head->next->next = new Node(3);
    sll->head->next->next->next = new Node(4);
    sll->head->next->next->next->next = new Node(5);
    cout << sll->detectLoop() << "\n";
    sll->head->next->next->next->next->next = sll->head;
    cout << sll->detectLoop() << "\n";
    sll->RemoveLoop();
    sll->printList();
    return 0;
}
