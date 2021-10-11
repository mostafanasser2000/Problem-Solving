#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.in","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  int n,m;
  map<int,int>freq;
  while(true){
      cin>>n>>m;
      int count = 0;
      freq.clear();
      if(n == 0 && m ==0)
          break;
      for(int i = 0; i < n; i++){
          int x; cin>>x;
          freq[x] = 1;
      }

      for(int i = 0; i < m; i++){
          int x; cin>>x;
          if(freq[x] == 1){
              count++;
          }
          freq[x] = 1;
      }
      cout<<count<<endl;
  }




    return 0;
}
