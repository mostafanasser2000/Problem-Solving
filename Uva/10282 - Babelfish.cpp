#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 string s;
 map<string,string>dic;
    while (getline(cin,s) && s!=""){
    stringstream m(s);
    string english,foreign;
    m>>english>>foreign;
        dic[foreign] = english;
 }
    while (getline(cin,s)){
        auto it = dic.find(s);
        if(it == dic.end())
            cout<<"eh"<<endl;
        else{
            cout<<dic[s]<<endl;
        }
    }



    return 0;
}
