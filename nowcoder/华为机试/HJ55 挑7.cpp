#include<iostream>
using namespace std;
//输出 1到n之间 的与 7 有关数字的个数。
bool isContain7(int x){
    while(x){
        if(x%10==7) return true;
        x=x/10;
    }
    return false;
}

int main(){
    int n;5
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(i%7==0||isContain7(i)){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}