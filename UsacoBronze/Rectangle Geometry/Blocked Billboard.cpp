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


ll calc_rectangle_area(pair<ii,ii>r) {
    ll area = (max(r.F.S, r.S.S) - min(r.F.S, r.S.S) ) *  (max(r.F.F, r.S.F) - min(r.F.F, r.S.F));
    return area;
}

ll calc_inter_area(pair<ii,ii>r1, pair<ii,ii>r2) {
    //ii y = {max(r1.F.S,r2.F.S), min(r1.S.S,r2.S.S)};
    //ii x = {max(r1.F.F,r2.F.F), min(r1.S.F,r2.S.F)};
    int y_s = max(r1.F.S,r2.F.S);
    int y_e = min(r1.S.S,r2.S.S);
    int y_length = max(0,y_e-y_s);

    int x_s = max(r1.F.F,r2.F.F);
    int x_e = min(r1.S.F,r2.S.F);
    int x_length = max(0,x_e-x_s);
    int inetr_area = x_length * y_length;
    return inetr_area;
}

int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);
    vector<pair<ii,ii>> rectangles(3);
    rep(i,0,3){
        cin>>rectangles[i].F.F>>rectangles[i].F.S>>rectangles[i].S.F>>rectangles[i].S.S;
    }
    ll ans = 0;
    ans = calc_rectangle_area(rectangles[0]) + calc_rectangle_area(rectangles[1]) - calc_inter_area(rectangles[0],rectangles[2])
          - calc_inter_area(rectangles[1],rectangles[2]);
    cout<<ans<<"\n";





    return 0;
}