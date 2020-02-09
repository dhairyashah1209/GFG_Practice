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

void spiralmatrix(vector<vector<int> >v,int m, int n){
    
    int rows=m,cols=n;
    int k=0,l=0;
    int cnt=0;
    while(k<rows && l<cols){
        
        for(int i=l;i<cols;i++){
            cout<<v[k][i]<<" ";
            
        }
        k++;
        for(int i=k;i<rows;i++){
            cout<<v[i][cols-1]<<" ";
            
        }
        cols--;
        if(k<rows){
            for(int i=cols-1;i>=l;i--){
                cout<<v[rows-1][i]<<" ";
                
            }
            rows--;
        }
        if(l<cols){
            for(int i=rows-1;i>=k;i--){
                cout<<v[i][l]<<" ";
                
            }
            l++;
        }
    }
    cout<<endl;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int> >v;
        for(int i=0;i<m;i++){
            vector<int> y;
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                y.push_back(x);
            }
            v.push_back(y);
            y.clear();
        }
        spiralmatrix(v,m,n);
        v.clear();
    }
	return 0;
}
