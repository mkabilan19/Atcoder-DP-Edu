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


const int maxN = 3005;
const int M = 1e9+7;

ll dp[105][100005];




void solve()  {            
  //cout<<"NEVER GIVE UP"<<ln;
  ll n,k;
  cin >> n >> k;
  ll a[n];
  for(auto &x : a) cin >> x;
  // dp[x][y] --> xth pos, y candies, dp will store the number of ways..
  for(int i=0;i<=a[0];i++){
    dp[0][i] = 1; // base condition, where no of ways to give is always 1 , as only 1 element is there
  }
   /*dp[x][y] = dp[x-1][y] + dp[x-1][y-1] + dp[x-1][y-2] + .. dp[x-1][y-a[x]] */
  // dp[x-1] -> prefix_sum
  // dp[x][y] = prefix_sum[y] - prefix_sum[y-a[x]-1]
  for(int i=1;i<n;i++){
    vector<ll> prefix_sum(k+1); // further optimization
    prefix_sum[0] = dp[i-1][0];
    for(int j=1;j<=k;j++){
      prefix_sum[j] = (prefix_sum[j-1] + dp[i-1][j])%M;
    }
    // transition
    for(int j=0;j<=k;j++){
       if(j > a[i]){
          // *modulas imp*
          dp[i][j] = (prefix_sum[j] + M - prefix_sum[j-a[i]-1])%M;
       }else{
        dp[i][j] = prefix_sum[j];
       }
    }
  }
  p1(dp[n-1][k]);
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


