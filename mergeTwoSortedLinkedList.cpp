//
// Created by SAURABH on 26-01-2020.
//


struct Node {
    int data;
    Node *next;

public:
    Node(int v) {
        data = v;
        next = NULL;
    }
};

Node* insert(Node* head, int val) {
    Node* new_node = new Node(val);
    /* new_node->data = val;
     new_node->next = NULL;*/
    //*head = new_node;

    if (head == NULL) return new_node;
    else {
        Node* temp = head;

        while (temp->next != NULL) {

            temp = temp->next;

        }
        temp->next = new_node;
    }

    return head;

}

void printNode(Node* n) {

    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

Node* mSorted(Node *a, Node  *b) {

    Node* result = NULL;
    if (a == NULL) return b;
    else if (b == NULL) return a;

    if (a->data <= b->data) {
        result = a;
        result->next = mSorted(a->next, b);

    }
    else {
        result = b;
        result->next = mSorted(a, b->next);
    }

    return result;



}

int main() {

     Node* res = NULL;
     Node* a = NULL;
     Node* b = NULL;

     a=insert(a, 5);
     a=insert(a, 10);
     a=insert(a, 15);


     b=insert(b, 2);
     b=insert(b, 3);
     b=insert(b, 20);


     res = mSorted(a, b);
     printNode(res);



    return 0;





}