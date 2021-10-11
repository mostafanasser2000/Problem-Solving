/**
 * Mostafa Nasser 10/8/2021
*/
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
 
int main()
{

    freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
   int k; 
   cin>>k;
   
   while(true){ 

       int arr[k];
       rep(i,0,k)
       {
           cin>>arr[i];
       }

       set<set<int>>ans;
       
       for(int mask = 0; mask < (1 << k); ++mask)
       {
           set<int>subset;

           for(int j = 0; j < k; ++j)
           {
               if((mask >> j) & 1)
               {
                   subset.insert(arr[j]);
               }
           }

            if(len(subset) == 6)
            {
                ans.insert(subset);
                subset.clear();
            }    
            
       }

        for(auto s : ans)
            {
                int cnt = 0;
                int cnt1 = 0;
                for(auto i : s)
                {
                    cout<<i;
                    if(cnt < 5)
                        cout<<" ";
                    cnt++;

                }
                cout<<"\n";
            }  
      cin>>k;
      if(k != 0)
            cout<<"\n";  
      else
        break;      
   }


   return 0;
}