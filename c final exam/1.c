#include <stdio.h>

int main() {

int num, firstdigit, lastdigit , sum;

printf("enter a 3-digit positive integer:");

scanf("%d" , &num);

firstdigit = num / 100;

lastdigit = num % 10;

sum = firstdigit + lastdigit;

printf("the sum of first and last digit is: %d"\n", sum);

return0;

}