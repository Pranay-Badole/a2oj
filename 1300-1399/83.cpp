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
	#define auv(v)		      for(auto x:v) cout<<x<<endl; 
	#define aump(mp)	      for(auto x:mp) cout<<x.fr<<' '<<x.sc<<endl; 
	
	const int N=1e5+5;
	int ans[N];
	void solve(){
		int n,m;cin>>n>>m;
		int a,b,c;
		rep(i,0,m){
			cin>>a>>b>>c;
			if(ans[a]==0 && ans[b]==0 && ans[c]==0){
				ans[a]=1;ans[b]=2;ans[c]=3;continue;
			}
			if(ans[a]){
				if(ans[a]==1){ans[b]=2;ans[c]=3;}
				else if(ans[a]==2){ans[b]=1;ans[c]=3;}
				else {ans[b]=1;ans[c]=2;}
			}
			else if(ans[b]){
				if(ans[b]==1){ans[a]=2;ans[c]=3;}
				else if(ans[b]==2){ans[a]=1;ans[c]=3;}
				else {ans[a]=1;ans[c]=2;}
			}
			else if(ans[c]){
				if(ans[c]==1){ans[a]=2;ans[b]=3;}
				else if(ans[c]==2){ans[a]=1;ans[b]=3;}
				else {ans[a]=1;ans[b]=2;}
			}
}
		REP(i,1,n){
			cout<<ans[i]<<' ';
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