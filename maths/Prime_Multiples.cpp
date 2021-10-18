//TITLE: Prime_Multiples.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-10-15
//TIME: 00:47:20
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
    int n,k;
    cin>>n>>k;
    bool sol[n]={false};
    ll primes[k];  
    FOR(i,0,k)
    {
        cin>>primes[i];
    }
    FOR(i,0,k)
    {
        ll pr=primes[i];
        FOR(i,2,n+1)
        {
            if(i%pr==0)
            {
                sol[i-1]=true;
            }
        }
    }
    ll ctr=0;
    FOR(i,0,n)
    {
        if(sol[i]==true)
        {
            ctr++;
        }
    }
    cout<<ctr<<endl;
}