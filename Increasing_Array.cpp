//TITLE: Increasing_Array.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-13
//TIME: 01:53:19
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
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum=0;
    for(long long int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(long long int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            sum+=(a[i+1]-a[i]);
            a[i+1]+=a[i]-a[i+1];
        }
    }
    cout<<abs(sum)<<endl;
}