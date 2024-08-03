#include <bits\stdc++.h>

using namespace std;


void PrefixString(vector<string>& v,int n){
        string ans="";
        sort(v.begin(),v.end());
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]){
            ans+=first[i];
            }
            else{
                break;
            }
        }
    cout<<ans<<endl;
}

int main()
{
  vector<string> v = {"flower","flow","flight"};
  int n = v.size();
  PrefixString(v,n);
}