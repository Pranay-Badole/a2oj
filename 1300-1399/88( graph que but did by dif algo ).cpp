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

int a,b,n,m,j=0;
set<int>t;
std::vector<pii> v;
	void solve(){
		
		cin>>n>>m;
		rep(i,0,n)t.insert(i+1);
		set<int>s[100];

rep(i,0,m){
	cin>>a>>b;if(a>b)swap(a,b);
	v.pb(mkp(a,b));
}
sort(all(v));

		rep(i,0,m){
			bool gya=0;
			a=v[i].fr;b=v[i].sc;
			t.erase(a);t.erase(b);
			rep(k,0,n/3){
				if(s[k].count(a)){
					s[k].insert(b);gya=1;
				}
				if(s[k].count(b)){
					s[k].insert(a);gya=1;
				}
			}
			if(gya==0){
				s[j].insert(a);s[j].insert(b);
				j++;
			}
		}
		int twos=0;
		rep(i,0,j){
			if(sz(s[i])==2)twos++;
			if(sz(s[i])>3){cout<<-1;return;}
		}
		if(twos>sz(t)){cout<<-1;return;}   //imp line seen through tut 
		rep(i,0,j){
			if(sz(s[i])==2){
				auv(s[i]);cout<<*t.begin()<<endl;
				t.erase(*t.begin());
				continue;
			}
			auv(s[i]);cout<<endl;
		}
		int q=1;
		for(auto x:t){
			cout<<x<<' ';
			if(q%3==0)cout<<endl;
			q++;
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