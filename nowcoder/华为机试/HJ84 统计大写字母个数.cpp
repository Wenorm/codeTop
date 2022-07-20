#include<iostream>
#include<string.h>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;     
}