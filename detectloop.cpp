#include <iostream>
#include <map>
using namespace std;

// Definition for singly linked list node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to detect loop using map
bool detectloop(Node* head) {
    if (head == NULL) {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while (temp != NULL) {
        if (visited[temp] == true) {
            return true; // loop detected
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false; // no loop
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Introduce a loop for testing: last node (5) points to node (3)
    head->next->next->next->next->next = head->next->next;

    // Detect loop
    if (detectloop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
