//TITLE: Sum_of_Two_Values.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-24
//TIME: 23:42:05
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
    ll n, m;
    cin >> n >> m;
    pair<ll,ll> a[n];
    FOR(i, 0, n) 
    {
        cin>>a[i].F;
        a[i].S = i;
    }
    sort(a,a+n);
    ll i=0,j=n-1;
    ll flag=0;
    while(i<j)
    {
        if(a[i].F+a[j].F==m)
        {
            cout<<a[i].S+1<<" "<<a[j].S+1<<endl;
            flag=1;
            break;
        }
        else if(a[i].F+a[j].F>m)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(flag==0)
    {
        cout<<"IMPOSSIBLE\n";
    }
}