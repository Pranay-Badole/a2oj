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

	int gcd(int a,int b){
		if(b==0)return a;
		return gcd(b,a%b);
	}
	void solve(){
/*		better approach
		int a,b,c,d,ans;
	cin>>a>>b>>c>>d;
	if(a*d>b*c)
	{
		int k=__gcd(a*d-b*c,a*d);
		cout<<(a*d-b*c)/k<<"/"<<(a*d)/k;
	}
	else if(a*d<b*c)
	{
		int k=__gcd(b*c-a*d,b*c);
		cout<<(b*c-a*d)/k<<"/"<<(b*c)/k;
	}
	else
		cout<<"0/1";
	return 0;*/

		int a,b,c,d;cin>>a>>b>>c>>d;
			
			int e,f[2],g[2],h;
			e=c*a/c;f[0]=d*a;f[1]=c;
			g[0]=c*b;g[1]=d;h=d*b/d;


			if(1.0*f[0]/f[1]<=b){
				int q=f[1]*b-f[0];
				int r=b*f[1];
				int x=gcd(q,r);
				cout<<q/x<<'/'<<r/x;return;
			}
			if(1.0*g[0]/g[1]<=a){
				int q=g[1]*a-g[0];
				int r=a*g[1];
				int x=gcd(q,r);
				cout<<q/x<<'/'<<r/x;
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