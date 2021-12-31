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
	

const int N=5e5+5;
int gcd(int a,int b){
		if(b==0)return a;
		return gcd(b,a%b);

	}

std::vector<int>v;
void solve(){
		int n,m;
		cin>>n;
		m=max((int)1,n-50);
		if(n==1){cout<<1;return;}
		if(n==2){cout<<2;return;}
		int q=n;
		for(int q=n;q>=m;q--){
			v.pb(q);
		}
		
		int mx=0,a,b,c,z;
		rep(i,0,sz(v)){
			rep(j,0,sz(v)){
				rep(k,0,sz(v)){
					z=v[i]*(v[j])*(v[k])/gcd(v[i],v[k])/gcd(v[i],v[j])/gcd(v[j],v[k]);
					if(z>mx){a=v[i];b=v[j];c=v[k];mx=z;}
				}
			}
		}
		cout<<mx;
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