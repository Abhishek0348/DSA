#include <bits\stdc++.h>

using namespace std;

void calcTotalTax(vector<int> Nos){
    set<int> s;
    for(auto a : Nos){
        s.insert(a);
    }
    for(auto i : s){
        cout<<i << " ";
    }
    
}

int main()
{
    vector<int> Nos = {1,1,2,3,4,2,4};
    calcUnique(Nos);
}