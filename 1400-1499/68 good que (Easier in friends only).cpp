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

int n,x,m,flag,mult;
std::vector<int> v;
void solve(){
	int ans=0;
	cin>>n>>x;
	rep(i,0,n){
		cin>>m;
		if(m==x){mult++;flag=1;}
		v.pb(m);
	}
	sort(all(v));
	
	int index = upper_bound(all(v),x)-v.begin();
	if(!flag){
		ans++;
	int l=index;
	int r=n-index;
	if(l>r)ans+=l-r;
	else if(r>l){ans+=r-l-1;}
	cout<<ans;
	}

	else{int mn=INT_MAX;
		int l=index-1;
		int r=max((int)0,n-index);

		while(mult--){
			int sum=0;
			if(l>r)sum+=l-r;
		else if(r>l){sum+=r-l-1;}
		else{sum+=0;}
		mn=min(mn,sum);
		l--;r++;
		}
		cout<<mn;
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