#include <stdio.h>

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

int main(void) {
  char s0[] = "あいうえお";
  printf("%i\n", str_len(s0));

  int i;
  for (i = 0; s0[i] != '\0'; i += 3) {
    printf("%i, %c\n", i, s0[i]);
  }
  printf("%s\n", s0 + 3);


  return 0;
}
