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






vi nums[81];
int digits[10] = {0,1,2,3,4,5,6,7,8,9};
vi v;
bool used[10] = {0};

void solve()
{
    if(len(v) == 10)
    {
       int num1 = 0, num2 = 0;
       num1 = v[0]*10000 + v[1] * 1000 + v[2]*100+ v[3]*10+ v[4];
       num2 = v[5]*10000 + v[6] * 1000 + v[7]*100+ v[8]*10 + v[9];
       
        int n = num1 / num2;
       if(((num1*1.0) / num2) ==  n)
       {

           nums[n].push_back(num1);
       }
    }
    
    for(int i = 0; i <= 9; ++i){
        if(used[i]) continue;
    used[i] = 1;
    v.push_back(digits[i]);
    solve();
    used[i] = 0;
    v.pop_back();
    }
}



int main()
{
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

   
    solve();
    int n, cnt = 0;
    while(scanf("%d",&n),n)
    {
        cnt++;
        if(cnt > 1)
            printf("\n");
        if(len(nums[n]) == 0)
        {
            printf("There are no solutions for %d.\n",n);
            continue;
        }

        sort(all(nums[n]));
        for(auto i : nums[n])
        {
            int n2 =  i / n;
            printf("%05d / %05d = %d\n",i,n2, n);
        }
       
    }

   
   return 0;
}




