#include <stdio.h>

// 11, 整数二つを引数とし、第 1 引数が第 2 引数で割り切れたら 1、 そうでない時 0 を返す関数 int divide(int x, int y).

/*if文を使って、x % y == 0の結果が真なら1、偽なら0を返すような関数を作った。*/

int divide(int x, int y) {
  if (x % y == 0) {
    return 1;
  } else {
    return 0;
  }
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

int main(void) {
  printf("No11\n");
  printf("%i\n", divide(12, 3));
  printf("%i\n", divide(2, 3));

  printf("No12\n");
  divide_p();

  printf("No13\n");

  printf("No14\n");

  printf("No15\n");


  return 0;
}
