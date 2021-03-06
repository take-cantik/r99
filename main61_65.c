#include <stdio.h>
#include <stdlib.h>

// 61, ファイル "integers.txt"の最後の n 行に含まれる整数の総和を返す関数 int sum_tail(int n).

// 全ての行の総数から全ての行数-nの総数を引いた。

int lines(void) {
  FILE *fp;
  char line_num[100];
  int line = 0;

  if ((fp = fopen("integers.txt", "r")) == NULL) {
    printf("ファイルを読み込めません。\n");
    exit(1);
  }

  for (;fgets(line_num, 100, fp) != NULL;) {
    line++;
  }
  fclose(fp);

  return line;
}

int sum_n(int n) {
  FILE *fp;

  if ((fp = fopen("integers.txt", "r")) == NULL) {
    printf("ファイルを読み込めません。\n");
    exit(1);
  }

  int i, num;
  int sum = 0;

  for (i = 0; i < n; i++) {
    if (fscanf(fp, "%i", &num) == 1) {
      sum += num;
    } else {
      printf("数を読み込めませんでした。\n");
      exit(1);
    }
  }
  fclose(fp);

  return sum;
}

int sum_tail(int n) {
  return sum_n(lines()) - sum_n(lines() - n);
}

// 62, ファイル名を文字列 fname として引数にとり、そのファイルの中身を 表示する関数 void cat(char *fname)

// fgetsの返り値がNULLになるまで、その行を出力した。

void cat(char *fname) {
  FILE *fp;
  char line[100];

  if ((fp = fopen(fname, "r")) == NULL) {
    printf("ファイルを読み込めません。\n");
    exit(1);
  }

  for (;fgets(line, 100, fp) != NULL;) {
    printf("%s", line);
  }

  fclose(fp);
}

// 63, ファイル名を文字列 fname として引数にとり、そのファイルの中身を 行番号つきで表示する関数 void n_cat(char *fname)

/* 行番号の変数line_numを作成し、これを1から順に増やしていき、その行を出力する前にline_numを出力させた。 */

void n_cat(char *fname) {
  FILE *fp;
  char line[100];

  if ((fp = fopen(fname, "r")) == NULL) {
    printf("ファイルを読み込めません。\n");
    exit(1);
  }

  int line_num;
  for (line_num = 1; fgets(line, 100, fp) != NULL; line_num++) {
    printf("%i %s", line_num, line);
  }

  fclose(fp);
}

// 64, n 以上 m 未満の奇数の和を求める関数 int sum_odds(int n, int m). sum_odds(100, 200) は 7500 を返す。

// nからmまで、2で割ったあまりが1ならその数を足して行った。

int sum_odds(int n, int m) {
  int sum = 0;
  int i;

  for (i = n; i < m; i++) {
    if (i % 2 == 1) {
      sum += i;
    }
  }

  return sum;
}

// 65, n よりも大きい完全数はなにか？を求める関数 int next_perfect(int n). next_perfect(28) はきっと 496 だ。 これまでにR99で作成した関数を駆使しなさい。

// iをn + 1から順に回していき、それが完全数ならその時のiを返す。

int sum_of_divisors(int n) {
  int i;
  int sum = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum;
}

int is_perfect(int n) {
  return sum_of_divisors(n) == 2 * n;
}

int next_perfect(int n) {
  int i;
  for (i = n + 1;; i++) {
    if (is_perfect(i)) {
      return i;
    }
  }
}

int main(void) {
  printf("No61\n");
  printf("%i\n", sum_tail(1));

  printf("No62\n");
  cat("test.txt");

  printf("No63\n");
  n_cat("test.txt");

  printf("No64\n");
  printf("%i\n", sum_odds(100, 200));

  printf("No65\n");
  printf("%i\n", next_perfect(496));
  printf("%i\n", next_perfect(0));
  printf("%i\n", next_perfect(9));
  
  return 0;
}

