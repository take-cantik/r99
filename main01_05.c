#include <stdio.h>

// 1, "hello, robocar!" をプリントする関数 void hello_p(void).
void hello_p(void) {
  printf("hello, robocar!\n");
}

// 2, 整数を引数にとり、それに1足した数を戻り値とする関数 int add1(int x).
int add1(int x) {
  return ++x;
}

// 3, 整数ひとつをキーボードから読み、 それに 1 を足した数をプリントする関数 void add1_p(void).
void add1_p(void) {
  int num;

  scanf("%d", &num);
  printf("%d\n", ++num);
}

// 4, 円の半径（整数）を引数にとり、 その円の面積（浮動小数点数）を戻り値とする関数 float en(int r).
float en(int r) {
  return r * r * 3.14;
}

// 5, 円の半径（整数）をキーボードから読み、 その円の面積（浮動小数点数）をプリントする関数 void en_p(void).
void en_p(void) {
  int r;

  scanf("%i", &r);
  printf("%f\n", r * r *3.14);
}

int main(void) {
  printf("No1\n");
  hello_p();

  printf("No2\n");
  printf("%i\n", add1(2));

  printf("No3\n");
  add1_p();

  printf("No4\n");
  printf("%f\n", en(3));

  printf("No5\n");
  en_p();

  return 0;
}

