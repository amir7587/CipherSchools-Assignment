#include<bits/stdc++.h>
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
class SinglyLinkedList
{
    public:
    Node *head;
    SinglyLinkedList()
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
  void ReverseLinkedList()
  {
      if(head==NULL || head->next==NULL)
      return;
      Node *curr=head,*prev=NULL;
      while(curr!=NULL)
      {
          Node *temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
      }
      head=prev;
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
   SinglyLinkedList sll;
	for(int i=0;i<5;i++)
	{
	    //sll.insertAtBeginning(i);
	    sll.insertAtEnd(i);
	}
	sll.printList();
	cout<<endl<<"Reversing The LinkedList"<<endl;
	sll.ReverseLinkedList();
	sll.printList();
    return 0;
}
