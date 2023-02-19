#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
void subksum(int ind,vector<int>&ds,int s,int sum,int a[],int n){
	if(ind==n){
		if(s==sum){
		for(auto it:ds) cout<<it<<" ";
		cout<<endl;
		}
		return;
	}
	ds.pb(a[ind]);
	s+=a[ind];
	subksum(ind+1,ds,s,sum,a,n);
	ds.po();
	s-=a[ind];
	subksum(ind+1,ds,s,sum,a,n);
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  
    int n,sum;
    cin>>n>>sum;
    int a[n];
    fo(i,0,n) cin>>a[i];
    vector<int>ds;
    subksum(0,ds,0,sum,a,n);
    
   
    cout<<endl;
return 0;    
}
