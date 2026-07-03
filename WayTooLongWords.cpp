#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str.length() <= 10){
        cout<<str<<endl;
        return 0;
    }
    int cnt = 0;
    for(char it : str ){
        cnt++;
    }
    cout<<str.substr(0,1)<<cnt-2<<str.substr(cnt-1,1)<<endl;
}