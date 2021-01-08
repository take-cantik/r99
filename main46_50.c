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

// 47, 整数 n のルートを超えない最大の整数を返す関数 int sqrt_int(int n). sqrt_int(24) の戻り値は4, sqrt_int(25)の戻り値は5 を期待している。 ヒントは前問。ライブラリ sqrt を使うことは反則とする。

// iの二乗がn以下まで回して、最後にi-1を返す。

int sqrt_int(int n) {
  int i;
  for (i = 1; i * i <= n; i++) {
    ;
  }

  return i - 1;
}

// 48, float x を四捨五入した int を返す関数 int f_to_i(float x). ヒント: 浮動小数点数 x の整数部分は (int)x で得られる。 かっこの付け方が妙だけど、こう書く。(int)3.5 は 3 だよ。4にならない。

// xの整数部をxから引いて、0.5以上で整数部＋１、それ以外で整数部を返す。

int f_to_i(float x) {
  int x_int = (int)x;
  if (x - x_int >= 0.5) {
    return x_int + 1;
  } else {
    return x_int;
  }
}

// 49, 

/**/

// 50, 

/**/

int main(void) {
  printf("No46\n");
  squares_p();

  printf("No47\n");
  printf("%i\n", sqrt_int(24));
  printf("%i\n", sqrt_int(25));

  printf("No48\n");
  printf("%i\n", f_to_i(3.49));
  printf("%i\n", f_to_i(3.51));

  printf("No49\n");

  printf("No50\n");
  
  return 0;
}

