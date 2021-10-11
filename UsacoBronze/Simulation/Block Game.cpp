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

    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);
    int n; cin>>n;
    int frq[26] = {0};
    vector<pair<string,string>> v(n);
    rep(i,0,n) {
        cin>>v[i].F>>v[i].S;
    }
    for(int i = 0; i < n; ++i) {
        for(char c = 'a'; c <= 'z'; ++c) {
            int freq1 = 0, freq2 = 0;
            freq1 = count(all(v[i].F), c);
            freq2 = count(all(v[i].S), c);
            frq[c-97] += max(freq1,freq2);
        }
    }
    rep(i,0,26) {
        cout<<frq[i]<<"\n";
    }

    return 0;
}