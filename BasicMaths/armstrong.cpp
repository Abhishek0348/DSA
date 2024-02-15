#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n = 1634,len,digit;
  int sum = 0,count=0;
  int original = n;
  int temp = n;
  while(n!=0){
    n = n/10;
    count++;
  }
  while(temp!=0){
    digit = temp%10;
    sum = sum + pow(digit,count);
    temp = temp/10;
  }
  if(original == sum)
    cout<<"True";
  else
    cout<<"False";
  return 0;
}