#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define repe(i,a,b) for(int i=a; i<=b; i++)
#define ll long long
#define ui unsigned int
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl
#define deb2(x,y) cout << #x << '=' << x << << #y << '=' << y << endl
#define all(x) x.begin(), x.end()
#define endl "\n"
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define hcf(x,y)     __gcd(x,y)
#define lcm(x,y)     (x*y)/(__gcd(x,y))
#define CountOne(x)  __builtin_popcount(x)        
#define parity(x)    __builtin_parity(x)           //Funtion return (true) if number of set bits is odd(odd parity) else false..
#define LeadZero(x)  __builtin_clz(x)             //Counts leading zero in binary representation of x ....   
#define TrailZero(x) __builtin_ctz(x)

#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//alt + ctrl + N

//===============================================================================//
ll power(ll x, ll y) {
ll v = 1; while (y > 0) { if (y & 1)v = v * x; y = y >> 1; x = x * x;} return v;
}

bool isPowerOfTwo(ll x){
    return x && (!(x & (x-1)));     //check if the number is power of two or not
}

//===============================================================================//

int main(){
    fastIO;
srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ll test = 1;
    cin >> test;
    while(test--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        string t = "";
        t.pb(s[0]);
        ll count = 0;
        ll countL = 0;
        ll countW = 0;
        rep(i,0,n){
            if(s[i] == 'L') countL++;
        }
        if(countL <= k) {
            cout << (n - 1)*2 + 1 << endl;
            continue;
        }
        rep(i,1,n){
            if(((s[i] == 'L' && s[i-1] == 'W' && s[i+1] == 'W') || (s[i] == 'L' && s[i-1] == 'L' && s[i+1] == 'W') || (s[i] == 'L' && s[i-1] == 'W' && s[i+1] == 'L')) && count <= k){
                t.pb('W');
                count++;
            }
            else{
                t.pb(s[i]);
            }
        }
        if(count <= k && s[n-1] == 'L') t[n-1] == 'W';

        ll ans = 0;
        int noti = 0;
        rep(i,0,t.length()){
            if(t[i] == 'W' && noti == 0){
                ans++;
                noti = 1;
            }else if(t[i] == 'W' && noti == 1){
                ans += 2;
            }
            else{
                noti = 0;
            }
        }
        cout << ans << endl;
    }
return 0;
}