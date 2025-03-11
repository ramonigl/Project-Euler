#include <stdio.h>
#include <math.h>


#define NUM 600851475143

int main(){

    int prime = 1, isPrime = 0;
    long num = NUM;

    printf("\nnum = %ld\n", num);

    while (num % 2 == 0) {
        num /= 2;
    }

    for (prime = 1; prime < num; prime+=2){
        for (int i = 3; i < prime; i+=2) {
            if (prime % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && (num % prime == 0)) {
            num = num / prime;
        }

        isPrime = 1;
    }

    printf("prime = %d\n\n", prime);

    return prime;
}