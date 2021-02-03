#include <stdio.h>
#include <stdlib.h>

// 91, 文字列 s を全て大文字にして返す char *toUpper(char* s). printf("%s\n", toUpper("I am small letters, ain't I?")) は I AM SMALL LETTERS, AIN'T I? を印字する。

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

// アスキーコード表より、-32をすると大文字になるので、一文字ずつ引いて行った。

char *toUpper(char *s) {
  char *s_p = NULL;
  s_p = (char*)malloc(sizeof(char) * str_len(s));

  int i;
  for (i = 0; s[i] != '\0'; i++) {
    s_p[i] = s[i] - 32;
  }

  return s_p;
}

// 92, 文字列 s1 を整数に変換して返す関数 int str_to_int(char* s1). str_to_int("314")の戻り値は 314 になる。 atoi( ) 使わずに行ってみよう。

int power(int n, int m) {
  int ans = 1;
  int i;

  for (i = 0; i < m; i++) {
    ans *= n;
  }

  return ans;
}

// 文字列'0'は48なので、s[i]から48引いたものに、10の(str_len(s1)-i-1)乗をかけたものを足した。

int str_to_int(char *s1) {
  int ret_num = 0;
  int i;

  for (i = 0; s1[i] != '\0'; i++) {
    ret_num += (s1[i] - 48) * power(10, str_len(s1) - i - 1);
  }

  return ret_num;
}

// 93, 整数 n を文字列 s に変換する関数 char * int_to_str(int n). int_to_str(1023) で、関数内部に malloc( ) した文字列 s に "1023” を作り、s を返す。sprintf( ) の使用は禁止。 p94 も利用するとちょっと楽になる。

/*
  まず、引数nの桁数を返す関数int digit_numを作った。
  次に、char *int_to_strのなかで、mallocを使って、その桁より1大きい大きさのメモリを確保した。
  そして、for文を桁数だけ回して、s[i]にnを10の桁数-1乗すると、その整数の桁の数になる。
  アスキーコードで+48をするとchar型のその値となるので、+48をしてs[i]に入れた。
  最後にfor文の中でnを%桁数することで、次のループでは使った桁数を削除したnになる。
*/

int digit_num(int n) {
  if (n < 10) {
    return 1;
  }
  int i;
  for (i = 1; n / power(10, i) >= 1; i++) {
    ;
  }
  return i;
}

char *int_to_str(int n) {
  int digit = digit_num(n);
  char *s = NULL;
  s = (char*)malloc(sizeof(char) * digit + 1);

  int i;
  int divide_num;
  for (i = 0; i < digit; i++) {
    divide_num = power(10, digit_num(n) - 1);
    s[i] = (n / divide_num) + 48;
    n %= divide_num;
  }
  s[i] = '\0';

  return s;
}

// 94, 文字列 *s を逆にした文字列を返す関数 char* str_reverse(char* s). printf("%s\n", str_reverse("abcdef")) がプリントするのは "fedcba\n"

void str_copy(char *s1, char *s2) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    s2[i] = s1[i];
  }
  s2[i] = '\0';
}

/*
  sの大きさ分のメモリを確保して、作ったものにsをコピーした。
  次に、forで長さの半分だけ回して、sp[i]をsp[s_len - 1 -i]を入れ替えた。
*/

char *str_reverse(char *s) {
  int s_len = str_len(s);
  char *sp = NULL;
  sp = (char*)malloc(sizeof(char) * s_len);

  str_copy(s, sp);

  int i;
  char tmp;
  for (i = 0; i < s_len / 2; i++) {
    tmp = sp[i];
    sp[i] = sp[s_len - 1 - i];
    sp[s_len - 1 - i] = tmp;
  }

  return sp;
}

// 95, 

/**/

int main(void) {
  printf("No91\n");
  char s01[] = "abcdefg";
  char *s02;
  s02 = toUpper(s01);
  int i;
  for (i = 0; s02[i] != '\0'; i++) {
    printf("%c", s02[i]);
  }
  printf("\n");

  printf("No92\n");
  char s11[] = "12345";
  printf("%i\n", str_to_int(s11));

  printf("No93\n");
  int ahi = 1234;
  char *s21;
  s21 = int_to_str(ahi);
  for (i = 0; s21[i] != '\0'; i++) {
    printf("%c", s21[i]);
  }
  printf("\n");

  printf("No94\n");
  char s31[] = "12345";
  printf("%s\n", str_reverse(s31));

  printf("No95\n");
  
  return 0;
}

