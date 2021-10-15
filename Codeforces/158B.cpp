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

  int n, x, cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, ans = 0;
  cin>>n;
  for(int i = 0; i < n; ++i)
  {
      cin>>x;
      if(x == 1)
        cnt_1++;
      else if(x == 2)
        cnt_2++;
      else if(x == 3)
        cnt_3++;
     else
        ans++;
  }

  int mn = min(cnt_3,cnt_1);
  ans += mn;
  cnt_3 -= mn;
  cnt_1 -= mn;
  ans += cnt_3;
  ans += (cnt_2 * 2) / 4;
  cnt_2 = ((cnt_2 * 2) % 4) / 2;

  int sum = cnt_1 * 1 + cnt_2 * 2;
  
  ans += sum / 4;

  if(sum % 4 != 0)
    ans++;

    cout<<ans<<"\n";
    
   
   return 0;
}




