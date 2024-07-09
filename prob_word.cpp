#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        char c1=s1[0];
        char c2=s2[0];
        s2[0]=c1;
        s1[0]=c2;
        cout<<s1<<" "<<s2<<endl;
    }
}