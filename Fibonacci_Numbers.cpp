//TITLE: Fibonacci_Numbers.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-24
//TIME: 22:19:53
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
ll fibonacci(int n)
{
    int x,y,z;
    x=0;
    y=1;
    for(int i=2;i<=n;i++)
    {
        z=(x+y)%mod;
        x=y;
        y=z;
    }
    return y%mod;
    
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
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}