// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

int maxPathSum(struct Node *root);
void insert(Node *root, int a1,int a2, char lr){
	if(root==NULL)
		return ;
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=new Node(a2);
					break;
			case 'R':root->right=new Node(a2);
					break;
		}
	}
	insert(root->left,a1,a2,lr);
	insert(root->right,a1,a2,lr);
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right)
;}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root=NULL;
		while(n--){
			int a1,a2;
			char lr;
			cin>>a1>>a2>>lr;
			if(root==NULL){
				root=new Node(a1);
				switch(lr){
					case 'L':root->left=new Node(a2);
							break;
					case 'R':root->right=new Node(a2);
							break;
				}
			}
			else
				insert(root,a1,a2,lr);
		}
		//inorder(root);
		//cout<<endl;
		cout<<maxPathSum(root)<<endl;		
	}
}// } Driver Code Ends
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows
struct Node{
	int data;
	Node *left, *right;
};
*/

int maxPathSumUtil(Node *root, int &res){
    if(root==NULL)
        return 0;
    
    if(root->left==NULL && root->right==NULL)
        return root->data;
    
    int ls = maxPathSumUtil(root->left, res);
    int rs = maxPathSumUtil(root->right, res);
    
    if(root->left!=NULL && root->right!=NULL){
        res = max(res, ls+rs+root->data);
        return max(ls,rs)+root->data;
    }
    
    if(root->left==NULL){
        res = max(res, rs+root->data);
        return rs+root->data;
    }
    
    if(root->right==NULL){
        res = max(res, ls+root->data);
        return ls+root->data;
    }
}

int maxPathSum(struct Node *root)
{
    int res = INT_MIN;
    maxPathSumUtil(root,res);
    return res;
}

