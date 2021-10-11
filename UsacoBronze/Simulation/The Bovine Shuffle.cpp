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

    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);
    int n,x,y; cin>>n;

    vector<int>order(n+1);
    vector<string>v(n+1);
    rep(i,1,n+1) {
        cin>>y;
        order[y] = i;
    }
    rep(i,1,n+1) {
        cin>>v[i];
    }

    rep(i,0,3) {
        vector<string> temp(n+1);
        rep(j, 1, n+1) {
            temp[order[j]] = v[j];
        }
        v = temp;
    }
    rep(i,1,n+1) {
        cout<<v[i]<<"\n";
    }
    return 0;
}