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

// 27, 

/**/

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

  printf("No28\n");

  printf("No29\n");

  printf("No30\n");

  return 0;
}
