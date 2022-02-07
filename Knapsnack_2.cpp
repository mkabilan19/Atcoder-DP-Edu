                                   //BAAP IZ HERE//
/*
 KABILAN . M
 PRATICE IS THE ONLY SHORTCUT TO SUCCESS
 IIT GUWAHATI 
*/
 
#include <bits/stdc++.h>

#pragma GCC optimize("-Ofast")
//#pragma GCC optimize("trapv")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")

using namespace std;
#define ff first
#define ss second
#define sb substr
#define all(v) v.begin(),v.end()
#define ll long long int
#define ull unsigned long long int
#define pi   pair <ll, ll>
#define ppi pair<ll,pair<ll,ll>>
#define db double
#define bits(n) __builtin_popcountll(n)
#define prec(n) fixed<<setprecision(n)
#define pb(x) push_back(x)
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define fast     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ln "\n"
#define vi vector<ll>

#define forl(i,n) for(ll i = 0; i < n; i++)    
#define deb(x) cout << #x << "=" << x << endl
#define p0(a) cout << a << " "
#define p1(a) cout << a << ln
#define p2(a,b) cout << a << " " << b << ln
#define p3(a,b,c) cout << a << " " << b << " " << c << ln
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << ln


const ll mod = 1e9+7; //998244353;
const ll INF = 1e18L+5;

void min_self(ll &a,ll b){
  a = min(a,b);
}

void solve()  {            
  //cout<<"NEVER GIVE UP"<<ln;
  ll n,w;
  cin >> n >> w;
  ll weight[n], value[n];
  forl(i,n){
    cin >> weight[i] >> value[i];
  }
  ll sum_value = 0;
  for(auto it : value){
    sum_value += it;
  }
  vector<ll> dp(sum_value+1,INF);
  dp[0] = 0;
  // dp[i] .. the minimum total weight of the item with total value exactly equal to i.
  for(int it=0;it<n;it++){
    for(int value_already = sum_value-value[it];value_already>=0;value_already--){
      min_self(dp[value_already+value[it]],dp[value_already]+weight[it]);
    }
  }

  ll ans = 0;
  for(int i=0;i<=sum_value;i++){
    if(dp[i] <= w){
       ans = max(ans,(ll)i);
    }
  }
  p1(ans);

return;

}

int main(){
    fast;
    ll t=1;
   // cin>>t; 
    while(t--){
      solve();
    }
   return 0;
 }


