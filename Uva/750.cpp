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
#define N 8

int row[N], sum[30], diff[30],ans[N];
int   t,x,y,cnt;


void solve(int c)

{
    if(c == N)
    {
        printf("%2d      ",cnt++);
        printf("%d",ans[0]+1);

        for(int i = 1; i < N; ++i)
        {
           printf(" %d",ans[i]+1);
        }
        printf("\n");
    }

    if(c == y) 
    {
        solve(c+1);
    }

    for(int i = 0; i < N; ++i)
    {
       
        if( row[i] || sum[c+i] || diff[c-i+7]) continue;
        row[i] = sum[c+i] = diff[c-i+7] =1;
        ans[c] = i;
        solve(c+1);
        row[i] = sum[c+i] = diff[c-i+7] =0;
      
    }
}

void reset()
{
    memset(row,0,sizeof row);
    memset(sum,0,sizeof sum);
    memset(diff,0,sizeof diff);
    memset(ans,0,sizeof ans);
    
}

int main()
{


    IOS
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

     scanf("%d", &t);
     while(t--)
     {
        
         cnt = 1;

         scanf("%d%d",&x,&y);
         x--; y--;
         sum[x+y] = 1; 
         diff[y-x+N-1] = 1;
         row[x] = 1;
         ans[y] = x;
         
         printf("SOLN       COLUMN\n");
         printf(" #      1 2 3 4 5 6 7 8\n\n");
         solve(0); 
         reset();
         if(t >= 1)
             printf("\n");
     }
    
   

   return 0;
}