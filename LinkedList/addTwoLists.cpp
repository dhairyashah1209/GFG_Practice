// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* addTwoLists(struct Node* first, struct Node* second);

void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}
// } Driver Code Ends

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list

Node* addTwoLists(Node* first, Node* second) {
    
    Node *head1 = first;
    Node *head2 = second;
    Node *reshead = NULL;
    Node *result = NULL;
    bool flag = 0;
    int carry = 0;
    while(head1!=NULL && head2!=NULL){
        int sum = head1->data + head2->data;
        sum+=carry;
        carry = sum/10;
        if(!flag){
            result = new Node(sum%10);
            reshead = result;
            flag = 1;
        }
        else{
            result->next = new Node(sum%10);
            result = result->next;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    while(head1!=NULL){
        result->next = new Node((head1->data+carry)%10);
        carry = (head1->data + carry)/10;
        result = result->next;
        head1 = head1->next;
    }
    
    while(head2!=NULL){
        result->next = new Node((head2->data+carry)%10);
        carry = (head2->data + carry)/10;
        result = result->next;
        head2 = head2->next;
    }
    
    if(carry){
        result->next = new Node(carry);
    }
    
    return reshead;
}
