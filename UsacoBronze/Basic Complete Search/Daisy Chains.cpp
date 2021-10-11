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

template<class T>
void print(vector<T>v){
    int sz = len(v);
    for(int i = 0; i < sz; ++i){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}

bool compare(double a, double b) {
    if(abs(a-b) < 1e-9) {
        return true;
    }
    return false;
}

int main(){
    IOS
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // freopen("diamond.in","r",stdin);
    // freopen("diamond.out","w",stdout);

    int n; cin>>n;

    vector<float>v(n);
    rep(i,0,n) {
        cin>>v[i];
    }
    int ans = n;
    rep(i,0,n) {
        rep(j,i+1,n) {
            double sum  = 0;
            vector<int>range;
            int cnt = 0;
            for(int k = i; k <= j; ++k) {

                cnt++;
                range.push_back(v[k]);
                sum += v[k];
            }
            double  avg = sum / cnt;

            for (auto num : range) {
                if(compare(avg,num)){
                    ans++;
                    break;
                }
            }

        }
    }
    cout<<ans<<"\n";

    return 0;
}