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

// 82, 

/**/

// 83, 

/**/

// 84, 

/**/

// 85, 

/**/

int main(void) {
  printf("No81\n");
  char str1[] = "ahiahi";
  char str2[] = "ahiahi";
  printf("%i\n", str_eql(str1, str2));

  printf("No82\n");

  printf("No83\n");

  printf("No84\n");

  printf("No85\n");
  
  return 0;
}

