#include <stdio.h>

// 86, 文字列 s1 中に文字列 s2 が出現するかどうかを判定する関数 int str_search(char* s1, char* s2). s2 が s1 の何文字目から出現しているかを返す。見つからなかった時は -1 を返せ。 戻り値 が 0 の時は「s1 の先頭に s2 は見つかる」の意味になる。

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

/*
  まず、s1の方がs2より要素数が少なかったら-1を返す。
  次に、for文でiをs1_len-s2_len回回して、もしs1[i]とs[0]が等しければ
  次のfor文に入る。ここではjをs2[j]が'\0'になるまで回し、その中で
  もし、s1[i + j]とs2[j]が等しければis_okを1とすし、そうでなければ0とし、breakする。
  このforを抜けて、is_okが1ならその時のiを返す。
  最後までreturnに入らなかったら見つかっていないということなので-1を返す。
*/

int str_search(char *s1, char *s2) {
  int s1_len = str_len(s1);
  int s2_len = str_len(s2);
  if (s1_len < s2_len) {
    return -1;
  }

  int i, j;
  int is_ok = 0;
  for (i = 0; i <= s1_len - s2_len; i++) {
    if (s1[i] == s2[0]) {
      for (j = 1; s2[j] != '\0'; j++) {
        if (s1[i + j] == s2[j]) {
          is_ok = 1;
        } else {
          is_ok = 0;
          break;
        }
      }
      if (is_ok) {
        return i;
      }
    }
  }
  
  return -1;
}

// 87, 

/**/

// 88, 

/**/

// 89, 

/**/

// 90, 

/**/

int main(void) {
  printf("No86\n");
  char s01[] = "123";
  char s02[] = "23";
  char s03[] = "qqe123dc";
  char s04[] = "12scvc123sdc";
  printf("%i\n", str_search(s02, s01));
  printf("%i\n", str_search(s03, s01));
  printf("%i\n", str_search(s04, s01));

  printf("No87\n");

  printf("No88\n");

  printf("No89\n");

  printf("No90\n");
  
  return 0;
}

