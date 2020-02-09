// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}
// } Driver Code Ends
/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};

// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};

/* The method push to push element
   into the stack */
  
StackNode *head = NULL;   
void MyStack ::push(int x) {
    StackNode *temp = new StackNode(x);
    if(top==NULL){
        top = temp;
        head = top;
        return;
    }
    top->next = temp;
    top = top->next;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    
    //cout<<"t: "<<top->data<<endl;
    if(top==NULL)
        return -1;
    
    if(head->next==NULL){
        int x = head->data;
        top = NULL;
        head = NULL;
        delete (top);
        return x;
    }
    StackNode *temp = head;
    while(temp->next!=top){
        temp=temp->next;
    }
    top = temp;
    int res = temp->next->data;
    top->next = NULL;
    delete (top->next);
    return res;
}
