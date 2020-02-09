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

pair<int,int> stockBuySell(int a[], int n){
    int i=0;
    pair<int,int> st;
    bool flag = 0;
    while(i<n-1){
        
        while(i<n-1 && a[i+1]<=a[i])
            i++;
        if(i==n-1)
            break;
        int buy = i;
        i++;
        while(i<n && a[i-1]<=a[i])
            i++;
        int sell = i-1;
        st = make_pair(buy,sell);
        flag = 1;
        cout<<"("<<st.F<<" "<<st.S<<")"<<" ";
    }
    if(!flag)
        cout<<"No Profit\n";
    else
        cout<<endl;
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
	    
	    stockBuySell(a, n);
	    
	}
	
	return 0;
}