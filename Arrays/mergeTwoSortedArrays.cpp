#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int j=0,k=0,l=0;
        while(j<n && k<m){
            if(a[j]>b[k]){
                cout<<b[k]<<" ";
                k++;
            }
            else if(a[j]<b[k]){
                cout<<a[j]<<" ";
                j++;
            }
            else{
                cout<<a[j]<<" ";
                cout<<b[k]<<" ";
                j++;
                k++;
            }
        }
        while(j<n){
            cout<<a[j]<<" ";
            j++;
        }
        while(k<m){
            cout<<b[k]<<" ";
            k++;
        }
        cout<<endl;    
    }
	return 0;
}
