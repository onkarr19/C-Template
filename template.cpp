#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef pair<string, string> pss;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef vector<string> vs;

#define FOR(a,b,c) for (int (a)=(b);(a)<(c);++(a))
#define FORN(a,b,c) for (int (a)=(b);(a)<=(c);++(a))
#define FORD(a,b,c) for (int (a)=(b);(a)>=(c);--(a))
#define FORSQ(a,b,c) for (int (a)=(b);(a)*(a)<=(c);++(a))
#define FOREACH(a,b) for (auto &(a) : (b))
#define REP(i,n) FOR(i,0,n)
#define REPN(i,n) FORN(i,1,n)
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define SQR(x) ((LL)(x) * (x))

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(),v.end()
#define ALLA(arr,sz) arr,arr+sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr,sz) sort(ALLA(arr,sz))
#define REVERSEA(arr,sz) reverse(ALLA(arr,sz))

#define TC(t) while(t--)

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b) {
    return (a*b)/gcd(a,b);
}
void rvec(vl &arr, ll n) {
    for(int i=0;i<n;i++) cin>>arr[i];
}
void pvec(vl &arr, ll n) {
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}


void solve() {
    int n; cin >> n;

}

int main() {

    int t; cin>>t;
    while (t--) solve();

    return 0;
}