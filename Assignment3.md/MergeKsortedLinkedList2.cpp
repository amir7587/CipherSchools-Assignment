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
};
Node * sortedMerge(Node *a, Node *b)
{
    Node *result;
    if(a==NULL)
    return b;
    else if(b==NULL)
    return a;
     if (a->data <= b->data) {
        result = a;
        result->next = sortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = sortedMerge(a, b->next);
    }
 
    return result;
}
Node * mergeKlist(Node * arr[],int last)
{
    while(last !=0)
    {
        int i=0,j=last;
        while(i<j)
        {
            arr[i]=sortedMerge(arr[i],arr[j]);
            i++;j--;
            if(i>=j)
            last=j;
        }
    }
    return arr[0];
}

int main() {
    
    int k=3; //It is number of sorted Linked List
    int n=4; //it is no. of Element in sorted Linked List;
    
    singlyLinkedList arr[k],c;
    
    arr[0].insertAtEnd(1);
    arr[0].insertAtEnd(3);
    arr[0].insertAtEnd(5);
    arr[0].insertAtEnd(7);
    
    arr[1].insertAtEnd(2);
    arr[1].insertAtEnd(4);
    arr[1].insertAtEnd(6);
    arr[1].insertAtEnd(8);
    
    arr[2].insertAtEnd(0);
    arr[2].insertAtEnd(9);
    arr[2].insertAtEnd(10);
    arr[2].insertAtEnd(11);
    
     c.head=mergeKlist(arr,k-1);
    c.printList();
}
