//TITLE: Untitled-1
//AUTHOR: N Harsha Vardhan
//DATE: 2021-08-25
//TIME: 10:22:27
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
// when given the nsize of array and sum required...returns the indices of the elements to get the sum.
void sumof2(int n,int sum)
{
    pi arr[n];
    FOR(i,0,n)
    {
        cin>>arr[i].F;
        arr[i].S=i;
    }
    sort(arr,arr+n);
    int i=0,j=n-1;
    int flag=0;
    while(i<j)
    {
        if(arr[i].F+arr[j].F<sum)
        {
            i++;
        }
        else if(arr[i].F+arr[j].F>sum)
        {
            j--;
        }
        else
        {
            cout<<arr[i].S+1<<" "<<arr[j].S+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}
void kadanes(int n)
{
    ll arr[n];
    FOR(i,0,n) cin>>arr[i];
    ll max_global=arr[0],max_here=arr[0];
    FOR(i,1,n)
    {
        max_here=max(arr[i],max_here+arr[i]);
        max_global=max(max_global,max_here);
    }
    cout<<max_global<<endl;
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
    int n,sum ;
    cin>>n;
    kadanes(n);
}