struct Node {
    int data;
    Node* next;
};
typedef Node* NODE;

NODE insertAtPositionInCLL(NODE first, int pos, int x) {
    NODE newNode = new Node(); // creation of newNode
    newNode->data = x;
    newNode->next = nullptr;

    // Case 1: Insert at beginning
    if (pos == 1) {
        if (first == nullptr) {
            newNode->next = newNode;  // Point to itself
            return newNode;
        } else {
            NODE temp = first;
            while (temp->next != first) {
                temp = temp->next;
            }
            newNode->next = first;
            temp->next = newNode;
            return newNode;  // New node becomes the first
        }
    }

    // Case 2: Insert at position other than first
    NODE temp = first;
    for (int i = 1; i < pos - 1 && temp->next != first; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return first;  // first node remains unchanged
}
