#include <stdio.h>
#include <stdlib.h>

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

// 87, 文字列 s1 の n 文字目からの m 文字を削除する char* str_remove(char* s1, int n, int m). 戻り値は s1. s1="0123456789" として、 str_remove(s1, 5,3) の後、s1 は "0123489" になる。 s1 を書き換えない、安全なバージョンにも挑戦しよう。

/*
  まずmallocでs1の長さ分のメモリを確保する。
  次に、n未満の要素を代入する。
  その後、s1のn+m番目から代入していく。
*/

char *str_remove(char *s1, int n, int m) {
  int s1_len = str_len(s1);
  char *s_p = NULL;
  s_p = (char*)malloc(sizeof(char) * s1_len);

  int i;
  for (i = 0; i < n; i++) {
    s_p[i] = s1[i];
  }
  for (i = n; s1[i + m] != '\0'; i++) {
    s_p[i] = s1[i + m];
  }
  s_p[i] = '\0';

  free(s_p);
  return s_p;
}

// 88, 文字列 s1 中に文字列 s2 が見つかる場合、s1 から s2 を削除し、s1 ポインタを返す。 char* str_remove_str(char s1[ ], char s2[ ]). 見つからない時？なにも削除しないよ。

/**/

char *str_remove_str(char s1[], char s2[]) {
  if (str_search()) {

  }
}

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
  char s11[] = "0123456789";
  char *s12_p;
  s12_p = str_remove(s11, 5, 3);
  int i;
  for (i = 0; s12_p[i] != '\0'; i++) {
    printf("%c", s12_p[i]);
  }
  printf("\n");

  printf("No88\n");

  printf("No89\n");

  printf("No90\n");
  
  return 0;
}

