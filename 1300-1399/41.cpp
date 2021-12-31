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
		int n;cin>>n;
		string s;cin>>s;
		if(sz(s)%n!=0){
			cout<<-1;return;
		}
		map<char,int>mp;
		rep(i,0,sz(s)){
			mp[s[i]]++;
		}
		for(auto x: mp)
		{
			if((x.sc)%n!=0){cout<<-1;return;}
		}
		string ans="";
		if(sz(mp)==1){
			for(auto x:mp){
			rep(i,0,sz(s)){
				cout<<x.fr;
			}
		}		
		}
		else{
			for(auto x: mp)
			{
				int q=x.sc/n;
				while(q--)
					ans+=x.fr;
			}
			rep(i,0,n)
			cout<<ans;
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