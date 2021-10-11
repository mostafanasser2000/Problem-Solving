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

int digits[9] = {1,2,3,4,5,6,7,8,9};



int main()
{


    IOS
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);

    //  int n,m;
    //  while(cin>>n)
    //  {
        
    //      string dict[n];
    //      for(int i = 0; i < n; ++i)
    //      {
    //          cin>>dict[i];
    //      }

    //      cin>>m;
    //      string rules[m];
    //      for(int i = 0; i < n; ++i)
    //      {
    //          cin>>rules[i];
    //      }
    //     cout<<"--\n";
    //       for(int i = 0; i < m; ++i)
    //      {
            
    //          int cnt_0 = count(all(rules[i]),'0');
             
             
    //         set<vi>perm;
    //          for(int mask  = 0; mask < (1 << 9); ++mask)
    //          {
    //             vi subset;
    //              for(int j = 0; j < 9; ++j)
    //              {
    //                  if((mask >> j) & 1)
    //                  {
    //                     subset.push_back(digits[j]);

    //                  }
    //              }
    //              sort(all(subset));
    //              if(len(subset) == cnt_0)
    //              {
                   
    //                 do{
    //                    perm.insert(subset);
    //                  }while(next_permutation(all(subset)));
                   
    //              }      
    //          }
             

    //          for(int j = 0; j < n; ++j)
    //          {
                
    //              for(auto sub : perm)
    //              {
    //                  auto it = sub.begin();
    //                  for(int k = 0; k < len(rules[i]); ++k)
    //                  {
    //                      if(rules[i][k] == '#')
    //                      {
    //                          cout<<dict[j];
    //                      }
    //                      else
    //                      {
    //                          int x = *it;
    //                          cout<<x;
    //                          it++;
    //                      }       
    //                  } 
    //                  cout<<"\n";        
    //              }     
    //          }
    //     }

    //      cout<<"--\n";
    //  }
   
    

   return 0;
}