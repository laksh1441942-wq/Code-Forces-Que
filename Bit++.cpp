#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt =0;
    while(n--){
        string s;
        cin>>s;
        if(s == "++X" || s == "X++") cnt++;
        else if(s == "--X" || s == "X--") cnt--;
    }
    cout<<cnt;
    return 0;
}