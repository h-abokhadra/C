// Working of assignment operators
#include <stdio.h>
int main(int argc, char **argv)
{
    int a = 5, c;

    c = a;      //           c is 5 because a is 5
    printf("c = %d\n", c);
    c += a;     //           c=c+a         i.e c=c+5      so c is now 10
    printf("c = %d\n", c);
    c -= a;     //           c= c-a        i.e c=10-5     so c is now 5
    printf("c = %d\n", c);
    c *= a;     //           c= c*a        i.e c = 5*5    so c is now 25
    printf("c = %d\n", c); 
    c /= a;     //           c= c/a        i.e c = 25/5   so c is now 5
    printf("c = %d\n", c);
    c %= a;     //            c = c%a      i.e 5%5        so c is now 0
    printf("c = %d\n", c);

    return 0;
}
