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

#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
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
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());




int main()
{
    IOS
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);

        int passengers,
        planes, cap;
    cin >> passengers >> planes;

    multiset<int, greater<int>> mx;
    multiset<int> mn;

    rep(i, 0, planes)
    {
        cin >> cap;
        mx.insert(cap);
        mn.insert(cap);
    }

    int max_earn = 0, min_earn = 0;

    for (int i = 0; i < passengers; ++i)
    {
        auto it = mx.begin();
        int x = *it;
        max_earn += x;
        x--;
        mx.erase(it);
        if (x > 0)
            mx.insert(x);
    }

    for (int i = 0; i < passengers; ++i)
    {
        auto it = mn.begin();
        int x = *it;
        min_earn += x;
        x--;
        mn.erase(it);
        if (x > 0)
            mn.insert(x);
    }

    cout << max_earn << " " << min_earn << "\n";
    return 0;
}