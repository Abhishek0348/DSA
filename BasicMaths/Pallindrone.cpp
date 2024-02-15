#include <iostream>

using namespace std;

int main()
{
    int rev=0,digit,Orignal=505;
    int n = Orignal;
    while(n!=0){
        digit=n % 10;
        rev = rev * 10 + digit;
        n=n/10;
    }
    if(Orignal == rev)
        cout<<"True";
    else
        cout<<"False";
  return 0;
}