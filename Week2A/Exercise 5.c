#include <stdio.h> 
  int main(int argc, char **argv) 
{ 
        int n1 = 5, n2 = 10, min; // variable declaration 
        //int n1 = 10, n2 = 5, min; // change the values
         min = (n1 < n2) ? n1 : n2;  // Smallest among n1 and n2 
  
        // Print the smallest number 
    printf("Smallest number between %d and %d is %d. ",n1, n2, min); 
      return 0; 
}
