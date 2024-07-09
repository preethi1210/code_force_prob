#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    int cnt=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0 && arr[i]==arr[i-1]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"NO"<<endl;
    }
    else{
    string ans=""; 
    int len=n;
    while(len--){
        ans+='B';
    }
    bool flag=false;
    while(flag==false){
    for(int i=0;i<n;i++){
        int mini=INT_MAX,maxi=INT_MIN;
        for(int j=0;j<n;j++){
            if(flag==false && j!=i){
                mini=min(mini,arr[j]);
                maxi=max(maxi,arr[j]);
            }
            if(mini-maxi==0){
                ans[i]='R';
                flag=true;
            }
            break;
        }
    }
    }
    cout<<"YES"<<endl;
    cout<<ans<<endl;
   } 
}
}