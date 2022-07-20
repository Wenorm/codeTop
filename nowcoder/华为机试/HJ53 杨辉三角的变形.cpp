#include <iostream>
using namespace std;

int main(){
    int arr[4]={2,3,2,4};
    
    int n;
    cin>>n;
    if(n<3){
        cout<<-1<<endl;
        
    }
    else{
        cout<<arr[(n-3)%4]<<endl;
    }
}