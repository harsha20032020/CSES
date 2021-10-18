//TITLE: Exponentiation.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-09-24
//TIME: 18:16:14
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define mp make_pair
#define pb push_back
#define S second
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FO(x) for (int i = 0; i < x; i++)
#define ROF(x) for (int i = x; i >= 0; i--)
#define sz(a) (ll)(a.size())
#define all(a) a.begin(), a.end()
const int mod = 1e9 + 7;
const ll INF = 1e18;
ll binpow(ll a, ll b,ll mod)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
unsigned int Calculate(unsigned int A, unsigned int B,
                       unsigned int C, unsigned int M)
{
    unsigned int res, ans;
 
    // Calculate B ^ C (mod M - 1)
    res = binpow(B, C, M-1);
 
    // Calculate A ^ res ( mod M )
    ans = binpow(A, res, M);
 
    return ans;
}
int main()
{
    /*for fastness*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*if input file is given and output file needs to be generated
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, m;
        cin >> n >> k >> m;
        cout << Calculate(n, k, m, mod) << endl;
    }
}