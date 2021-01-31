#include <stdio.h>

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

// 83, 

/**/

// 84, 

/**/

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

  printf("No84\n");

  printf("No85\n");
  
  return 0;
}

