#include<bits/stdc++.h>

#define lli long long int
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
	    int a[n];
	    int mx = INT_MIN;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a, a+n);
        lli ans=0;
        for(int i=0;i<n;i++){
            lli j=0, k=i-1;
            while(j < k){
                if(a[j]+a[k] < a[i])
                    j++;
                else if(a[j]+a[k] > a[i])
                    k--;
                else{
                    ans++;
                    j++;
                    k--;
                }
            }
        }
        if(ans!=0)
        cout<<ans<<endl;
        else
        cout<<-1<<endl;
	}
	return 0;
}
