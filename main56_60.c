#include <stdio.h>
#include <stdlib.h>

// 56, ファイル integers.txt をダウンロードし、適当な場所にセーブしてください。以下、61番まではこのファイルを使います。 ファイル "integers.txt" には一行にひとつ、 整数が書き込まれている。 そのファイルの1行目の数を返す関数 int head(void).

/*fopenでファイルをreadモードでオープンし、fscanfで一つ整数を読み込んで最後にfcloseをしてとじた。*/

int head(void) {
  FILE *fp;
  int number;

  fp = fopen("integers.txt", "r");
  fscanf(fp, "%i", &number);
  fclose(fp);

  return number;
}

// 57, ファイル "integers.txt" が何行あるかを返す関数 int lines(void).

// fgetを用いて、その返り値がNULLになるまで変数lineに足していき、lineを返した。

int lines(void) {
  FILE *fp;
  char line_num[100];
  int line = 0;

  fp = fopen("integers.txt", "r");
  for (;fgets(line_num, 100, fp) != NULL;) {
    line++;
  }
  fclose(fp);
  
  return line;
}

// 58, ファイル "integers.txt" の n 行目の数字を返す関数 int nth(int n).

// n回fscanfを行い、最後に入れられたものを返す。

int nth(int n) {
  FILE *fp;
  int i, ret_num;

  fp = fopen("integers.txt", "r");
  for (i = 0; i < n; i++) {
    fscanf(fp, "%i", &ret_num);
  }
  fclose(fp);

  return ret_num;
}

// 59, ファイル "integers.txt" の最初の十行に含まれる整数の総和を返す関数 int sum10(void).

// 10回回して、その総和を返した。

int sum10(void) {
  FILE *fp;
  int i, num;
  int sum = 0;

  fp = fopen("integers.txt", "r");
  for (i = 0; i < 10; i++) {
    fscanf(fp, "%i", &num);
    sum += num;
  }
  fclose(fp);

  return sum;
}

// 60, ファイル "integers.txt" の最初の n 行に含まれる整数の総和を返す関数 int sum_n(int n).

/* sum10の関数のfor文の回す数を引数のnとした。 */

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

int main(void) {
  printf("No56\n");
  printf("%i\n", head());

  printf("No57\n");
  printf("%i\n", lines());

  printf("No58\n");
  printf("%i\n", nth(1));
  printf("%i\n", nth(23455));
  printf("%i\n", nth(34567));

  printf("No59\n");
  printf("%i\n", sum10());

  printf("No60\n");
  printf("%i\n", sum_n(10));
  
  return 0;
}

