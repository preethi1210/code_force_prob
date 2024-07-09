#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][1]>>arr[i][0];
    }
    sort(arr,arr+n);
    vector<bool>vec(n,false);
    int curr_l=0,curr_r=0;
    for(int i=0;i<n;i++){
            
    }
}