// { Driver Code Starts
// C++ Program to print Bottom View of Binary Tree
#include<bits/stdc++.h>
using namespace std;

// Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};

// Method that prints the bottom view.
void bottomView(Node *root);

Node* make_tree()
{
	int n;
	cin>>n;
	
    
	Node* head=NULL;
	queue <Node*> q;

	for( ; n>0 ; n-- )
	{
		int a,b;
		char c;
		cin>> a >> b >> c;

        if(!head)
		{
			head = new Node(a);
			q.push(head);
		}

        Node* pick = q.front();
		q.pop();

		if(c == 'L')
		{
			pick->left = new Node(b);
			q.push( pick->left );
		}
		
		n--;
		if(!n) break;
		
		cin>> a >> b >> c;
		
		if(c == 'R')
		{
			pick->right = new Node(b);
			q.push( pick->right );
		}
	}
	return head;
}

/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d\n", &t);
  while (t--)
  {
     
     Node* root = make_tree();
     bottomView(root);
     cout << endl;
  }
  return 0;
}

// } Driver Code Ends
void bottomView(Node *root)
{
   map<int,int> mp;
   queue<pair<Node *,int> > q;
   
   q.push(make_pair(root,0));
   
   while(!q.empty()){
       
       Node *temp = q.front().first;
       int hd = q.front().second;
       q.pop();
       
       mp[hd] = temp->data;
       
        if(temp->left)
            q.push(make_pair(temp->left,hd-1));
        if(temp->right)
            q.push(make_pair(temp->right,hd+1));
   }

    for(auto it=mp.begin();it!=mp.end();it++)
        cout<< it->second << " ";
   
}

