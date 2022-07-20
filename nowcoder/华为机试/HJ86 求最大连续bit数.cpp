#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int cnt=0;
    while(n){
        if(n&1){
            cnt++;
            if(cnt>ans){
                ans=cnt;
            }
        }
        else{
            cnt=0;
        }
        n=n>>1;
    }
    cout<<ans<<endl;
}