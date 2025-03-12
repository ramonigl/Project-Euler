#include <stdio.h>

int isPalindrome(int num) {
    
    int original = num, rest = 0, reversed = 0;

    while (num > 0) {
        rest = num % 10;
        num /= 10;
        reversed = reversed * 10 + rest;
    }
    return original == reversed;
}

int main(){

    int largestPalindrome = 0;

    for (int i = 999; i >= 100; i--){
        for (int j = i; j >= 100; j--){

            int num = j * i;
        
            if (isPalindrome(num) && num > largestPalindrome){        
                largestPalindrome = num;
                break;
            }  
        }
    }
    printf("\nlargest palindrome = %d\n\n", largestPalindrome);

    return 0;
}
