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

    string song = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
    int n; cin>>n;
    deque<string>friends(n);
    rep(i,0,n) {
        cin>>friends[i];
    }
    deque<string>song_words;
    stringstream ss(song);
    string word;
    while(ss>>word) {
        song_words.push_back(word);
    }

    int mx = max(n,len(song_words));
    int mn = len(song_words);
    int i = 0;
    if(mx > len(song_words))
    {
        mx += ceil(mx / 16.0)*16 - mx;

    }
    while(mx > 0) {
        cout<<friends[i%n]<<": "<<song_words[i%mn]<<"\n";
        mx--;
        i++;
    }



    return 0;
}