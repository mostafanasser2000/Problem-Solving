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








bool is_prime(int n)
{
    if(n % 2 == 0 || n < 2 )
        return false;
    else if(n == 2)
        return true;
    for(int i = 3; i * i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  
   int n; cin>>n;
   
       cout<<n<<" ";
       for(int i = 1; i < n; ++i)
       {
            cout<<i<<" ";
       }
       cout<<"\n";
   

  
   
       return 0;
}







