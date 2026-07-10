#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    string result = "";
    for(int i=0;i<s.length();i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i]=='Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='y'){
            continue;
        }
        if(isupper(s[i])){
            result.push_back('.');
            result.push_back(tolower(s[i]));
        }
        else{
            result.push_back('.');
            result.push_back(s[i]);
        }
    }
    cout<<result;
    return 0;
}