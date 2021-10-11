#include<bits/stdc++.h>
using namespace std;
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

string s;
    list<char>lst;
while(getline(cin,s)){
    lst.clear();
    auto it = lst.begin();
    int l = s.size();
    for(int i = 0; i < l; i++){
        if(s[i] == '['){
            it = lst.begin();
            continue;
        }
        else if(s[i] == ']'){
            it = lst.end();
            continue;
        }
        else
        {
            it = lst.insert(it,s[i]);
            it++;
        }
    }
    for(auto c:lst){
        cout<<c;
    }

    cout<<endl;
}

    return 0;
}
