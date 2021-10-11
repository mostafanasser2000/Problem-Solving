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
int nums[5];
bool solve(int i, int sum)
{
    if(i == 5)
    {
        return sum == 23;
    }

    return (solve(i+1,sum+nums[i]) || solve(i+1,sum-nums[i])|| solve(i+1,sum*nums[i]));
}

int main()
{

    IOS
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    
    while(true)
    {
        for(int i = 0; i < 5; ++i)
        {
            cin>>nums[i];
        }

        if(nums[0] == 0)
            break;
        sort(nums,nums+5);
        bool valid = false;
        do{
            bool ok = solve(1,nums[0]);
            if(ok)
            {
                valid = true;
                break;
            }
        }while(next_permutation(nums,nums+5));
        
        if(valid)
        {
            cout<<"Possible\n";
        }
        else{
            cout<<"Impossible\n";
        }
    }
    
   return 0;
}