//TITLE: Ferris_Wheel.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-14
//TIME: 22:22:23
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
    ll n, max;
    cin >> n >> max;
    ll a[n];
    FOR(i, 0, n)
        cin >> a[i];
    sort(a, a + n);
    ll cnt = n;
    ll j = n - 1;
    int i = 0;
    while (i < j)
    {
        if (a[i] + a[j] <= max)
            i++, j--, cnt--;
        else
            j--;
    }
    cout << cnt << endl;
}