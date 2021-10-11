#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int i = 1;
while(true){
    cin>>n;
    if(n == 0)
        break;
    vector<int>v(n,0);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];
    }
    int x = sum / n;
    int k = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < x){
            k += (x - v[i]);
        }

    }
    cout<<"Set #"<<i<<endl;
    cout<<"The minimum number of moves is "<<k<<"."<<endl;
    cout<<endl;
i++;
}


    return 0;
}
