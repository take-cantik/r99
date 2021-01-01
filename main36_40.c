#include <stdio.h>

// 36, 整数一 つを引数とし、その数が完全数かどうかを判定する関数 int is_perfect(int n).

/*完全数は自身の数は含まないので、sum_of_divisors関数がnの二倍と等しくなると完全数と言える。*/

int sum_of_divisors(int n) {
  int i;
  int sum = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum;
}

int is_perfect(int n) {
  return sum_of_divisors(n) == 2 * n;
}

// 37, 

/**/

// 38, 

/**/

// 39, 

/**/

// 40, 

/**/

int main(void) {
  printf("No36\n");
  printf("%i\n", is_perfect(496));

  printf("No37\n");

  printf("No38\n");

  printf("No39\n");

  printf("No40\n");
  
  return 0;
}

