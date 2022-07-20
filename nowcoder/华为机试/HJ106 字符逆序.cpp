#include <iostream>
#include <string>
#include <vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        //reverse string
        string revs = s;
        reverse(revs.begin(),revs.end());
        cout<<revs<<endl;
    }
}