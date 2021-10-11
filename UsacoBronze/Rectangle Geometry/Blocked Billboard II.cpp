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



int rectangle_area(pair<ii,ii>r) {
    int y_length = max(r.F.S,r.S.S) -  min(r.F.S,r.S.S);
    int x_length = max(r.F.F,r.S.F) -  min(r.F.F,r.S.F);
    int area = max(0,x_length*y_length);

    return area;
}


//still wrong answer
int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);
    int x1,x2,y1,y2,x3,y3,x4,y4, ys,ye,xs,xe,ans = 0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    ys = max(y1,y3);
    ye = min(y2,y4);
    xs = max(x1,x3);
    xe = min(x2,x4);

    int area = rectangle_area({{xs,ys},{xe,ye}});

    if(area == 0) {
        ans = rectangle_area({{x1,y1},{x2,y2}});
        cout<<ans<<"\n";
    }
    else if(area == rectangle_area({{x1,y1},{x2,y2}})) {
        cout<<0<<"\n";
    }
    else if(x1 == x3 && x2 == x4) {
        ans = rectangle_area({{x1,y1},{x2,y2}}) - ((xe-xs) * (ye-ys));
        cout<<ans<<"\n";
    }
    else if(y1 == y3 && y2 == y4) {
        ans = rectangle_area({{x1,y1},{x2,y2}}) - ((xe-xs) * (ye - ys));
        cout<<ans<<"\n";
    }
    else if(area == rectangle_area({{x3,y3},{x4,y4}})) {
        ans = rectangle_area({{x1,y1},{x2,y2}});
        cout<<ans<<"\n";
    }
    else
    {
        ans = rectangle_area({{x1,y1},{x2,y2}});
        cout<<ans<<"\n";
    }








    return 0;
}