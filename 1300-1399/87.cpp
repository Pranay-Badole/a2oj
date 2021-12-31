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
	
const int N=1e3+5;

vector<int> v;

void lucky(int n){
	if(n>1e8){return;}
	v.pb(10*n+4);
	v.pb(10*n+7);
	lucky(10*n+4);
	lucky(10*n+7);
}
int SL(int n){
	string s=to_string(n);
	int m=sz(s);
	if(m%2)return -1;
	sort(all(s));
	m/=2;
	if(s[m]=='7' && s[m-1]=='4'){
		return 1;
	} 
	return -1;
}

	void solve(){
		lucky(0);
		v.pb(4444477777);
		sort(all(v));
		int n;cin>>n;
		rep(i,0,sz(v)){
			if(v[i]>=n && SL(v[i])==1){
				cout<<v[i]<<' ';return;
			}
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