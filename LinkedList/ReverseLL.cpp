#include <bits\stdc++.h>

using namespace std;

class Node
{
    public:

    Node* next;
    int Data;

    public :

    Node( int Data1, Node* next1){
        next = next1;
        Data = Data1;
    }

    Node( int Data1){
        next = nullptr;
        Data = Data1;
    }

};

Node* CreateLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        Node* New_Node = new Node(arr[i], nullptr);
        temp->next = New_Node;
        temp = New_Node;
    }
    return head;
}

Node* ReverseLL(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* next;
    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
  vector<int> arr = {2,3,4,1,6,5};
  Node* head = CreateLL(arr);
  
  Node* temp = head;
  while(temp != nullptr){
    cout<<temp->Data<<"->";
    temp = temp->next;
  }
  cout << endl;

  Node* rev = ReverseLL(head);
  Node* reverse = rev;
  while(reverse != nullptr){
    cout<<reverse->Data<<"->";
    reverse = reverse->next;
  }
  cout << endl;
}