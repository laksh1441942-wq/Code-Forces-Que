#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    int count=0;
    for(char ch : s){
        m[ch]++;
    }
    if(m.size() % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}