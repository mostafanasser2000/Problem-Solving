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

int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);
    rep(i,0,3) {
        rep(j,0,3) {
            cin>>grid[i][j];
        }
    }
    int ans1 = 0,ans2 = 0;
    for(char c = 'A'; c <= 'Z'; ++c) {
        ans1 += check_winner({c});
    }
    for(char c = 'A'; c <= 'Z'; ++c) {
        for(char d = c+1; d <= 'Z'; ++d) {
            ans2 += check_winner({c,d});
        }
    }

    cout<<ans1<<"\n";
    cout<<ans2<<"\n";


    return 0;
}
