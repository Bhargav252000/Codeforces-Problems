#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define ui unsigned int
#define pb push_back
#define INF 1e9
#define all(x) x.begin(), x.end()
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
//alt + ctrl + N

int power(int a, int n) {
    int res = 1;
    while(n){
        if(n%2)
          res *= a,n--;
        else
           a *= a,n /= 2;
    }
    return res;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ll n;
    cin >> n;
    vector <ll> arr;
    vector <ll> dep;
    for(int i=0;i<n;i++){
        cin >> arr[i] >> dep[i];
    }

    unordered_set <int> set;
    int j = 0;
    for(int i=1; i<n; i++){
        if(set.count(arr[i])){
            
        }else{
            set.insert(dep[j]);
        }
    }

return 0;
}