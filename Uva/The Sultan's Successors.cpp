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
#define N 8

int grid[N][N];

vector<bool> col(N, false), sum(N, false), diff(N,false);
int mx = 0;

vector<int>v;

void solve(int r)
{
    if(r == 8)
    {
        int sum = 0;
        rep(i,0,len(v))
        {
            sum += grid[i][v[i]];
        }
        mx = max(mx,sum);
    }

    for(int i = 0; i < N; ++i)
    {
        if(col[i] || sum[i+r] || diff[i-r+N-1] )
            continue;
        col[i] = sum[i+r] = diff[i-r+N-1] = true;
        v.push_back(i);
        solve(r+1);
        v.pop_back();
         col[i] = sum[i+r] = diff[i-r+N-1] = false;
    }
}


void reset()
{
    col.clear();
    sum.clear();
    diff.clear();
    v.clear();
    mx = 0;
} 
int main()
{

    IOS
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

    int k; cin>>k;

    while(k--)
    {
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < 8; ++j)
            {
                cin>>grid[i][j];
            }
        }
        solve(0);
        cout<<std::right<<setw(5)<<mx<<"\n";
        reset();
    }

   
    
   return 0;
}