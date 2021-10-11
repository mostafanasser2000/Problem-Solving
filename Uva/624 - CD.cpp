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




bool compare_floats(double a, double b);





int main(){
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,k;
    vi seq;
    vi v;

    while(cin>>n>>k)
    {

        v.resize(k);
        rep(i,0,k)
        {
            cin>>v[i];
        }

        int ans = 0;
        seq.clear();
        for(int mask = 0; mask < (1 << k); ++mask)
        {
            int sum = 0;
            vector<int>cur;
            for(int i = 0; i < k; ++i)
            {
                if((mask >> i) & 1)
                {
                    sum += v[i];
                    cur.push_back(v[i]);

                }
            }
            if(sum  <= n)
            {
                if(sum > ans)
                {
                    ans = sum;
                    seq = cur;
                }
                else if(sum == ans)
                {
                    if(len(cur) > len(seq))
                    {
                        seq = cur;
                    }
                }
            }
        }

        for(auto i : seq)
            cout<<i<<" ";
        cout<<"sum:"<<ans<<"\n";
    }
    return 0;
}




bool compare_floats(double a, double b) {
    if(abs(a-b) < 1e-9) {
        return true;
    }
    return false;
}


