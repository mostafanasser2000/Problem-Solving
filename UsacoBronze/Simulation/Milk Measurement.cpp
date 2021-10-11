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

char grid[3][3];
bool check_winner(set<char>s) {

    rep(i,0,3) {
        set<char>row;
        rep(j,0,3) {
            row.insert(grid[i][j]);
        }
        if(row == s)
            return true;
    }
    rep(i,0,3) {
        set<char>col;
        rep(j,0,3) {
            col.insert(grid[j][i]);
        }
        if(col == s)
            return true;
    }

    set<char>rdig;
    rep(i,0,3) {
        rdig.insert(grid[i][i]);
    }
    if(rdig == s)
        return true;
    set<char>ldig;
    for(int i = 2; i >= 0; --i) {
        ldig.insert(grid[i][i]);
    }
    if(ldig == s)
        return true;
    return false;
}
map<string,int>cows;
vector<string> determine_winners() {
    vector<string>cur;
    int mx = 0;
    for(auto cow : cows) {
        mx = max(mx,cow.S);
    }
    for(auto cow : cows) {
        if(cow.S == mx) {
            cur.push_back(cow.F);
        }
    }
    return cur;
}


int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);

    int n; cin>>n;
    vector< pair<int,pair<string,int>> > v(n);
    rep(i,0,n) {
        cin>>v[i].F>>v[i].S.F>>v[i].S.S;
    }
    cows["Mildred"] = 7;
    cows["Elsie"] = 7;
    cows["Bessie"] = 7;

    sort(all(v));
    int ans = 0;

    vector<string> cur = determine_winners();
    rep(i,0,n) {
        cows[v[i].S.F] += v[i].S.S;
        vector<string> now = determine_winners();
        if(now != cur) {
            ans++;
            cur = now;
        }
    }
    cout<<ans<<"\n";
    return 0;
}