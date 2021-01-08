#include <stdio.h>

// 46, 1~20 の各整数についてその2乗をプリントする関数 void squares_p(void).

// for文をiを1~20で回し、square関数にそれぞれ入れ、出力した。

int square(int n) {
  return n * n;
}

void squares_p(void) {
  int i;
    for (i = 1; i <= 20; i++) {
      printf("%i\n", square(i));
    }
}

// 47, 

/**/

// 48, 

/**/

// 49, 

/**/

// 50, 

/**/

int main(void) {
  printf("No46\n");
  squares_p();

  printf("No47\n");

  printf("No48\n");

  printf("No49\n");

  printf("No50\n");
  
  return 0;
}

