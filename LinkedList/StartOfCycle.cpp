#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Detect if there is a cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break;
            }
        }
        
        // If no cycle is found, return nullptr
        if (slow != fast) return nullptr;
        
        // Find the start of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;  // The start of the cycle
    }
};

int main() {
    // Example usage:
    Solution solution;

    // Creating a list: 1 -> 2 -> 3 -> 4 -> 5
    //                        ^         |
    //                        |_________|
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    // Creating a cycle: connecting node 5 to node 3
    head->next->next->next->next->next = head->next->next;

    ListNode* cycleStart = solution.detectCycle(head);
    if (cycleStart) {
        cout << "Cycle detected at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle detected in the list." << endl;
    }

    return 0;
}
