#include <stdio.h>

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

// 58, 

/**/

// 59, 

/**/

// 60, 

/**/

int main(void) {
  printf("No56\n");
  printf("%i\n", head());

  printf("No57\n");
  printf("%i\n", lines());

  printf("No58\n");

  printf("No59\n");

  printf("No60\n");
  
  return 0;
}

