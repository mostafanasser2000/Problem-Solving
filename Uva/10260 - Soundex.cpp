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

string s = {'B', 'F', 'P', 'V', 'C', 'G', 'J', 'K', 'Q', 'S', 'X', 'Z', 'D', 'T', 'L', 'M', 'N', 'R'};

int main()
{
    IOS
       // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);

    map<int, unordered_set<char>> mp;
    mp[1].insert('B');
    mp[1].insert('P');
    mp[1].insert('F');
    mp[1].insert('V');

    mp[2].insert('C');
    mp[2].insert('G');
    mp[2].insert('J');
    mp[2].insert('K');

    mp[2].insert('Q');
    mp[2].insert('S');
    mp[2].insert('X');
    mp[2].insert('Z');

    mp[3].insert('D');
    mp[3].insert('T');

    mp[4].insert('L');

    mp[5].insert('M');
    mp[5].insert('N');
    mp[6].insert('R');

    string line;

    while (getline(cin, line))
    {
        int prev = 0;
        rep(i, 0, len(line))
        {

            if (count(all(s), line[i]) == 0)
            {
                prev = 0;
                continue;
            }

            else
            {
                for (auto p : mp)
                {
                    if (p.S.count(line[i]) == 1)
                    {
                        if (prev != p.F)
                        {
                            cout << p.F;
                            prev = p.F;
                            break;
                        }
                    }
                }
            }
        }
        cout << "\n";
    }

    return 0;
}

