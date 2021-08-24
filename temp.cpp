//TITLE: temp.cpp
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-14
//TIME: 12:53:06
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
    int a[n];
    FOR(i,0,n) cin >> a[i];
    int i=0;
    int j=n-1;
    int ser=0,dim=0;
    int k=n/2;
    while(k>0)
    {
        if(a[i]>a[j]) ser+=a[i],i++,dim+=a[j],j--;
        else ser+=a[j],j--,dim+=a[i],i++;

        k--;

    }
    cout<<ser<<" "<<dim<<endl;
}