#include <iostream>

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    int bitCount = 32; 
    
    while (bitCount--) {
        result <<= 1; 
        result |= (n & 1); 
        n >>= 1; 
    }
    
    return result;
}

int main() {
    uint32_t n = 12; // Example input
    cout << "Reversed bits of " << n << ": " << reverseBits(n) << std::endl;
    return 0;
}