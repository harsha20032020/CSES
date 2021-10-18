//TITLE: Minimizing_Coins.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-10-14
//TIME: 14:28:46
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
//vi coins = vector of coins denomination and sum is the required sum.
int minCoins(vector<ll> coins, ll sum)
{
    ll dp[sum + 1];
    //Initializing all values to INT_MAX i.e. minimum coins to make any
    //amount of sum is INT_MAX
    for (int i = 0; i <= sum; i++)
        dp[i] = INT_MAX;

    //Base case
    //Minimum coins to make sum = 0 cents is 0
    dp[0] = 0;

    //Iterating in the outer loop for possible values of sum between 1 to N
    //Since our final solution for sum = N might depend upon any of these values
    for (int i = 1; i <= sum; i++)
    {
        //Inner loop denotes the index of coin array.
        //For each value of sum, to obtain the optimal solution.
        for (int j = 0; j < sz(coins); j++)
        {
            //i —> sum
            //j —> next coin index
            //If we can include this coin in our solution
            if (coins[j] <= i)
            {
                //Solution might include the newly included coin
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }
    //return dp[sum];
    return dp[sum]>sum?-1:dp[sum];   //returns -1 if that sum is not possible
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
    ll n, sum;
    cin >> n >> sum;
    vector <ll> coins(n);
    FO(n)
    {
        cin >> coins[i];
    }
    cout << minCoins(coins, sum);
    
}