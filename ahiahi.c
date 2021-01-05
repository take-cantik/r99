#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_rand(int n) {
  return random() % n;
}

int main(void) {
  srandom(getpid( ));
    
  int i;
  for (i = 0; i < 10; i++) {
      printf("%i\n", my_rand(10));
  }
  
  return 0;
}
