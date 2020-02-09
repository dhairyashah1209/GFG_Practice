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


int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(k>n)
	        k = n;
	    lli a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    int st = 0, ed = k-1;
	    bool flag = 0;
	    while(ed<n){
	        for(int i=ed;i>=st;i--)
	            cout<<a[i]<<" ";
	        st+=k;
	        if(flag)
	            break;
	        if(ed+k<n)
	            ed+=k;
	        else{
	            ed=n-1;
	            flag = 1;
	        }
	    }
	    cout<<endl;      
	}
	
	return 0;
}
