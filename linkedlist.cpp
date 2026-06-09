#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class list{
  Node* head;
  Node* tail;
public:
  list(){
    head = tail = NULL;
  }

  void push_front(int val){
    Node* newn = new Node(val);
    if(head == NULL){
      head=tail=newn;
      return;
    }
    else{
      newn->next = head;
      head = newn;
    }
  }

  void print(){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
  }

  void push_back(int val){
    Node* newn = new Node(val);
    if(head == NULL){
      head = tail = newn;
    }else{
      tail->next = newn;
      tail = newn;
    }
  }
};

int main(){
  list ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_back(6);

  ll.print();
}