// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int year;
    int leapyear = 0;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leapyear = 1;
            }
        } else {
            leapyear = 1;
        }
    }

    if (leapyear) {
        printf("This is a leap year");
    } else {
        printf("This is not a leap year");
    }

    return 0;
}
