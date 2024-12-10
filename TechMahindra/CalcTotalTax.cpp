#include <bits\stdc++.h>

using namespace std;

void calcTotalTax(vector<int> tax){
    int res = 0;
    for(int i=0; i<tax.size(); i++){
        if(tax[i]==1000){
            res = res + 0;
        }
        else if (tax[i] > 1000)
        {
            tax[i] = tax[i] - 1000;
            res += tax[i] * 0.1;
        }
    }
    cout<<res;
}

int main()
{
    vector<int> tax = {1000,2000,3000,4000,5000};
    calcTotalTax(tax);
}