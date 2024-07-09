#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        int i=0;
        while(i<3){
            cin>>arr[i];
            i++;
        }
        int ans=INT_MAX;
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                sum+=abs(arr[j]-arr[i]);
            }
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
}