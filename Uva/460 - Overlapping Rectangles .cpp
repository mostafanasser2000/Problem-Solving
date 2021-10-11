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



int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    //freopen("billboard.in","r",stdin);
    //freopen("billboard.out","w",stdout);
    int t; cin>>t;

    while(t--)
    {
        react r1,r2;
        cin>>r1.x1>>r1.y1>>r1.x2>>r2.y2;
        cin>>r2.x1>>r2.y1>>r2.x2>>r2.y2;

        int ys = max(r1.y1,r2.y1);
        int ye = min(r1.y2,r2.y2);
        int xs = max(r1.x1,r2.x1);
        int xe = min(r1.x2,r2.x2);

        int x_length = xe - xs;
        int y_length = ye - ys;
        int area = max(0,x_length*y_length);

        if(area == 0)
        {
            cout<<"No Overlap"<<"\n";
        } else {
            cout<<xs<<" "<<ys<<" "<<xe<<" "<<ye<<"\n";
        }

    }




    return 0;
}