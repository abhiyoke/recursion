// Time complexity : O(N*(2^N))
// Space complexity : O(N*(2^N))
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
void subsequence(int ind,int a[],vector<int>&seq,int n){
	if(ind==n){
		for(auto it:seq) cout<<it<<" ";
		   cout<<endl;
		return;
	}
	seq.pb(a[ind]);
	subsequence(ind+1,a,seq,n);
	seq.po();
	subsequence(ind+1,a,seq,n);
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  
    int n;
    cin>>n;
    int a[n];
    fo(i,0,n) cin>>a[i];
    vector<int>seq;
    subsequence(0,a,seq,n);
    
   
    cout<<endl;
return 0;    
}
