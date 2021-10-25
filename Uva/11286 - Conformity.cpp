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

bool is_prime(int n)
{
    if (n % 2 == 0 || n < 2)
        return false;
    else if (n == 2)
        return true;
    for (int i = 3; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

bool check(vi &v)
{
    rep(i, 0, len(v))
    {
        if (v[i] > 0)
            return false;
    }
    return true;
}

bool comp(const ii a, const ii b)
{
    return a.S > b.S;
}

int main()
{
    IOS
       // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, x;
    while (cin >> n, n)
    {

        map<set<int>, int> courses;
        rep(i, 0, n)
        {
            set<int> s;
            rep(j, 0, 5)
            {

                cin >> x;
                s.insert(x);
            }
            courses[s]++;
        }
        int ans = 0, mx = 0;
        for (auto p : courses)
        {
            if (p.S > mx)
            {
                mx = p.S;
                ans = p.S;
            }

            else if (p.S == mx)
            {
                ans += p.S;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
