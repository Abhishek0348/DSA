#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; 

class Solution {
public:
    Node *insertAtEnd(Node *head, int x) {
        if (head == nullptr) {
            return new Node(x);
        }
        
        Node *temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = new Node(x);
        return head;
    }

    Node *DeleteAtEnd(Node *head){
        if (head == nullptr) {
            return head;
        }
        Node *temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = nullptr;
        return head;
    }
};

void printList(Node *ans) {
    Node *temp = ans;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int t;
    cout<< "Enter the no. of items in linked list : ";
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        cout << "Enter the elements : ";
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cout << "Enter the value to be inserted at the end of the linked list : ";
        cin >> x;
        cin.ignore();

        Node* head = nullptr;

        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        Node* ans = ob.insertAtEnd(head, x);
        cout << "After Insertion at End : "
        printList(ans);
        Node* del = ob.DeleteAtEnd(head);
        cout << "After Deletion at End : ";
        printList(del);
    }

    return 0;
}
