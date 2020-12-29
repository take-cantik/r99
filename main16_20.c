#include <stdio.h>

// 16, 整数 n の m 乗を返す関数 int power(int n, int m). C言語では nm を n^m では計算できない。

/*まず、0乗の時は答えは1なのでansに1を代入して、for文を用いてm回回すようにし、その中でansにnをかける*/

int power(int n, int m) {
  int ans = 1;
  int i;

  for (i = 0; i < m; i++) {
    ans *= n;
  }

  return ans;
}

// 17, 彼・彼女の年齢を y とする。彼・彼女がティーンエイジャーだったら 真、そうでなければ偽を返す関数 int teenage(int y).

int teenage(int y) {
  if (y >= 13 && y < 20) {
    return 1;
  } else {
    return 0;
  }
}

// 18, 整数 x, y を引数にとり、大きい方の整数を戻り値とする関数 int max2(int x, int y).

int max2(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

// 19, 整数 x, y を引数にとり、大きい方の整数をプリントする関数 void max_p(int x, int y).

/*if文を使って、xの方が大きい場合にはxを、それ以外の場合はyを出力させる*/

void max_p(int x, int y) {
  printf("%i\n", max2(x, y));
}

// 20, 整数三つを引数にとり、もっとも大きい整数を戻り値とする関数 int max3(int x, int y, int z).

int max3(int x, int y, int z) {
  return max2(max2(x, y), z);
}

int main(void) {
  printf("No16\n");
  printf("%i\n", power(2, 10));

  printf("No17\n");
  printf("%i\n", teenage(12));

  printf("No18\n");
  printf("%i\n", max2(12, 34));

  printf("No19\n");
  max_p(4, 5);

  printf("No20\n");
  printf("%i\n", max3(3, 4, 5));


  return 0;
}
