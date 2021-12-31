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
	
	
const int N=1e5+5;

int fact(int x){
	if(x==0){
		return 1;
	}
	return x*fact(x-1);
}
void solve(){
	cout<<fixed<<setprecision(12);
	string s1,s2;
	cin>>s1>>s2;
	int a=0,b=0,u=0;
	rep(i,0,sz(s1)){
		if(s1[i]=='+'){a++;}
		else if(s1[i]=='-'){a--;}

		if(s2[i]=='+'){b++;}
		else if(s2[i]=='-'){b--;}
		else{u++;}
	}
	int p=0,n=0;
	if(abs(a-b)>u){cout<<(double)0;return;}
	int x=abs(u-abs(b-a));
	if(x%2){cout<<(double)0;return;}
	x=abs(b-a)+x/2;
	double ans;
	ans=fact(u)/(fact(x)*fact(u-x));
	cout<<(double)ans/(1ll<<u);
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