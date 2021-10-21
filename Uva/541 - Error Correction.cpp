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

int row_set_bit = 0, col_set_bit = 0;

int main()
{
    IOS
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    while (cin >> n, n)
    {
        int mat[n][n];

        rep(i, 0, n)
        {

            rep(j, 0, n)
            {
                cin >> mat[i][j];
            }
        }

        bool ok = true;

        rep(i, 0, n)
        {
            row_set_bit = 0, col_set_bit = 0;
            rep(j, 0, n)
            {
                if (mat[i][j] == 1)
                    row_set_bit++;
                if (mat[j][i] == 1)
                    col_set_bit++;
            }

            if ((row_set_bit & 1) || (col_set_bit & 1))
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "OK\n";
            continue;
        }

        int rr = -1, cc = -1;

        bool change = false; // check if changing any one bit will lead to an answer

        rep(r, 0, n)
        {
            bool found = false; // check if we found a solution

            rep(c, 0, n)
            {
                // try to change bit in cell r,c and check for a solution
                mat[r][c] ? mat[r][c] = 0 : mat[r][c] = 1;

                bool changing_cur_bit = true;

                rep(i, 0, n)
                {
                    row_set_bit = 0, col_set_bit = 0;

                    rep(j, 0, n)
                    {
                        if (mat[i][j] == 1)
                            row_set_bit++;
                        if (mat[j][i] == 1)
                            col_set_bit++;
                    }

                    // if the number of bits in any columns or row is
                    if ((row_set_bit & 1) || (col_set_bit & 1))
                    {
                        changing_cur_bit = false;
                        break;
                    }
                }

                if (changing_cur_bit)
                {
                    rr = r + 1;
                    cc = c + 1;
                    found = true;
                    break;
                }
                mat[r][c] ? mat[r][c] = 0 : mat[r][c] = 1; // return bit to it's status
            }

            if (found) // if we find a solution
            {
                change = true;
                break;
            }
        }

        if (change)
        {
            cout << "Change bit (" << rr << "," << cc << ")\n";
        }
        else
        {
            cout << "Corrupt\n";
        }
    }

    return 0;
}
