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
  bool isPalindrome()
  {
      stack<int> s;
      if(head==NULL && head->next==NULL)
      return false;
      Node *ptr=head;
      while(ptr!=NULL)
      {
          s.push(ptr->data);
          ptr=ptr->next;
      }
      Node *ptr1=head;
      while(ptr1!=NULL && !s.empty())
      {
          int data=s.top();
          if(data!=ptr1->data)
          return false;
          ptr1=ptr1->next;
          s.pop();
      }
      return true;
  }
};
int main()
{
    singlyLinkedList sll;
    sll.insertAtEnd(1);
    sll.insertAtEnd(2);
    sll.insertAtEnd(3);
    sll.insertAtEnd(3);
    sll.insertAtEnd(2);
    sll.insertAtEnd(1);
    if(sll.isPalindrome())
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}
