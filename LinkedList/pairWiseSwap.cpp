// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

Node* pairWiseSwap(Node *head);

void insert(Node **head)
{
    int n,i,value;
    Node *temp;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        
        if(i==0)
        {
            *head = new Node(value);
            temp = *head;
        }
        else
        {
            temp->next= new Node(value);
            temp=temp->next;
        }
    }
}

void printList(struct Node *temp)
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
    
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     
     Node* head = NULL;
     
     while(t--)
     {
         head = NULL;
        insert(&head);
        head = pairWiseSwap(head);
        printList(head);
     }
     return(0);
}
// } Driver Code Ends
/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 

struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
}*head;
*/

Node* pairWiseSwap(struct Node* head)
{
    Node *reshead = NULL;
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    Node *tail = NULL;
    while(curr!=NULL){
        int cnt = 0;
        Node *join = curr;
        while(curr!=NULL && cnt<2){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(reshead==NULL)
            reshead = prev;
        if(tail)
            tail->next = prev;
        tail = join;
        prev = NULL;
    }
    return reshead;
}
