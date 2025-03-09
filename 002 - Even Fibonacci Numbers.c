#include <stdio.h>

#define MAX_TERM 4000000

int main(){

    int num1 = 1, num2 = 1, temp, some = 0;

    while (temp <= MAX_TERM) {

        if (num2 % 2 == 0)
            some += num2;

        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }

    printf("\n%d\n\n", some);

    return 0;
}