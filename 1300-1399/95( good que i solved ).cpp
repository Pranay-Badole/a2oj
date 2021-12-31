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
	
const int N=1e5+8;
const int M=1000000007;
set<int>prime;
int arr[501][501];
bool f[N];
int n,m;
std::vector<int> v;
	void solve(){
		rep(i,0,N){f[i]=1;}
		rep(i,2,N){
			if(f[i]){
				prime.insert(i);
				v.pb(i);
				for(int j=2;i*j<=N;j++){
					f[i*j]=0;
				}
			}
		}
		// auv(v);
		cin>>n>>m;
		REP(i,1,n){
			REP(j,1,m){
				cin>>arr[i][j];
			}
		}
		int ans=INT_MAX;
		REP(i,1,n){int q=0;
			REP(j,1,m){
				if(!prime.count(arr[i][j])){
					 auto it=upper_bound(all(v), arr[i][j]);
					q+=*it-arr[i][j];
				}
			}
			ans=min(q,ans);
		}
		int ans1=INT_MAX;
		REP(j,1,m){int q=0;
			REP(i,1,n){
				if(!prime.count(arr[i][j])){
					 auto it=upper_bound(all(v), arr[i][j]);
					q+=*it-arr[i][j];
				}
			}
			ans1=min(q,ans1);
		}
		cout<<min(ans,ans1);
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