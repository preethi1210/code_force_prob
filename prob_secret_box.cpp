#include<iostream>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        ll k;
        cin>>x>>y>>z;
        cin>>k;
        ll ans=0;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(k%(i*j)==0){
                    ll c=k/(i*j);
                    if(c<=z){
                        ll val1=(x-i+1);
                        ll val2=(y-j+1);
                        ll val3=(z-c+1);
                    ans=max(ans,val1*val2*val3);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}