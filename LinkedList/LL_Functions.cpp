#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
}; 

class Solution {
public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode = new Node(x);
        if (head == nullptr) {
            return newNode;
        }
        
        Node *temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp->next = newNode;
        return head;
    }

    Node *deleteAtEnd(Node *head) {
        if (head == nullptr) {
            return nullptr;
        }
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }

        Node *temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = nullptr;
        return head;
    }

    Node* deleteAtPos(Node* head, int k) {
        if (head == nullptr || k <= 0) {
            return head;
        }

        if (k == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* temp = head;
        for (int i = 1; temp != nullptr && i < k - 1; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            return head;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
    }

    Node* insertAtPos(Node* head, int pos, int x) {
        if (pos <= 0) {
            return head;
        }

        Node* newNode = new Node(x);
        if (pos == 1) {
            newNode->next = head;
            return newNode;
        }

        Node* temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            return head;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};

void printList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--) {
        vector<int> arr;
        string input;
        cout << "Enter the elements: ";
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cout << "Enter the value to be inserted at the end of the linked list: ";
        cin >> x;

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

        head = ob.insertAtEnd(head, x);
        cout << "After insertion at end: ";
        printList(head);

        int k;
        cout << "Enter the position of the element to be deleted: ";
        cin >> k;
        head = ob.deleteAtPos(head, k);
        cout << "After deletion at position " << k << ": ";
        printList(head);

        int p;
        cout << "Enter the position of the element to be inserted: ";
        cin >> p;
        cout << "Enter the value to be inserted at position " << p << ": ";
        cin >> x;
        head = ob.insertAtPos(head, p, x);
        cout << "After insertion at position " << p << ": ";
        printList(head);

        cout << "Performing deletion at the end: ";
        head = ob.deleteAtEnd(head);
        printList(head);
    }

    return 0;
}
