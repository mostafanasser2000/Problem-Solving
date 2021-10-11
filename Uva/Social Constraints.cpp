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

int find (int p, int arr[])

{
    for(int i = 0; i < 8; ++i)
    {
        if(arr[i] == p)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    IOS
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    
   int n,m; 
   
   while(cin>>n>>m && n!= 0)
   {
       
       int arrangment[m][3];
       
       int arr[8];
       for(int i = 0; i < 8; ++i)
       {
           arr[i] = i;
       }    
       
        
        for(int i = 0; i < m; ++i)
        {
            cin>>arrangment[i][0]>>arrangment[i][1]>>arrangment[i][2];
        }


        int cnt = 0;
        do {
            bool ok = true;
            for(int i = 0; i < m; ++i)
            {
                int pos_a = 0, pos_b = 0;
                int p1 = arrangment[i][0];
                int p2 = arrangment[i][1];
                int dif = arrangment[i][2];

               pos_a = find(p1,arr);
               pos_b = find(p2,arr);

                if(dif > 0  )
                {
                    if((abs(pos_a-pos_b) > dif))
                    {
                        ok = false;
                        break;
                    }
                }
                    
                 if(dif < 0  )
                {
                    if(abs(pos_a-pos_b) < (-dif))
                    {
                         ok = false;
                        break;
                    }
                } 
            }

            if(ok)
            {
                cnt++;
            }
             
        }while(next_permutation(arr,arr+n));

        cout<<cnt<<"\n";
   }
   return 0;
}