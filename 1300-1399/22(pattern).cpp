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
		int q=n-1;
		q=2*n;int x=2;
		rep(i,0,n+1){int z=i-1;
			rep(j,0,q){
				
				cout<<' ';
			}
			rep(k,0,2*i+1){
				if(k==2*i)cout<<0;
				else if(k>i){
					cout<<z<<' ';
					z--;}

				else cout<<k<<' ';
				
				}			
			
		q=q-2;
		cout<<endl;
		}
		rep(i,0,n){int z=n-2-i;
			rep(j,0,x){
				cout<<' ';
			}
			x=x+2;
			rep(k,0,2*(n-i)-1){
				if(k==2*(n-i)-2)cout<<0;
				else if(k>n-i-1){
					cout<<z<<' ';
					z--;}
				else cout<<k<<' ';
				
				}			
			
		cout<<endl;
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