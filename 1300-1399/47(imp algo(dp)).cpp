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
	#define pii               PAIR<int,int>
	#define rep(i,a,b)        for(int i=a;i<=b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll
	#define acc               accumulate

void solve(){
int n;cin>>n;
int a[n],b[n],sumv[n+1],sumu[n+1];
for(int i=0;i<n;i++){
	int v;cin>>v;a[i]=v;b[i]=v;
}
sort(b,b+n);
sumv[0]=0;
sumu[0]=0;
for(int i=1;i<n+1;i++){
sumv[i]=sumv[i-1]+a[i-1];
sumu[i]=sumu[i-1]+b[i-1];
}
int m;cin>>m;
while(m--){
	int type,l,r;cin>>type>>l>>r;
	if(type==1){
		cout<<sumv[r]-sumv[l-1]<<endl;
	}
	else
		cout<<sumu[r]-sumu[l-1]<<endl;
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