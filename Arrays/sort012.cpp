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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		int l=0,m=0,r=n-1;
		
		while(m<=r){
			if(a[m]==0)
				swap(a[l++],a[m++]);
			else if(a[m]==1)
				m++;
			else
				swap(a[m],a[r--]);		
		}	
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;	
	}
	return 0;
}
