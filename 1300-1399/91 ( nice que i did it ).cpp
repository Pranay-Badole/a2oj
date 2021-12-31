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
	
const int N=2e5+5;
const int M=1000000007;
	int a[N];
	std::vector<int>v;
	int n,k,sum=0;
	void solve(){
	cin>>n>>k;
    REP(i,1,n){
    	cin>>a[i];
    	if(i<=k){
    		sum+=a[i];
    	}
    }
    v.pb(sum);
    REP(i,1,n-k){
    	v.pb(v[i-1]-a[i]+a[i+k]);
    }
    // auv(v);
    // cout<<sz(v);
	std::vector<pii> mx(sz(v));
   	int maxi=0,q;
    for(int i=sz(v)-1;i>=0;i--){
    	if(v[i]>=maxi){maxi=v[i];q=i+1;}
    	mx[i].fr=maxi;mx[i].sc=q;
    }
    maxi=0;
    // auv(v)cout<<endl;
    // aump(mx);
    int A,B;
    for(int i=0;i<sz(mx)-k;i++){
    	// cout<<i;
    	// cout<<v[i]<<' '<<mx[i+k].fr<<endl;
		if(v[i]+mx[i+k].fr>maxi){
			maxi=v[i]+mx[i+k].fr;
			A=i+1; B=mx[i+k].sc;

		}
    }
cout<<A<<' '<<B;
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