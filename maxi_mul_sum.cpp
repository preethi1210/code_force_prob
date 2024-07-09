#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int val;
        cin>>val;
        int ans=2;
        int val2=val/2;
        int maxi=(val2+1)*(val2);
        for(int i=3;i<=val;i++){
            int val1=(val/i);
            int maxi1=(val1+1)*(val1)*(i)/2;
            if(maxi1>maxi){
                ans=i;
                maxi=maxi1;
            }
        }cout<<ans<<endl;
    }
}