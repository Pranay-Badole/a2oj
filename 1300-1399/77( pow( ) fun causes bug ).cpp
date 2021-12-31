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
	#define rep(i,a,b)        for(int i=a;i<b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll
	#define acc               accumulate
	

	void solve(){
		int a,b,c;
		cin>>a>>b>>c;
		std::vector<int> v;
		rep(i,1,81){
			double q=(b*pow(i,a))+c;
			int t=q;
// There could be bug because 
// of using C++ pow() function.
			if(t<=0){
				continue;}
			if(t>=1000000000){
				break;
			}
			string s=to_string(t);
				int sum=0;
				rep(i,0,sz(s)){
					sum+=s[i]-'0';
				}
				if(sum==i)
				v.pb(t);		
		}
		cout<<sz(v)<<endl;
		for(auto x:v)
			cout<<x<<' ';
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