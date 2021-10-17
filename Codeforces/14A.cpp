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
#define N 10000000








int main()
{
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   
    int n,m; cin>>n>>m;
    string grid[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>grid[i];
    }
    

    int top  = INT_MAX, bottom = -1, left = INT_MAX, right = -1;
    for(int i  = 0; i < n; ++i)
    {
        if(count(all(grid[i]),'*') >= 1)
        {
            top = min(top,i);
            bottom = max(bottom,i);
        }
    }

     for(int i  = 0; i < n; ++i)
    {
        if(count(all(grid[i]),'*') >= 1)
        {
            int  l = grid[i].find('*');
            int r = grid[i].rfind('*');
           left = min(left,l);
           right = max(right,r);
        }
    }
 
  for(int i = top; i <= bottom; ++i)
  {
      for(int j = left; j <= right; ++j)
      {
          cout<<grid[i][j];
      }
      cout<<"\n";
  }







   return 0;
}







