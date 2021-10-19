#include <bits/stdc++.h>
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
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define N 10000000

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    IOS
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    while (cin >> n, n)
    {
        cin.ignore();
        string image[n];
        rep(i, 0, n)
        {
            getline(cin, image[i]);
        }

        int mn = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            int cnt_spaces = count(all(image[i]), ' ');
            mn = min(mn, cnt_spaces);
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int cnt_spaces = count(all(image[i]), ' ');
            ans += cnt_spaces - mn;
        }

        cout << ans << "\n";
    }
    return 0;
}
