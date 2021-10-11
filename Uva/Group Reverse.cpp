#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string txt ;
while(true){
    cin>>n;
    if(n == 0)
        break;
    cin>>txt;
    string reversed;

int sz = (int)txt.size() / n;

    for(int i = 0; i < (int)txt.size(); i+= sz){
        string sub = txt.substr(i,sz);
        reverse(sub.begin(),sub.end());
        reversed += sub;
    }
    cout<<reversed<<endl;
}

    return 0;
}
