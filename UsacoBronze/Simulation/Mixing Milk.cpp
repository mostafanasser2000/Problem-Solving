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

    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    vii v(3);
    rep(i,0,3) {
        cin>>v[i].S>>v[i].F;
    }
    int cnt = 100, mn = 0;
    while(cnt > 0) {
        mn = min(v[1].S-v[1].F , v[0].F);
        v[1].F += mn ;
        v[0].F -= mn;
        cnt--;
        if(cnt == 0) {
            break;
        }
        mn = min(v[2].S-v[2].F , v[1].F);
        v[2].F += mn;
        v[1].F -= mn;
        cnt--;

        mn =  min(v[0].S-v[0].F , v[2].F);
        v[0].F += mn;
        v[2].F -= mn;
        cnt--;
    }
    rep(i,0,3) {
        cout<<v[i].F<<"\n";
    }

    return 0;
}