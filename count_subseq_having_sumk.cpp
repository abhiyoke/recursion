
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
int subksum(int ind,int s,int sum,int a[],int n){
	if(s>sum) return 0;
	if(ind==n){
		if(s==sum)return 1;
		else return 0;
	}
	
	s+=a[ind];
	int l=subksum(ind+1,s,sum,a,n);
	s-=a[ind];
		
	int r=subksum(ind+1,s,sum,a,n);
	return l + r;
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  
    int n,sum;
    cin>>n>>sum;
    int a[n];
    fo(i,0,n) cin>>a[i];
    cout<<subksum(0,0,sum,a,n);
    cout<<endl;
return 0;    
}
