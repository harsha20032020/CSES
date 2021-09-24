//TITLE: Programming_Languages.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-28
//TIME: 19:31:12
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
void solve()
{
    int a[2],a1[2],a2[2];
    cin>>a[0]>>a[1];
    cin>>a1[0]>>a1[1];
    cin>>a2[0]>>a2[1];
    sort(a,a+2);
    sort(a1,a1+2);
    sort(a2,a2+2);
    if(a[0]==a1[0] && a[1]==a1[1])
    {
        cout<<"1\n";
    }
    else if(a[0]==a2[0] && a[1]==a2[1])
    {
        cout<<"2\n";
    }
    else
    {
        cout<<"0\n";
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
    int test ;
    cin >> test;
    while(test--)  
    {
        solve();
    }
}