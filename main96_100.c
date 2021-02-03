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

// 97, 

/**/

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

  printf("No98\n");

  printf("No99\n");

  printf("No100\n");

  return 0;
}

