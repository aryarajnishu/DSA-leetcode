#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include <algorithm>

#include<bits/stdc++.h>
using namespace std;

#include <iostream>

int main() {
    int num1, num2;
    
    // Input the two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    // Calculate the XOR of the two numbers
    int xor_result = num1 ^ num2;
    
    // Output the result
    std::cout << "XOR of " << num1 << " and " << num2 << " is: " << xor_result << std::endl;
    
    return 0;
}
