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

// 63, 

/**/

// 64, 

/**/

// 65, 

/**/

int main(void) {
  printf("No61\n");
  printf("%i\n", sum_tail(1));

  printf("No62\n");
  cat("test.txt");

  printf("No63\n");

  printf("No64\n");

  printf("No65\n");
  
  return 0;
}

