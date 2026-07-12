#include<iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    int cnt = 1;
    for(int i=0; i<n.length()-1; i++){
        if(n[i]== n[i+1]){
            cnt++;
            if(cnt==7){
                cout<<"YES";
                return 0;
            }
        }
        else{
            cnt = 1;
        }
    }
    cout<<"NO";
    return 0;
}