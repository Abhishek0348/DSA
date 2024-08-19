#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) return false;
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        while (slow != fast) {
            if (!fast || !fast->next) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
    }
};

int main() {

    Solution solution;

    // Creating a list: 1 -> 2 -> 3 -> 4 -> 5
    //                        ^         |
    //                        |_________|
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    head->next->next->next->next->next = head->next->next;

    if (solution.hasCycle(head)) {
        cout << "Cycle detected in the list." << endl;
    } else {
        cout << "No cycle detected in the list." << endl;
    }

    return 0;
}
