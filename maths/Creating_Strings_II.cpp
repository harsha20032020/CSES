//TITLE: Creating_Strings_II.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-10-18
//TIME: 09:22:14
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
int fac[1000001]; //arrays for precomputation if the values are used often
int inv[1000001];
int exp(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
void precompute()
{
    fac[0] = 1, inv[0] = 1;
    FOR(i, 1, 1000001)
    {
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = exp(fac[i], mod - 2, mod); 
    }
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
    string s;
    cin >> s;
    precompute();
    int arr[26]={0};
    int n = sz(s);
    FOR(i, 0, n)
    {
        arr[s[i]-'a']++;
    }
    ll ans = fac[n];
    FOR(i, 0, 26)
    {
        if(arr[i]>1)
        {
            ans = ans * inv[arr[i]] % mod;
        }
    }
    cout << ans << endl;
}