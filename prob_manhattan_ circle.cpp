#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        char arr[n][m];
        int cnt=0;
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='#'){
                cnt++;
            }
           } 
        }
        cnt=cnt/2 +1;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(flag==true){
            for(int j=0;j<m;j++){
                if(flag==true && arr[i][j]=='#'){
                   cnt--;
                }
                if(flag==true && cnt==0){
                    cout<<i+1<<" "<<j+1<<endl;
                    flag=false;
                    break;
                }
            }
            }
        }
    }
}