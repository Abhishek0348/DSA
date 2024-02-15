#include <iostream>

using namespace std;

int* printDivisors(int n, int &size) {
    int divisors[n]; 
    int index = 0; 
    
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            divisors[index++] = i; 
        }
    }
    
    size = index; 
    
    
    int* result = new int[index];
    
    
    for(int i = 0; i < index; i++) {
        result[i] = divisors[i];
    }
    
    return result; 
}

int main() {
    int n = 12;
    int size;
    
   
    int* divisors = printDivisors(n, size);
    
    
    cout << "Divisors of " << n << ": ";
    for(int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    
    
    delete[] divisors;
    
    return 0;
}
