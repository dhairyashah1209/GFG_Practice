#include<bits/stdc++.h>

#define lli long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define test int t; cin>>t; while(t--)
#define srt(a,n) sort(a,a+n)
#define add(a,b,m) (a%m+b%m)%m
#define sub(a,b,m) (a%m-b%m+m)%m
#define mul(a,b,m) (a%m*b%m)%m
#define pb push_back
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define lb(v,x) lower_bound(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define pii pair<int,int>
#define F first
#define S second

const int MOD = (int)1e9+7;
const int mod = (int)1e7+9;
int DEBUG = 0;

using namespace std;

int findElement(int arr[], int n) 
{ 
    int leftMax; 
    leftMax = arr[0]; 
    
    int rightMin[n];
    rightMin[n-1] = arr[n-1];
    
    for (int i = n-2; i >= 0; i--) 
        rightMin[i] = min(rightMin[i+1], arr[i+1]); 
  
     
  
    for (int i=1;i<n-1;i++) 
    { 
        if (leftMax <= arr[i] && rightMin[i] >= arr[i]) 
             return arr[i]; 
  
        leftMax = max(leftMax, arr[i]); 
    } 
  
    return -1; 
} 

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int ans = findElement(a,n);
	    cout<<ans<<endl;
	}
	
	return 0;
}
