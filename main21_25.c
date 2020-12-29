#include <stdio.h>

// 21, 整数 4 つを引数にとり、もっとも大きい整数を戻り値とする関数 int max4(int x, int y, int z, int w).

/*関数max2()を使って、それぞれxとy、zとwの大きい方をif文で比べ、真であればx, yの大きい方、偽であればz, wの大きい方を出力させる*/

int max2(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int max4(int x, int y, int z, int w) {
  if (max2(x, y) > max2(z, w)) {
    return max2(x, y);
  } else {
    return max2(z, w);
  }
}

// 22, 3つの整数を引数とし、 それらの長さを各辺とする三角形がありうるかどうかを判定する関数 int triangle(int x, int y, int z). ヒント：一番長い辺の長さ < 短い辺二つの長さの和

/*一番長い辺の長さを関数max3で求め、その他の2辺の和を出すために3辺の総和から一番お大きいものを引いた。またそれら二つを比較して、一番長い辺が他二つの和より小さかったら1, 違う場合は0を出力させる*/

int max3(int x, int y, int z) {
  return max2(max2(x, y), z);
}

int triangle(int x, int y, int z) {
  return max3(x, y, z) < x + y + z - max3(x, y, z);
}

// 23, 3つの整数を引数とし、 それらの長さを各辺とする直角三角形がありうるかどうかを判定する関数 int right_angle(int x, int y, int z). ヒント:前問の回答

/*直角三角形は一番長い辺の長さの二乗がその他の辺の長さの二乗の和であるので、関数squareと関数max3を使って、両辺を変形して一番長いものの二乗*2とx, y, zの二乗の総和が一致しているかどうかを返す。*/

int square(int n) {
  return n * n;
}

int right_angle(int x, int y, int z) { 
  return square(max3(x, y, z)) * 2 == square(x) + square(y) + square(z);
}

// 24, 整数 n から m までの総和を求める関数 int sum(int n, int m).

/*まず、sumを初期値0で宣言し、for文を使いiがnからmまで回るようにして、その中でsumにiの値を足していく。*/

int sum(int n, int m) {
  int i;
  int sum = 0;

  for (i = n; i <= m; i++) {
    sum += i;
  }

  return sum;
}

//25, 正の整数 n から m までの整数の積を求める関数 int product(int n, int m).

/**/

int product(int n, int m) {
  int i;
  int ans = 1;

  for (i = n; i <= m; i++) {
    ans *= i;
  }

  return ans;
}

int main(void) {
  printf("No21\n");
  printf("%i\n", max4(1, 2, 3, 4));

  printf("No22\n");
  printf("%i\n", triangle(1, 4, 5));

  printf("No23\n");
  printf("%i\n", right_angle(3, 4, 6));

  printf("No24\n");
  printf("%i\n", sum(5, 10));

  printf("No25\n");
  printf("%i\n", product(5, 10));

  return 0;
}
