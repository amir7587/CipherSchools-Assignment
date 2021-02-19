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
class stackLinkedList{
    public:
  Node *head;
  stackLinkedList()
  {
      this->head=NULL;
  }
  void insertAtBeginning(int data)
  {
      Node *newNode=new Node(data);
      if(head==NULL)
      {
          head=newNode;
      }
      else
      {
          newNode->next=head;
          head=newNode;
      }
  }
  
  int getSize()
  {
      Node *ptr=head;
      int count=0;
      while(ptr!=NULL)
      {
          count++;
          ptr=ptr->next;
      }
      return count;
  }
  void deleteFromBeginning()
  {
      if(head==NULL)
      {
          return;
      }
      Node *temp=head;
      head=head->next;
      delete temp;
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
int main() {
	// your code goes here
	stackLinkedList sll;
	for(int i=0;i<5;i++)
	{
	    sll.insertAtBeginning(i);
	}
	sll.printList();
	sll.deleteFromBeginning();
	cout<<endl<<"After Deleting The First Node"<<endl;
	sll.printList();
	return 0;
}
