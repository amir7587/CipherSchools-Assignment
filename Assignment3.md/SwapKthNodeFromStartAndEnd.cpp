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
 void swapLinkedListKpositions(int k)
 {
     int len=getSize();
     if(head==NULL)
     return;
     if(k>len)
     return;
     Node *curr1=head;
     Node *prev1=NULL;
     Node *curr2=head;
     Node *prev2=NULL;
     int countStart=1,countEnd=1;
     while(countStart<k)
     {
         countStart++;
         prev1=curr1;
         curr1=curr1->next;
     }
     while(countEnd<len-k+1)
     {
         countEnd++;
         prev2=curr2;
         curr2=curr2->next;
     }
     Node *temp1=curr1;
     Node *temp2=curr2->next;
     curr2->next=curr1->next;
     prev1->next=prev2->next;
     prev2->next=curr1;
     curr1->next=temp2;
     
 }
 
};
int main() {
    
   singlyLinkedList sll;
   for(int i=1;i<10;i++)
   {
       sll.insertAtEnd(i);
   }
   int k=3;
   sll.swapLinkedListKpositions(k);
   sll.printList();
}
