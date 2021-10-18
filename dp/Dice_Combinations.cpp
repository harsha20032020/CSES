//TITLE: Dice_Combinations.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-10-14
//TIME: 14:19:35
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
ll noSolutions(vi coins, int sum)
{
    ll dp[sum + 1]={0};   //Initializing all values to 0
    dp[0] = 1;            //Base case
    FOR(i, 1, sum + 1)    
    {
        FOR(j, 0, sz(coins))
        {
            if (coins[j] <= i)  //adding number of solutions for some coin.
            {
                dp[i] += dp[i - coins[j]] % mod;
            }
        }
    }
    return dp[sum]%mod;
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
    vi v={1,2,3,4,5,6};
    int x;
    cin>>x;
    cout<<noSolutions(v,x);
}