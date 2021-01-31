#include <stdio.h>
#include <stdlib.h>

// 81, 文字列 s1 と文字列 s2 が等しいかどうかを判定する関数 int str_eql(char* s1, char* s2)

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

/*
  まず、二つの文字列の長さを比べて、違ったら0を返す。
  次に、forでs1が'\0'になるまで回し、その中でs1[i]とs2[i]が違ったら0を返す。
  最後に1を返す。
*/

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

// 82, 二つの文字列 s1, s2 の先頭の n 文字が等しいかどうかを判定する関数 int str_eql_n(char* s1, char* s2, int n).

/*
  for文でiをn回回して、まずs1, s2のi番目の要素が'\0'だったら0を返して、
  次に、s1, s2のi番目の要素が違ったら0を返す。
  最後にfor文を抜けたら1を返した。
*/

int str_eql_n(char *s1, char *s2, int n) {
  int i;

  for (i = 0; i < n; i++) {
    if (s1[i] == '\0' || s2[i] == '\0') {
      return 0;
    }
    if (s1[i] != s2[i]) {
      return 0;
    }
  }
  return 1;
}

// 83, 文字列 s1 を文字列 s2 にコピーする関数 void str_copy(char* s1, char* s2). s2 は s1 をコピーするに十分な長さがあると仮定してよい。 以下同様。 str_copy(s1,s2) の実行後、str_sql(s1, s2) が真になること。

/*
  for文でiをs1[i]が'\0'になるまで回し、その中でs2[i]にs1[i]を代入して、
  抜けた後s2[i]に'\0'を代入した。
*/

void str_copy(char *s1, char *s2) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    s2[i] = s1[i];
  }
  s2[i] = '\0';
}

// 84, 文字列 s1 の後ろに文字列 s2 を連結する関数 char* str_append(char* s1, char* s2). str_append("abc", "def") の実行後、str_eql(s1, "abcdef")は真になる。s1 を破壊しないバージョンも作ってみよう。s1 と s2 を連結した文字列を返すように。

/*
  まず、two_str_lenにs1, s2の長さの和を代入した。
  次に、spにmallocを使ってchar型のtwo_str_lenの大きさのメモリを確保した。
  その後、spにs1, s2の順で要素を格納していき、終わりに'\0'を代入した。
  最後にfree関数でメモリを開放してspを返した。
  （free関数を使うタイミングがここで良いかわからなかったが、動いたのでここに書いた。）
*/

char *str_append(char *s1, char *s2) {
  int two_str_len = str_len(s1) + str_len(s2);
  char *sp = NULL;
  sp = (char*)malloc(sizeof(char) * two_str_len);
  if (sp == NULL) {
    perror("配列を作成できませんでした。\n");
  }

  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    sp[i] = s1[i];
  }
  for (i = 0; s2[i] != '\0'; i++) {
    sp[i + str_len(s1)] = s2[i];
  }
  sp[two_str_len] = '\0';

  free(sp);
  return sp;
}

// 85, 

/**/

int main(void) {
  printf("No81\n");
  char s01[] = "ahiahi";
  char s02[] = "ahiahi";
  printf("%i\n", str_eql(s01, s02));

  printf("No82\n");
  char s11[] = "qwertyuiop";
  char s12[] = "qwertasdfg";
  printf("%i\n", str_eql_n(s11, s12, 6));
  printf("%i\n", str_eql_n(s11, s12, 5));

  printf("No83\n");
  char s21[] = "aiueokakikukeko";
  char s22[20];
  str_copy(s21, s22);
  printf("%i\n", str_eql(s21, s22));

  printf("No84\n");
  char s31[] = "ABC";
  char s32[] = "DEF";
  printf("%i\n", str_eql(str_append(s31, s32), "ABCDEF"));
  int i;
  for (i = 0; str_append(s31, s32)[i] != '\0'; i++) {
    printf("%c", str_append(s31, s32)[i]);
  }
  printf("\n");

  printf("No85\n");

  return 0;
}

