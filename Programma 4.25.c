#include <stdio.h>

 int main () {
      
      int a;
      
      printf("Inserisci un numero da 1 a 9: ");
      scanf("%d", &a);
      
      if ((a > 0 ) && (a < 10))
        printf("GIUSTO!");
        
        if ((a < 0 ) || (a > 9))
        printf("SBAGLIATO!");
        
        return 0;
        
  }
