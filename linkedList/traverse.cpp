#include<iostream>
using namespace std;

class Node {
    public:
    
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtLast(Node* &head, int val){
    Node* newNode = new Node(val);

    Node* temp = head;

    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}

void display(Node* head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    // Node* n1 = new Node(1);
    // Node* n2 = new Node(2);
    // Node* n3 = new Node(3);

    // n1 -> next = n2;
    // n2 -> next = n3;
    Node* head = NULL;
    // display(head);
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtLast(head, 7);
    display(head);

   
    // cout << n->val << " " << n->next <<endl;
    // cout << n <<endl;

    // traverse the LinkedList
    // Node* temp = n1;
    // while (temp != NULL) {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }

    cout << endl;



    return 0;
}