#include <stdio.h>

// 31, n 以下の整数のうち、もっとも約数の多い数を返す関数 int most_divisors(int n). 前問に同じ。most_divisors(1000)の戻り値は 840.

/*number_of_divisors関数を作り、約数の場合countに1足していき、ある数の約数の数を返す。
次に、most_divisors関数で、1からnまで回し、most_countよりnumber_of_divisorsが大きい場合は
most_countにその時の約数の数を入れ、most_divisorにその時の数を入れる。
最後にmost_divisorを返すことにより、もっとも約数の多い数が返される。*/

int number_of_divisors(int n) {
  int i;
  int count = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }

  return count;
}

int most_divisors(int n) {
  int i;
  int most_divisor = 0;
  int most_count = 0;
  for (i = 1; i <= n; i++) {
    if (most_count < number_of_divisors(i)) {
      most_count = number_of_divisors(i);
      most_divisor = i;
    }
  }

  return most_divisor;
}

// 32, 整数一つを引数とし、 その数が素数だったら1、素数でなかったら 0 を返す関数 int is_prime(int n). 約数が何個あるかを数えて素数判定するのは遅い。 速い素数判定を望む。repl.it で is_prime(2147483549) が3秒以内で 1 を返せば速いと認める。 回答には次で得られる計算時間を入れること。

/*0, 1の時はすぐに0を返し、for文の最後でfinish_num = n / iとすることで、
その数で割った数以降には約数が存在しないことがわかるので、早く求められる。*/

int is_prime(int n) {
  int i;
  int finish_num = n;

  if (n == 0 || n == 1) {
    return 0;
  }

  for (i = 2; i <= finish_num; i++) {
    if (n % i == 0) {
      return 0;
    }
    finish_num = n / i;
  }

  return 1;
}
// 33, 

/**/

// 34, 

/**/

// 35, 

/**/

int main(void) {
  printf("No31\n");
  printf("%i\n", most_divisors(1000));

  printf("No32\n");
  printf("%i\n", is_prime(2147483549));

  printf("No33\n");

  printf("No34\n");

  printf("No35\n");

  
  return 0;
}

