#include <bits\stdc++.h>

using namespace std;

void merge(vector<int> a, vector<int> b){
    for(int i=0; i<a.size(); i++){
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    for(int i=0; i<b.size(); i++){
        cout<<b[i] << " ";
    }
}

int main()
{
  vector <int> a = {0,3,1,2};
  vector <int> b = {0,3,4,2};
  merge(a,b);
}