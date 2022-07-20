#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int x){
    if(x<=1) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int minlen=n;
    int a=0;
    int b=0;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i)&&isPrime(n-i)){
            if(minlen>n-i-i){
                minlen=n-i-i;
                a=i;
                b=n-i;
            }
        }
    }
    cout<<a<<endl<<b<<endl;
}