	#include "bits/stdc++.h"
	using namespace std;	
	#define int              long long 
	#define pb                push_back
	#define ppb               pop_back
	#define pf                push_front
	#define ppf               pop_front
	#define all(x)            (x).begin(),(x).end()
	#define uniq(v)           (v).erase(unique(all(v)),(v).end())
	#define sz(x)             (int)((x).size())
	#define fr                first
	#define sc                second
	#define pii               pair<int,int>
	#define mkp 				  make_pair
	#define rep(i,a,b)        for(int i=a;i<b;i++)
	#define REP(i,a,b)        for(int i=a;i<=b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll
	#define acc				  accumulate
	#define endl			  '\n'
	#define auv(v)		      for(auto x:v) cout<<x<<' '; 
	#define aump(mp)	      for(auto x:mp) cout<<x.fr<<' '<<x.sc<<endl; 
	
	
const int N=1e5+5;
 int a[N];
void solve(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	int l=INT_MAX,r=INT_MAX;
	int neg=0;
	rep(i,0,n){
		cin>>a[i];
		ans+=a[i];
		if(a[i]<0){neg++;l=a[i];}
		else if(a[i]>=0 && r==INT_MAX){r=a[i];}
	}
	if(k<=neg){
		rep(i,0,k){
			ans+=abs(2*a[i]);}
			cout<<ans;
	}
	else{
		rep(i,0,neg){
			ans+=abs(2*a[i]);}
	
		if((k-neg)%2==0)cout<<ans;
		else{cout<<ans-2*(min(abs(l),r));}
	
}
}   	
	signed main(){
		ios_base::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
		#endif
		#ifdef SIEVE
			sieve();
		#endif
		#ifdef NCR
			init();
		#endif

		int t=1;
		// cin>>t;
		while(t--) solve();
		return 0;
	}