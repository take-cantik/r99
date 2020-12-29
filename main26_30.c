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

// 28, 

/**/

// 29, 

/**/

// 30,

/**/

int main(void) {
  printf("No26\n");
  printf("%i\n", sum_of_digits(12345));

  printf("No27\n");
  printf("%i\n", fz(30));

  printf("No28\n");

  printf("No29\n");

  printf("No30\n");

  return 0;
}
