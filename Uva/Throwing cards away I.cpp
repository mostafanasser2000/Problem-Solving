#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
while (true){
    vector<int>dis;
    deque<int>rem;
    cin>>n;
    if(!n)
        break;
    for(int i = 1; i <= n; i++){
        rem.push_back(i);
    }
    while(rem.size() >= 2){
        dis.push_back(rem.front());
        rem.pop_front();
        rem.push_back(rem.front());
        rem.pop_front();
    }
    cout<<"Discarded cards:";
    for(int i = 0; i < (int) dis.size(); i++){

            cout<<" "<<dis[i];
        if(i != n-2)
            cout<<",";
    }

    cout<<"\nRemaining card: ";
    for(auto c:rem){
        cout<<c<<endl;
    }

}
    return 0;
}
