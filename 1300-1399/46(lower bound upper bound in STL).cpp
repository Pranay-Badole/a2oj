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
	#define rep(i,a,b)        for(int i=a;i<=b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll
	#define acc               accumulate

void lucky(int n,vector<int>&v){
	if(n>1e8){return;}
	v.pb(10*n+4);
	v.pb(10*n+7);
	lucky(10*n+4,v);
	lucky(10*n+7,v);
}


void solve(){
	int l,r;cin>>l>>r;
	std::vector<int> v;
	lucky(0,v);
	sort(all(v));
	v.pb(4444444444);
	int j=0,sum=0;
	rep(i,l,r){
		// Using lower bound
/*		auto it=lower_bound(v.begin(), v.end(), i);
		sum+=(min(*it,r)-i+1)**it;
		i=min(*it,r);*/

			if(v[j]>=i){
		sum+=(min(v[j],r)-i+1)*v[j];
		i=min(v[j],r);
		j++;
		}
		else{j++;i--;}
}
cout<<sum;
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