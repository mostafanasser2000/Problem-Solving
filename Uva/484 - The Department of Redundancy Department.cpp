#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
 map<int,int>p;
 queue<int>q;
   while(cin>>n){

       if(p[n] < 1){
           q.push(n);
       }
   p[n]++;
 }

    while (!q.empty()){
        cout<<q.front()<<" "<<p[q.front()]<<endl;
        q.pop();
    }
    return 0;
}
