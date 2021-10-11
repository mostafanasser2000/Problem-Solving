/**
 * @author: Mostafa Nasser
 * TLE till now
 */

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

void combinationUtil(int arr[], int n, int r,
                     int index, int data[], int i);


void printCombination(int arr[], int n, int r)
{


    int data[r];

    combinationUtil(arr, n, r, 0, data, 0);
}


void combinationUtil(int arr[], int n, int r, int index,
                     int data[], int i)
{

    if (index == r) {
        for (int j = 0; j < r; j++)
            cout <<" "<< data[j];
        cout <<"\n";
        return;
    }


    if (i >= n)
        return;


    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1);


    combinationUtil(arr, n, r, index, data, i + 1);
}
int main(){
    IOS
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //freopen("cownomics.in","r",stdin);
    // freopen("cownomics.out","w",stdout);
    int n,m; cin>>n>>m;
    vector<string>spotty(n);
    vector<string>plain(n);

    rep(i,0,n) {
        cin>>spotty[i];
    }
    rep(i,0,n) {
        cin>>plain[i];
    }

    vector<tuple<int,int,int>>v;
    for(int i = 0; i < m; ++i) {
        for(int j = i +1; j < m; ++j) {
            for(int k = j+1; k < m; ++k) {
                v.push_back(make_tuple(i,j,k));

            }
        }
    }

    int ans = 0;

    for(int i = 0, l = len(v); i < l; ++i) {
        int a = get<0>(v[i]), b = get<1>(v[i]), c = get<2>(v[i]);
        bool not_appear = true;

        for(int j = 0; j < n; ++j) {
            vector<char>v1;
            v1.push_back(spotty[j][a]); v1.push_back(spotty[j][b]); v1.push_back(spotty[j][c]);


            for(int k = 0; k < n; ++k) {
                vector<char>v2;
                v2.push_back(plain[k][a]);  v2.push_back(plain[k][b]);  v2.push_back(plain[k][c]);

                if(v1 == v2)
                    not_appear = false;
            }
        }

        if(not_appear)
            ans++;
    }

    cout<<ans<<"\n";

    return 0;
}