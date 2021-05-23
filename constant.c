#include <stdio.h>

int main(int argc, char** argv)
{
   const int  LENGTH = 10;
   const int  WIDTH = 5;
   const char ALPHABET = 'A';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("\n%c", ALPHABET);

   return 0;	
}

