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
    int countCommon(Node *a, Node *b) 
{ 
    int count = 0; 
  
    for (; a && b; a = a->next, b = b->next) 
  
        if (a->data == b->data) 
            ++count; 
        else
            break; 
  
    return count; 
} 
 int maxPalindrome(Node *head) 
{ 
    int result = 0; 
    Node *prev = NULL, *curr = head; 
  
   
    while (curr) 
    { 
        
        Node *next = curr->next; 
        curr->next = prev; 
  
       
        result = max(result, 
                     2*countCommon(prev, next)+1); 
        result = max(result, 
                     2*countCommon(curr, next)); 

        prev = curr; 
        curr = next; 
    } 
    return result; 
} 
};
int main() {
    
    singlyLinkedList a,b;
    b.insertAtEnd(2);
    b.insertAtEnd(4);
    b.insertAtEnd(3);
    b.insertAtEnd(4);
    b.insertAtEnd(2);
    b.insertAtEnd(15);
     int x=b.maxPalindrome(b.head);
     cout<<x;
    return 0; 
}
