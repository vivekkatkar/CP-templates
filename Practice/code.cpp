/* Editor -->> Vivek Shivaji Katkar */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define Vivek ios_base::sync_with_stdio(false);
#define Katkar cin.tie(NULL);
#define mod 1000000007
// #define mod 998244353

/*----------------- Debugging Starts -------------------------------------------------*/
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '"' << x << '"';}
void __print(const string &x) {cerr << '"' << x << '"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef true
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

/*----------------- Debugging Ends -------------------------------------------------*/

/*----------------- Number Theory Template Starts -------------------------------------------------*/

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void SieveOfEratosthenes(ll n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
}

ll binpowmod(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if ((b & 1) == 1) {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}

ll add(ll a, ll b) {
    return ((a % mod) + (b % mod)) % mod;
}

ll sub(ll a, ll b) {
    return (((a % mod) - (b % mod)) % mod + mod) % mod;
}

ll mult(ll a, ll b) {
    return ((a % mod) * (b % mod) % mod);
}

ll inv(ll a) {
    return binpowmod(a, mod - 2);
}

ll divide(ll a, ll b) {
    return mult(a, inv(b));
}

ll msbNo(ll num) {
    return 31 - __builtin_clz(num);
}

const ll N = 200005;
ll f_[N], _f[N];

void _fp() {
    f_[0] = f_[1] = 1;
    for (int i = 2; i < N; i++) {
        f_[i] = f_[i - 1] * i;
        f_[i] %= mod;
    }
    _f[N - 1] = inv(f_[N - 1]);
    for (int i = N - 2; i >= 0; i--) {
        _f[i] = _f[i + 1] * (i + 1);
        _f[i] %= mod;
    }
}

ll nCr(ll x, ll y) {
    if (y > x) return 0ll;
    ll _n = f_[x];
    _n *= _f[y];
    _n %= mod;
    _n *= _f[x - y];
    _n %= mod;
    return _n;
}

/*----------------- Number Theory Template Ends -------------------------------------------------*/

// CP Tip : use int vars and funcs sometimes instead of ll when constraints are tight otherwise we get TLE
int expo(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = (1ll * res * a) % mod;
        b >>= 1;
        a = (1ll * a * a) % mod;
    }
    return res;
}

int *inputarr(int size) {
    int *v = new int[size];
    for(int i = 0; i < size; ++i) cin >> v[i];
    return v;
}

ll *inputarr(ll size) {
    ll *v = new ll[size];
    for(ll i = 0; i < size; ++i) cin >> v[i];
    return v;
}

void viki_2711() {
    
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif
    Vivek Katkar
    ll t = 1;
    cin >> t;
    // _fp();
    while (t--) {
        viki_2711();
    }
    return 0;
}