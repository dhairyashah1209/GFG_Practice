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
	
	test{
	    int n;
	    cin>>n;
	    int a[n],d[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>d[i];
	    
	    sort(a,a+n);
	    sort(d,d+n);
	    
	    int ans = 0;
	    int plat = 0;
	    
	    int i=0, j=0;
	    
	    while(i<n && j<n){
	        
	        if(a[i]<=d[j]){
	            plat++;
	            if(ans<plat)
	                ans = plat;
	            i++;     
	        }
	        else{
	            plat--;
	            j++;
	        }
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
