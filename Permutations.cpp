//TITLE: Permutations.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-13
//TIME: 02:01:58
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
    cin>>n;
    if(n==1)
    {
        cout<<"1";
    }
    else if(n==4)
    {
        cout<<"2 4 1 3";
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}