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

bool compare(double a, double b) {
    if(abs(a-b) < 1e-9) {
        return true;
    }
    return false;
}

int main(){
    IOS
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    freopen("circlecross.in","r",stdin);
    freopen("circlecross.out","w",stdout);
    int crossing_pairs = 0,crossing_pairs1 = 0;
    string crossroad;
    cin>>crossroad;
    for(char c = 'A'; c <= 'Z'; ++c) {
        int start1 = crossroad.find(c);
        int end1 = crossroad.rfind(c);

        for(char d = 'A'; d <= 'Z'; ++d) {
            if(c != d) {
                int start2 = crossroad.find(d);
                int end2 = crossroad.rfind(d);
                if(start1 < start2 && end1 >  start2 && end1 < end2)
                    crossing_pairs++;
            }

        }
    }

    cout<<crossing_pairs<<"\n";

    return 0;
}