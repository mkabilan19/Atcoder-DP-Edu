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
#define INF LLONG_MAX
#define vi vector<ll>

#define forl(i,n) for(ll i = 0; i < n; i++)    
#define deb(x) cout << #x << "=" << x << endl
#define p0(a) cout << a << " "
#define p1(a) cout << a << ln
#define p2(a,b) cout << a << " " << b << ln
#define p3(a,b,c) cout << a << " " << b << " " << c << ln
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << ln

int const d = 1000; // 5e8+5
const ll mod = 1e9+7; //998244353;


void max_self(ll &a,ll b){
  a = max(a,b);
}
// TC  = o(n*w)
void solve()  {            
// cout<<"NEVER GIVE UP"<<ln;
    int n, w;
    cin >> n >> w;
    vector<ll> dp(w + 1); // 0 ... W
    // dp[i] - the maximum total value of items with total weight exactly
    for(int item = 0; item < n; ++item) {
        int weight, value;
        cin >> weight >> value;
        for(int weight_already = w - weight; weight_already >= 0; --weight_already) {
            max_self(dp[weight_already+weight], dp[weight_already] + value);
        }
    }
    ll answer = 0;
    for(int i = 0; i <= w; ++i) {
        max_self(answer, dp[i]);
    }
    p1(answer);


return;

}

int main(){
    fast;
    ll t=1;
    //cin>>t; 
    while(t--){
      solve();
    }
   return 0;
 }


