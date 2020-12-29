#include <stdio.h>

// 11, 整数二つを引数とし、第 1 引数が第 2 引数で割り切れたら 1、 そうでない時 0 を返す関数 int divide(int x, int y).

/*x % y == 0の結果を返すような関数*/

int divide(int x, int y) {
  return x % y == 0;
}

// 12, キーボードから整数 x,y を入力し、 x が y で割り切れたら "割り切る"、 そうでない時、"割り切れない" をプリントする関数 void divide_p(void).

/*scanf()を使ってxとyに値を代入してx % y == 0の時に割り切る、そうでない時に割り切れないを出力させる関数を作った。*/

void divide_p(void) {
  int x, y;

  scanf("%i", &x);
  scanf("%i", &y);

  if (x % y == 0) {
    printf("割り切る\n");
  } else {
    printf("割り切れない\n");
  }
}

// 13,  整数 n の絶対値を返す関数 int abs(int n).

/*0より小さいときはその値のマイナスの値を返し、0以上の時にはそのまま値を返すようにする*/

int abs(int n) {
  if (n < 0) {
    return -n;
  } else {
    return n;
  }
}

// 14, 整数 n の 2 乗を戻り値とする関数 int square(int n).

/*nの二乗を返すので、n * nを返す関数にする*/

int square(int n) {
  return n * n;
}

// 15, 整数 n の 3 乗を戻り値とする関数 int triple(int n).

/*nの3乗を返すので、n * n * n を戻り値とした*/

int triple(int n) {
  return n * n * n;
}

int main(void) {
  printf("No11\n");
  printf("%i\n", divide(12, 3));
  printf("%i\n", divide(2, 3));

  printf("No12\n");
  divide_p();

  printf("No13\n");
  printf("%i\n", abs(-12));

  printf("No14\n");
  printf("%i\n", square(3));

  printf("No15\n");
  printf("%i\n", triple(2));

  return 0;
}
