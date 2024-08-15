#include <bits\stdc++.h>

using namespace std;

class Node
{
public:
    Node *next;
    int Data;

public:
    Node(int Data1, Node *next1)
    {
        next = next1;
        Data = Data1;
    }

    Node(int Data1)
    {
        next = nullptr;
        Data = Data1;
    }
};

Node *CreateLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *New_Node = new Node(arr[i], nullptr);
        temp->next = New_Node;
        temp = New_Node;
    }
    return head;
}

Node *MidNode(Node *head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector<int> arr = {1, 2};
    Node *head = CreateLL(arr);

    Node *ans = MidNode(head);

    Node *temp = ans;
    while (temp != nullptr)
    {
        cout << temp->Data << " ";
        temp = temp->next;
    }
}