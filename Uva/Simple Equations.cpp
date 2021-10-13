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






int primes[N];



int main()
{
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;  cin>>t;
    while(t--)
    {
        int  a, b ,c;
        cin>>a>>b>>c;
        vector<tuple<int,int,int>>ans;
        bool ok  = false;
        for(int x = -100; x <= 100; ++x)
        {
            for(int y = -100; y <= 100; ++y)
            {
                if(x == y) continue;
                for(int z = -100; z <= 100; ++z)
                {
                    if(z == x || z == y) continue;
                    int sum = x + y + z;
                    int mul = x * y * z;
                    int sqr = (x*x)+(y*y)+(z*z);
                    if(sum == a && mul == b && sqr == c)
                    {
                        ans.push_back(make_tuple(x,y,z));
                        ok = true;
                    }
                    if(ok)
                    {
                        break;
                    }
                }
                 if(ok)
                    {
                        break;
                    }
            }
             if(ok)
                    {
                        break;
                    }
        }
        if(len(ans) == 0)
        {
            cout<<"No solution.\n";
        }
        else {
            cout<<get<0>(ans[0])<<" "<<get<1>(ans[0])<<" "<<get<2>(ans[0])<<"\n";
        }
       
    }
   

   return 0;
}