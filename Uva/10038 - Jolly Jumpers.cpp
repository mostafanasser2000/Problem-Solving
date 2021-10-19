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

int main()
{
     IOS
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    while (cin >> n)
    {
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int m = n - 1;
        int sum = (m * (m + 1)) / 2;

        set<int> s;
        int sum2 = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            int x = abs(arr[i] - arr[i + 1]);
            s.insert(x);
        }

        for (auto i : s)
            sum2 += i;
        if (sum == sum2)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }

    return 0;
}
