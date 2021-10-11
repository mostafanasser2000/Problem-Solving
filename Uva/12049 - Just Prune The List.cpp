#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 int t,n,m ,x;
 cin>>t;
while(t--){
    cin>>n>>m;
    vector<int>l1(n);
    vector<int>l2(m);
    set<int>s;
    for(int i = 0; i < n; i++){
      cin>>l1[i];
        s.insert(l1[i]);
    }
    for(int i = 0; i < m; i++){
       cin>>l2[i];
        s.insert(l2[i]);
    }
    int ans = 0;
    for(auto c : s){
        int dif = count(l1.begin(),l1.end(),c) - count(l2.begin(),l2.end(),c);
        ans += abs(dif);
    }
    cout<<ans<<endl;




}



    return 0;
}

//another solutio less in time
#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 int t,n,m ,x;
 cin>>t;
while(t--){
    cin>>n>>m;
    map<int,int>l1;
    map<int,int>l2;
    set<int>s;
    for(int i = 0; i < n; i++){
      cin>>x;
      l1[x]++;
        s.insert(x);
    }
    for(int i = 0; i < m; i++){
       cin>>x;
       l2[x]++;
        s.insert(x);
    }
    int ans = 0;
    for(auto c : s){
        int z = 0, y = 0;
       if(l1.find(c) != l1.end()){
          z = l1[c];
       }
        if(l2.find(c) != l2.end()){
            y = l2[c];
        }
        ans += abs(z-y);
    }
    cout<<ans<<endl;
}
    return 0;
}
