//TITLE: Chef_and_Spells.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-25
//TIME: 15:15:22
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
    int n;
    cin >> n;
    while (n--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<arr[2]+arr[1]<<endl;

    }
}