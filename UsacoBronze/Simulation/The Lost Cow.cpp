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

    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    int x,y, d = 1, dir = 1, initial = 0;
    cin>>x>>y;
    initial = x;
    ll ans = 0;
    while(true) {



        if( (dir == 1 && x <= y && y <= (x + d)) || (dir == -1 && y <= x && (x-d <= y))) {
            ans += abs(y-x);
            break;
        }
        else {

            ans += 2 *d;
            d = 2*d;
            dir *= -1;
        }

    }
    cout<<ans<<"\n";

    return 0;
}