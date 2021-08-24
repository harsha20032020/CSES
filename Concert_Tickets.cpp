//TITLE: Concert_Tickets.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-15
//TIME: 01:49:28
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
    int tickets, ppl;
    cin >> tickets >> ppl;
    int a[tickets];
    FOR(i, 0, tickets) cin >> a[i];
    int b[ppl];
    FOR(i, 0, ppl) cin >> b[i];
    sort(a,a+tickets);
    sort(b,b+ppl);
    int k=ppl;
    int i=0;
    int j=tickets-1;
    while(k>0)
    {
        
    }
}