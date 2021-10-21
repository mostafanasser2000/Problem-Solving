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

map<char, int> price;

int main()
{
    IOS
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    while (t--)
    {
        price.clear();

        int k, p;

        cin >> k;
        char c;

        rep(i, 0, k)
        {
            cin >> c >> p;
            price[c] = p;
        }

        int numberOflines = 0;
        cin >> numberOflines;

        string text;

        int pay = 0, cents = 0;

        cin.ignore();

        rep(i, 0, numberOflines)
        {
            getline(cin, text);

            rep(j, 0, len(text))
            {
                if (present(price, text[j]))
                {
                    cents += price[text[j]];
                }
            }
        }

        int pays = cents / 100;
        cents = cents % 100;

        printf("%d.%02d$\n", pays, cents);
    }

    return 0;
}
