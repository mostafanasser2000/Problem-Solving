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
struct react{
    int x1,x2,y1,y2;
};


// Points in Figures: Rectangles
int main(){
    IOS

    char c;
    double x1,x2,y1,y2;
    vector< pair< pair<double,double>, pair<double,double> > >rectangles;

    while(true) {
        cin>>c;
        if(c == '*')
            break;
        if(c == 'r')
        {
            cin>>x1>>y1>>x2>>y2;
            rectangles.push_back({{x1,y1},{x2,y2}});
        }
    }


    double p1,p2;
    int cnt = 1;
    while(true)  {
        cin>>p1>>p2;

        if(p1 ==  9999.9 && p2 ==  9999.9)
            break;

        bool ok = true;
        for(int i = 0, n = len(rectangles); i < n ; ++i) {
            if((p1 > rectangles[i].F.F && p1 < rectangles[i].S.F) && (p2 < rectangles[i].F.S && p2 > rectangles[i].S.S))
            {
                ok = false;
                cout<<"Point "<<cnt<<" is contained in figure "<<i+1<<"\n";
            }
        }
        if(ok) {
            cout<<"Point "<<cnt<<" is not contained in any figure\n";
        }
        cnt++;

    }



    return 0;
}