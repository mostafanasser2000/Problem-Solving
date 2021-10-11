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
    //freopen("output.txt","w",stdout);

    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);

    int n; cin>>n;
    int x[n], y[n];
    rep(i,0,n) {
        cin>>x[i]>>y[i];
    }
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int x1 = x[i], y1 = y[i];
        for(int j = i+1; j < n; ++j){
            int x2 = x[j], y2 = y[j];
            for(int k = j+1; k < n; ++k) {
                int x3 = x[k], y3 = y[k];
                //formula of triangle area (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 -y2)) * 0.5
                int  area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 -y2)) ;
                if((x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3) )
                    ans = max(ans,area);
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}