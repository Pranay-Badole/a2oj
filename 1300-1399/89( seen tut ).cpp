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
	
const int N=1e3+5;
int r,g,b,R,G,B,ans1=0,ans2=0,ans3=0;
	void solve(){
		cin>>r>>g>>b;

		ans1=r/3+g/3+b/3;

		if(r>0 && g>0 && b>0){
		ans2=1+(r-1)/3+(g-1)/3+(b-1)/3;}
		
		if(r>1 && g>1 && b>1){
		ans3=2+(r-2)/3+(g-2)/3+(b-2)/3;}
		
		// cout<<ans1<<ans2<<ans3;
		cout<<max(ans1,max(ans2,ans3));
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