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
		int m,n;
		cin>>m>>n;
		int x[m],y[n];
		
		for(int i=0;i<m;i++)
			cin>>x[i];
		for(int i=0;i<n;i++)
			cin>>y[i];
		
		vector<long double> vx, vy; 
		for(int i=0;i<m;i++)
			vx.push_back(log(x[i])/x[i]);		
		
		for(int i=0;i<n;i++)
			vy.push_back(log(y[i])/y[i]);
		
		sort(vx.begin(),vx.end());
		sort(vy.begin(),vy.end());
		lli ans = 0;
		
		for(int i=0;i<m;i++){
			int up = lower_bound(vy.begin(),vy.end(),vx[i])-vy.begin();
			ans+=up;	
		}	
		
		cout<<ans<<endl;
	}
	return 0;
}
