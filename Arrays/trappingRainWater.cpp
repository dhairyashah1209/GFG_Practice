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

int totalWater(int a[], int n){
    int lmax = 0, rmax = 0;
    int res = 0;
    int lo = 0, hi = n-1;
    
    while(lo<=hi){
        if(a[lo]<a[hi]){
            if(a[lo]>lmax)
                lmax = a[lo];
            else
                res+=(lmax-a[lo]);
            lo++;    
        }
        else{
            if(a[hi]>rmax)
                rmax = a[hi];
            else
                res+=(rmax-a[hi]);
            hi--;    
        }
    }
    return res;
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
	    
	    int ans = totalWater(a, n);
	    cout<<ans<<endl;
	}
	
	return 0;
}
