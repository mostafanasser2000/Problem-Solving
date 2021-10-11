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
#define N 21

template<class T>
void print(vector<T>v){
    int sz = len(v);
    for(int i = 0; i < sz; ++i){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}

bool compare_floats(double a, double b) {
    if(abs(a-b) < 1e-9) {
        return true;
    }
    return false;
}

bool comp(ii a, ii b) {
    return a.S > b.S;
}


int fact(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}
int main(){
    IOS


     freopen("guess.in","r",stdin);
     freopen("guess.out","w",stdout);

    int n,k; cin>>n;
    vector< vector<string> >cows(n);
    map<string,int>freq;
    rep(i,0,n) {
        string s; cin>>s;
        cin>>k;
        rep(j,0,k) {
            string t; cin>>t;
            cows[i].push_back(t);
            freq[t]++;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int appeared = 0;
        for(int j = 0; j < len(cows[i]); ++j) {
            string characteristics = cows[i][j];
            if(freq[characteristics] > 1)
                appeared = max(appeared,freq[characteristics]);
        }
        ans = max(ans,appeared);
    }
    cout<<ans+1<<"\n";

    return 0;
}