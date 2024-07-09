#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int m,n;
    cin>>m;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=true;
    while(flag){
    int cnt=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
    if(cnt==0 && (i+1>=m || ( arr[i+1][j]<arr[i][j] )  ) && (i-1<0 || ( arr[i-1][j]<arr[i][j]) ) && (j+1>=n || ( arr[i][j+1]<arr[i][j]) ) && (j-1<0 || ( arr[i][j-1]<arr[i][j]) )){
     int maxi=0;
     if(i+1<m){
     maxi=max(arr[i+1][j],maxi);
     }
     if(i-1>=0){
     maxi=max(arr[i-1][j],maxi);
     }
     if(j-1>=0){
     maxi=max(arr[i][j-1],maxi);
     }
     if(j+1<n){
     maxi=max(arr[i][j+1],maxi);   
     }
       arr[i][j] =maxi ;
cnt++;
            }
        }
    }
    if(cnt==0){
        flag=false;
    }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    }

}