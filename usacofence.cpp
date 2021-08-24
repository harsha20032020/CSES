//TITLE: usacofence.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-14
//TIME: 12:02:18
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

    /*if input file is given and output file needs to be generated*/
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr +4);
    cout<<arr[3]-arr[0]<<endl;
}