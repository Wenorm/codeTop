#include <bits/stdc++.h>
using namespace std;

int a[20][2];
string s;
int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        cin>>s;
        stack<pair<int,int>>st;
        int len=s.size();
        int res=0;
        for(int i=0;i<len;i++){
            if(s[i]==')'){
                auto y=st.top();
                st.pop();
                auto x=st.top();
                st.pop();
                if(x.second==y.first){
                    res+=x.first*x.second*y.second;
                    st.push({x.first, y.second});
                }
            }
            else if(s[i]!='('){
                int t=s[i]-'A';
                st.push({a[t][0], a[t][1]});
            }
        }
        cout<<res<<endl;
    }
}