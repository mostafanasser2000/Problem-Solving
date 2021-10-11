/**
 * Mostafa Nasser 8/10/2021
 **/



#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
 
#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define len(x) (int)x.size()
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define N 16

string grid[N];

bool col[N], sum[30], diff[30];
int cnt,n;

void solve(int r)
{
    if(r == n)
    {
        cnt++;
        return;
    }

    for(int i = 0; i < n; ++i)
    {
        if(col[i] || sum[i+r] || diff[i-r+n-1] || grid[r][i] == '*')
            continue;
        col[i] = sum[i+r] = diff[i-r+n-1] = true;
        solve(r+1);
         col[i] = sum[i+r] = diff[i-r+n-1] = false;
    }
}


 
int main()
{

   // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int k = 1;
     while(true)
     {
         cin>>n;
         if(n == 0)
            break;
        for(int i = 0; i < n; ++i)
        {
            cin>>grid[i];
        }

        solve(0);
        cout<<"Case "<<k++<<": "<<cnt<<"\n";
        cnt = 0;

     }
    
   return 0;
}