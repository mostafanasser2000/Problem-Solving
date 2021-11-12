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
#define N 500050
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
ll sum_oranges, sum_apples;
bool comp(const ii &a, const ii &b)
{
    return a.second < b.second;
}


struct contestant
{
    int id;
    int problemSolved;
    int penalty_time;
    map<int, int> incorrect_sub;
    bool correct_sub[10];

    bool operator==(const contestant &c) const
    {
        return id == c.id && problemSolved == c.problemSolved && penalty_time == c.penalty_time;
    }

    bool operator<(const contestant &c) const
    {
        return c.problemSolved < problemSolved || (problemSolved == c.problemSolved && c.penalty_time > penalty_time) || ((problemSolved == c.problemSolved && penalty_time == c.penalty_time) && c.id > id);
    }
};

bool comp(const contestant &a, const contestant &b)
{
    if (a.problemSolved == b.problemSolved)
        return a.penalty_time < b.penalty_time;
    if (a.penalty_time == b.penalty_time)
        return a.id < b.id;
    return a.problemSolved > b.problemSolved;
}

map<int, contestant> mp;
vector<contestant> ans;

int main()
{
    IOS

        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    string line;
    getline(cin, line);
    cin.ignore();

    bool first = false;
    while (t--)
    {
        mp.clear();
        ans.clear();
        int id, p_num, time;
        char status;

        if (first)
        {
            cout << "\n";
        }

        while (getline(cin, line) && len(line) != 0)
        {
            stringstream ss(line);
            ss >> id >> p_num >> time >> status;

            if (mp.find(id) == mp.end())
            {
                contestant c;
                c.id = id;
                c.penalty_time = 0;
                c.problemSolved = 0;
                if (status == 'C')
                {
                    c.problemSolved++;
                    c.penalty_time += time;
                    c.correct_sub[p_num] = 1;
                }

                else if (status == 'I')
                {
                    c.incorrect_sub[p_num]++;
                }
                mp[id] = c;
            }

            else
            {
                if (status == 'C' && mp[id].incorrect_sub.find(p_num) == mp[id].incorrect_sub.end() && !mp[id].correct_sub[p_num])
                {
                    mp[id].problemSolved++;
                    mp[id].penalty_time += time;
                    mp[id].correct_sub[p_num] = 1;
                }

                else if (status == 'C' && mp[id].incorrect_sub.find(p_num) != mp[id].incorrect_sub.end() && !mp[id].correct_sub[p_num])
                {
                    mp[id].problemSolved++;
                    mp[id].penalty_time += time += 20 * mp[id].incorrect_sub[p_num];
                    mp[id].correct_sub[p_num] = 1;
                }

                else if (status == 'I' && mp[id].incorrect_sub.find(p_num) == mp[id].incorrect_sub.end())
                {
                    mp[id].incorrect_sub[p_num]++;
                }

                else if (status == 'I' && mp[id].incorrect_sub.find(p_num) != mp[id].incorrect_sub.end())
                {
                    mp[id].incorrect_sub[p_num]++;
                }
            }
        }

        for (auto c : mp)
        {
            ans.push_back(c.second);
        }

        sort(all(ans));
        for (auto c : ans)
        {
            cout << c.id << " " << c.problemSolved << " " << c.penalty_time << "\n";
        }

        first = true;
    }

    return 0;
}
