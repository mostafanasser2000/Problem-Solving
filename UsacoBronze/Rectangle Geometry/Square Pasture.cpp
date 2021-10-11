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

    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    int x1,x2,y1,y2, x3,y3, x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int r = max(x2,x4);
    int l = min(x1,x3);
    int t = max(y2,y4);
    int b = min(y1,y3);
    int s = max(r-l,t-b);
    cout<<s*s<<"\n";




    return 0;
}