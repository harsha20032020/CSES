//TITLE: Maximum_Subarray_Sum.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-25
//TIME: 00:33:10
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
    ll n;
    cin >> n;
    ll a[n];
    FOR(i, 0, n) cin >> a[i];
    ll ma=a[0],glo=a[0];
    FOR(i,1,n)
    {
        ma=max(a[i],ma+a[i]);
        if(ma>glo)
        {
            glo=ma;
        }
        if(ma<0)
        {
            ma=0;
        }
    }
    cout<<glo<<endl;
}