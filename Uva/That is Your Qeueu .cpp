#include<bits/stdc++.h>
using namespace std;
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
int n,k;
    int i = 1;
while(true){

    cin>>n>>k;
    if(n == 0 && k==0)
        break;

    deque<int>q;
    for(int i = 1; i <= n && i <= 1000; i++){
        q.push_back(i);
    }
    char c;
    cout<<"Case "<<i<<":"<<endl;
    int j = 1;
    while(k--){
        cin>>c;

        if(c == 'E'){
            int e; cin>>e;
            auto it = find(q.begin(),q.end(),e);
            if(it != q.end()){
                q.erase(it);
            }

            q.push_front(e);

        }
        else if(c == 'N'){
          cout<<q.front()<<endl;
          q.push_back(q.front());
          q.pop_front();
        }
    }

    i++;
}




    return 0;
}
