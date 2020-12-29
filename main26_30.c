#include <stdio.h>

// 26, 整数 n の各桁の総和を返す関数 int sum_of_digits(int n). sum_of_digits(12345) の戻り値は 15 。

/*iを10から一周ごとに10かけてスタートさせ、for文のなかでnをiで割って、最後にnからその数を引く。また、その数に10をかけて、iで割ることでその桁の数字が出てくる。*/

int sum_of_digits(int n) {
  int i, divided_num, add_num;
  int sum = 0;
  for (i = 10; n * 10 / i != 0; i *= 10) {
    divided_num = n % i;
    add_num = divided_num * 10 / i;
    sum += add_num;
    n -= divided_num;
  }

  return sum;
}

// 27, 整数 n を引数とし、それが 3 の倍数だったら 1、 5 の倍数だったら 2、 3 の倍数でもあり、かつ、5 の倍数でもあったら 3、 いずれでもなかったら 0 を返す関数 int fz(int n).

/*条件が厳しい方から、つまり15の倍数の判定からif文を分けた。*/

int fz(int n) {
  if (n % 15 == 0) {
    return 3;
  } else if (n % 3 == 0) {
    return 1;
  } else if (n % 5 == 0) {
    return 2;
  } else {
    return 0;
  }
}

// 28, 整数一つを引数とし、その約数を全てプリントする関数 void divisors_p(int n).

/*for文でiを1からnまで回し、nをiで割ったあまりが0となったものを出力する。*/

void divisors_p(int n) {
  int i;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%i\n", i);
    }
  }
}

// 29, 整数一つを引数とし、その約数の合計を戻り値とする関数 int sum_of_divisors(int n).

/**/
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

// 30, n 以下の素数(nは整数)は何個あるかを戻り値とする関数 int primes(int n). primes(10000) の戻り値はおそらく 1229。

/*まずはis_prime()関数を作って、そこでは引数numが素数なら1, 違うなら0を返す関数であり、
primes()関数で、は2からnまでの整数をis_prime関数に通して、1ならcountに1足して、最後にcountを返す。*/

int is_prime(int num) {
  int i;

  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int primes(int n) {
  int i;
  int count = 0;

  for (i = 2; i <= n; i++) {
    if (is_prime(i)) {
      count++;
    }
  }

  return count;
}

int main(void) {
  printf("No26\n");
  printf("%i\n", sum_of_digits(12345));

  printf("No27\n");
  printf("%i\n", fz(30));

  printf("No28\n");
  divisors_p(1024);

  printf("No29\n");
  printf("%i\n", sum_of_divisors(12));

  printf("No30\n");
  printf("%i\n", primes(10));

  return 0;
}
