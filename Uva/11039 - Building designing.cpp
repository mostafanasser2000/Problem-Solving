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

bool comp(int a, int b)
{
    return abs(a) > abs(b);
}
int main()
{
    IOS

       // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        set<int> red_floors;
        set<int, greater<int>> blue_floors;
        rep(i, 0, n)
        {
            cin >> x;
            if (x < 0)
                red_floors.insert(x);
            else
                blue_floors.insert(x);
        }
        if (n == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        if (len(red_floors) == 0 || len(blue_floors) == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        auto it_r = red_floors.begin();
        auto it_b = blue_floors.begin();
        int r = *it_r * -1;
        int b = *it_b;
        it_r++;
        it_b++;
        vi ans;
        char cur_turn = '.';
        if (r > b)
        {
            ans.push_back(r);
            ans.push_back(b);
            cur_turn = 'r';
        }

        else
        {
            ans.push_back(b);
            ans.push_back(r);
            cur_turn = 'b';
        }

        while (true)
        {
            if ((it_r == red_floors.end() && cur_turn == 'r') ||
                (it_b == blue_floors.end() && cur_turn == 'b'))
            {
                break;
            }

            if (cur_turn == 'r')
            {

                while (it_r != red_floors.end())
                {
                    r = (*it_r) * -1;
                    if (r < ans.back())
                    {
                        ans.push_back(r);
                        it_r++;
                        cur_turn = 'b';
                        break;
                    }
                    it_r++;
                }
            }
            else if (cur_turn == 'b')
            {

                while (it_b != blue_floors.end())
                {
                    b = *it_b;
                    if (b < ans.back())
                    {
                        it_b++;
                        ans.push_back(b);
                        cur_turn = 'r';
                        break;
                    }
                    it_b++;
                }
            }
        }

        cout << len(ans) << "\n";
    }
    return 0;
}
