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
struct rect{
    ll x1,x2,y1,y2;
    ll area() { return  (y2-y1) * (x2-x1);}
};

ll intersect_area(rect r1, rect r2)
{
    ll ys = max(r1.y1, r2.y1);
    ll ye = min(r1.y2,r2.y2);

    ll xs = max(r1.x1,r2.x1);
    ll xe = min(r1.x2,r2.x2);
    ll e = 0;
    ll y_length = max(e,ye-ys);
    ll x_length = max(e,xe-xs);

    return y_length*x_length;
}

rect inetr(rect r1, rect r2) {
    ll ys = max(r1.y1, r2.y1);
    ll ye = min(r1.y2,r2.y2);

    ll xs = max(r1.x1,r2.x1);
    ll xe = min(r1.x2,r2.x2);

    rect inter;
    inter.x1 = xs;
    inter.y1 = ys;
    inter.x2 = xe;
    inter.y2 = ye;

    return inter;

}


int main(){
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //freopen("billboard.in","r",stdin);
    //freopen("billboard.out","w",stdout);
    rect r1,r2,r3;
    cin>>r1.x1>>r1.y1>>r1.x2>>r1.y2;
    cin>>r2.x1>>r2.y1>>r2.x2>>r2.y2;
    cin>>r3.x1>>r3.y1>>r3.x2>>r3.y2;

    ll white_area = r1.area();
    ll intersect_area1 = intersect_area(r1,r2);
    ll intersect_area2 = intersect_area(r1,r3);

    rect wb1 = inetr(r1,r2);
    rect wb2 = inetr(r1,r3);

    ll intersect_area1_area2 = intersect_area(wb1,wb2);

    ll covered_area = intersect_area1+intersect_area2 - intersect_area1_area2;

    if(white_area <= covered_area) {
        cout<<"NO"<<"\n";
    }
    else {
        cout<<"YES"<<"\n";
    }








    return 0;
}