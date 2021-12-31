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
	
	
const int N=1e5;
const int INF = INT_MAX;
const int MAX = 200005;
int a[MAX];

void solve(){
	long long n;
    cin >> n;
    int mn = INF, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    long long t1 = 0, t2 = 0;
    for (int i = 0; i < n; i++)
    {
        t1 += (a[i] == mn);
        t2 += (a[i] == mx);
    }
    cout << mx - mn << " ";
    if (mn == mx)
        cout << n * (n - 1) / 2;
    else
        cout << t1 * t2;

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