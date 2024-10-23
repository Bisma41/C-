#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to check if an integer is a palindrome
bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int main() {
    // For string palindrome
    string inputString;
    cout << "Enter a string to check if it's a palindrome: ";
    cin >> inputString;
    
    if (isPalindrome(inputString)) {
        cout << inputString << " is a palindrome." << endl;
    } else {
        cout << inputString << " is not a palindrome." << endl;
    }

    // For number palindrome
    int inputNum;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> inputNum;
    
    if (isPalindrome(inputNum)) {
        cout << inputNum << " is a palindrome." << endl;
    } else {
        cout << inputNum << " is not a palindrome." << endl;
    }

    return 0;
}
