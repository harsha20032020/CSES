//TITLE: B_Studying_Algorithms.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-13
//TIME: 19:06:45
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
    int x,sum ;
    cin >> x >> sum;
    int a[x];
    FOR(i,0,x) cin >> a[i];
    sort(a,a+x);
    int i=0;
    while(sum>0)
    {
        i++;
        sum -= a[i];
    }
    cout << i << endl;
}