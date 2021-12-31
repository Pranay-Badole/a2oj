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
	
const int N=3e3+5;

int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
	void solve(){
	int a,b;cin>>a>>b;
	int q=gcd(a,b);
	int x=a/q;
	int y=b/q;
	int ans=0; 
	// cout<<x<<' '<<y<<endl;
	while(x!=1){
		if(x%2==0){x/=2;ans++;}
		else if(x%3==0){x/=3;ans++;}
		else if(x%5==0){x/=5;ans++;}
		else{cout<<-1;return;}
	}
	while(y!=1){
		if(y%2==0){y/=2;ans++;}
		else if(y%3==0){y/=3;ans++;}
		else if(y%5==0){y/=5;ans++;}
		else{cout<<-1;return;}
	}cout<<ans;
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