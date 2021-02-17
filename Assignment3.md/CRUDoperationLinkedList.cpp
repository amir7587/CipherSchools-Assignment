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
  void insertAtPosition(int data,int pos)
  {
      Node *newNode = new Node(data);
      if(head==NULL)
      {
          head=newNode;
      }
      int i=1;
      if(pos==1)
      {
          newNode->next=head;
          head=newNode;
      }
      else
      {
          Node*ptr=head;
      while(ptr!=NULL && i<pos)
      {
          //qtr=ptr;
          ptr=ptr->next;
          i++;
      }
      Node *temp=ptr->next;
      ptr->next=newNode;
      newNode->next=temp;
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
  void deleteFromEnd()
  {
      Node *ptr=head,*qtr;
      if(head==NULL)
      {return;}
      if(head->next==NULL)
      {
          Node *temp=head;
          head=head->next;
          delete temp;
          return;
      }
      else
        {
             while(ptr->next!=NULL)
             {
                qtr=ptr;
                ptr=ptr->next;
             }
                qtr->next=NULL;
                delete ptr;
        }
  }
  void deleteKey(int key)
  {
      Node *curr=head,*prev;
      if(curr!=NULL && curr->data==key)
      {
          head=curr->next;
          delete curr;
          
      }
      else
      {
          while(curr!=NULL && curr->data!=key)
          {
              prev=curr;
              curr=curr->next;
          }
          prev->next=curr->next;
          delete curr;
      }
  }
   void deleteFromPosition(int pos)
  {
      Node *curr=head,*prev;
      
      if(head==NULL)
      {
         return;
      }
      else
      {   
          int count=1;
          while(curr!=NULL && count<pos)
          {
              prev=curr;
              curr=curr->next;
              count++;
          }
          if(curr!=NULL)
          {
          prev->next=curr->next;
          delete curr;
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
int main() {
	// your code goes here
	singlyLinkedList sll;
	for(int i=0;i<5;i++)
	{
	    //sll.insertAtBeginning(i);
	    sll.insertAtEnd(i);
	}
	cout<<"Size Before Insertion :"<<sll.getSize();
	sll.insertAtPosition(10,1);
	cout<<endl<<"Size after Insertion :"<<sll.getSize()<<endl;
	sll.printList();
	sll.deleteFromBeginning();
	cout<<endl<<"After Deleting The First Node"<<endl;
	sll.printList();
	sll.deleteFromEnd();
	cout<<endl<<"After Deleting From End"<<endl;
	sll.printList();
	cout<<"After Deleting 2 i.e key 2:"<<endl;
	sll.deleteKey(2);
	sll.printList();
	cout<<endl<<"Deleting From 2nd Position:"<<endl;
	sll.deleteFromPosition(2);
	sll.printList();
	
	return 0;
}
