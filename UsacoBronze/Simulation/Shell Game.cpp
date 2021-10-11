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


int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    int n; cin>>n;
    vector< pair<int, pair<int,int>> > sg(n);
    rep(i,0,n) {
        cin>>sg[i].F>>sg[i].S.F>>sg[i].S.S;
    }
    int mx = 0;
    rep(i,1,4) {
        int cnt = 0;
        vector<bool>v(4);
        v[i] = true;
        rep(j,0,n) {
            swap(v[sg[j].F],v[sg[j].S.F]);
            if(v[sg[j].S.S]) {
                cnt++;
            }
        }
        mx = max(cnt,mx);
    }

    cout<<mx<<"\n";
    return 0;
}