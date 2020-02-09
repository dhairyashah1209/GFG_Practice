// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    Node *fast = head;
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt = NULL;
    
    while(fast && fast->next){
        
        nxt = curr->next;
        fast = fast->next->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    if(fast!=NULL && fast->next==NULL)
        nxt = curr->next;
    while(nxt){
        
        if(prev->data!=nxt->data)
            return 0;
        prev = prev->next;
        nxt = nxt->next;
    }
    
    return 1;
}


