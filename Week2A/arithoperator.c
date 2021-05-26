// Working of arithmetic operators
#include <stdio.h>
int main(int argc, char **argv)
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a %% b = %d \n",c); // Slide 15 Escape sequence from Week 1B:Input&Output %%
    
    return 0;
}
