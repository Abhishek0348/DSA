#include <bits\stdc++.h>

using namespace std;

void SeniorCitizens(vector<string> details){
    int count = 0;
    string ans = "";
    for(int i = 0; i < details.size(); i++){
        ans = details[i][11];
        ans += details[i][12];
        if(ans > "60"){
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    SeniorCitizens(details);
}