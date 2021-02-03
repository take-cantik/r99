#include <stdio.h>

// 96, 文字列一つを引数にとり、 それが "コロナ"だったら "no thanks."、 "ビール" だったら "乾杯！"、 "単位" だったら "よかったね。"、 それ以外だったら "なんくるないさ" を表示する関数 void greet(char* s).

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

int str_eql(char *s1, char *s2) {
  if (str_len(s1) != str_len(s2)) {
    return 0;
  }

  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    if (s1[i] != s2[i]) {
      return 0;
    }
  }

  return 1;
}

/*
  str_eql関数を用いて、if文を使ってある特定の単語で、その単語に対応するものを出力した。
  また、俺以外の時は、elseを使って、なんくるないさを出力した。
*/

void greet(char *s) {
  if (str_eql(s, "コロナ")) {
    printf("no thanks.\n");
  } else if (str_eql(s, "ビール")) {
    printf("乾杯！\n");
  } else if (str_eql(s, "単位")) {
    printf("よかったね。\n");
  } else {
    printf("なんくるないさ\n");
  }
}

// 97, 1000000 未満の整数で、平方数かつ立方数でもある最大の数を探す関数。 int square_cubic(int n). square_cubic(1000000) の戻り値はきっと、531***.

int is_square(int n) {
  int i;
  for (i = 1; i * i < n; i++) {
    ;
  }
  return i * i == n;
}

int is_cubic(int n) {
  int i;
  for (i = 1; i * i * i < n; i++) {
    ;
  }
  return i * i * i == n;
}

/*
  for文で、iがn未満から1になる前までどんどん減らして行って、
  iがis_squareとis_cubicの両方に正しかったら、そのiを返して、
  最後までそこを通らなかったら答えは1なので、1になっているiを返した。
*/

int square_cubic(int n) {
  int i;
  for (i = n - 1; i > 1; i--) {
    if (is_square(i) && is_cubic(i)) {
      return i;
    }
  }
  
  return i;
}

// 98, 

/**/

// 99, 

/**/

// 100, 

/**/

int main(void) {
  printf("No96\n");
  greet("コロナ");
  greet("ビール");
  greet("単位");
  greet("あひあひ");

  printf("No97\n");
  printf("%i\n", square_cubic(1000000));

  printf("No98\n");

  printf("No99\n");

  printf("No100\n");

  return 0;
}

