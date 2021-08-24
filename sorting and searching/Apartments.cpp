//TITLE: Apartments.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-14
//TIME: 12:38:25
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
    int n, m,k;
    cin >> n >> m >> k;
    int a[n],b[m];
    FOR(i,0,n) cin >> a[i];
    FOR(i,0,m) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0,cnt=0;
    while(i<n && j<m)
    {
        if(a[i]+k<b[j]) i++;
        else if(a[i]-k>b[j]) j++;
        else
        {
            cnt++,i++;j++;
        }
    }
    cout<<cnt<<endl;
}