#include <bits\stdc++.h>

using namespace std;

void findSuperior(vector<int> v){
    int count = 0;
    int superior = INT8_MIN;
    for(int i = v.size()-1; i>=0; i--){
        if(v[i] > superior){
            superior = v[i];
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
  vector<int> v = {8,10,6,5,4,9,7};
  findSuperior(v);
}