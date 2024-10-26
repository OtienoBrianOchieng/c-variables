#include <stdio.h>

int main() {
    int age = 34;
    printf( "My age is %d", age);

    age = 35;
    printf("\n New age is %d", age);

    int childred = age;
    printf("\n His age is the same as children . He has %d childred", childred);

    return 0;
}