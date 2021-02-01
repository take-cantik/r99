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


// もし、s1にs2が含まれていれば、s1[str_index]に、s1のs2文をプラスしたものをs1の続きに代入させる。


char *str_remove_str(char s1[], char s2[]) {
  int str_index = str_search(s1, s2);
  if (str_index != -1) {
    int i;
    for (i = str_index; s1[i] != '\0'; i++) {
      s1[i] = s1[i + str_len(s2) - 1];
    }
    s1[i] = '\0';
  }

  return s1;
}

// 89, 文字列 s1 の n 文字目に文字列 s2 を挿入する char* str_insert(char* s1, int n, char* s2). 戻り値は挿入後の文字列（ポインタ）。 printf("%s\n", str_insert("012345", 3, "abc")) は 0123abc45 を印字する。

/*
  まず、s1とs2の長さの和のメモリを確保した。
  次に、n未満までstr_pに格納し、その後、s2をその後に格納した。
  最後に、残りのs1をs2をだいにゅうした後に格納した。
*/

char *str_insert(char *s1, int n, char *s2) {
  int s_len = str_len(s1) + str_len(s2);
  char *str_p = NULL;
  str_p = (char*)malloc(sizeof(char) * s_len);

  int i;
  for (i = 0; i < n; i++) {
    str_p[i] = s1[i];
  }
  for (i = 0; s2[i] != '\0'; i++) {
    str_p[i + n] = s2[i];
  }
  for (i = n; s1[i] != '\0'; i++) {
    str_p[i + str_len(s2)] = s1[i];
  }
  str_p[i + str_len(s2)] = '\0';

  free(str_p);
  return str_p;
}

// 90, 文字列 s1 中に現れる文字列 s2 を文字列 s3 で置き換える char* str_subst(char* s1, char* s2, char* s3). 戻り値は置き換え後の文字列（ポインタ）。

void str_copy(char *s1, char *s2) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    s2[i] = s1[i];
  }
  s2[i] = '\0';
}

/*
  まず、s1とs3の配列の大きさの和分のメモリの確保をする。
  次に、s2をs1のコピーから消して、そこにs3を挿入した。
*/

char *str_subst(char *s1, char *s2, char *s3) {
  int s_len = str_len(s1) + str_len(s3);
  char *strp = NULL;
  strp = (char*)malloc(sizeof(char) * s_len);

  str_copy(s1, strp);
  int s_index = str_search(strp, s2);
  strp = str_remove_str(strp, s2);
  strp = str_insert(strp, s_index, s3);

  return strp;
}

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
  char s21[] = "1234567890";
  char s22[] = "456";
  char *s23_p;
  s23_p = str_remove_str(s21, s22);
  for (i = 0; s23_p[i] != '\0'; i++) {
    printf("%c", s23_p[i]);
  }
  printf("\n");

  printf("No89\n");
  char s32[] = "0123456789";
  char *s31_p;
  s31_p = str_insert(s32, 3, s22);
  for (i = 0; s31_p[i] != '\0'; i++) {
    printf("%c", s31_p[i]);
  }
  printf("\n");


  printf("No90\n");
  char s41[] = "456";
  char s42[] = "abc";
  char *s43_p;
  s43_p = str_subst(s32, s41, s42);
  for (i = 0; s43_p[i] != '\0'; i++) {
    printf("%c", s43_p[i]);
  }
  printf("\n");
  
  return 0;
}

