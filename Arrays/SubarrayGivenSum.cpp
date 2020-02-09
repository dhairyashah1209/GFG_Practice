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
	    
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    unordered_map<int,int> mp;
	    int csum = 0;
	    bool flag = 0;
	    for(int i=0;i<n;i++){
	        csum = csum + a[i];
	        if(csum==sum){
	            flag = 1;
	            cout<<1<<" "<<i+1<<endl;
	            break;
	        }
	        else if(mp.find(csum-sum)!=mp.end()){
	            flag = 1;
	            cout<<mp[csum-sum]+2 << " "<<i+1<<endl;
	            break;
	        }
	        mp[csum] = i;
	    }
	    if(!flag)
	        cout<<-1<<endl;
	}
	
	
	return 0;
}
