#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, b,c = 0;


    for (a = 1; a < 13; a+=3) {
        
        c = a + 1;

        printf("\n   %d단", a);
        printf("\t\t\t   %d단",c);
        printf("\t\t\t   %d단", c = c + 1);
        
        for (b = 1;b <= 9;++b) {

            printf("\n%d * %d = %2d\t", a, b, a * b);
            printf("\t%d * %d = %2d\t", a+1 , b, (a + 1) * b);
            printf("\t%d * %d = %2d\t", a + 2, b, (a + 2) * b);


        }



    }

    return 0;
}