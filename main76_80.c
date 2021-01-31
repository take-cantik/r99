#include <stdio.h>

// 76, 上で作った乱数配列 a[ ] を要素の大きさ順に並べ替え、b[ ] にセットする関数 void sort(int a[ ], int b[ ], int n). (2021-01-16 [追記] hkimura の書き方悪かったか。b[0] には配列 a の一番小さい要素が来るように。)

/*
  配列aの中身をそのまま配列bへうつす関数、clone_arrayを作り、
  その後、bをiで回し、その中でjをi+1から回して、b[i] > b[j]の時にそれぞれを入れ替えた。
*/

void clone_array(int a[], int b[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    b[i] = a[i];
  }
}

void sort(int a[], int b[], int n) {
  clone_array(a, b, n);

  int i, j, tmp;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (b[i] > b[j]) {
        tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
      }
    }
  }
}

// 77, 上で並べ替えた配列 b[ ] が正しく要素順になっているかを確認する関数 int is_sorted(int b[ ], int n).

// for文でb[i]とb[i+1]を比べて、もしb[i]の方が大きかったら0を返し、for文を抜けたら1を返す。

int is_sorted(int b[], int n) {
  int i;
  for (i = 0; i < n - 1; i++) {
    if (b[i] > b[i + 1]) {
      return 0;
    }
  }
  return 1;
}

// 78, 文字列 s が空文字列 "" かどうかを判定する関数 int is_empty(char* s).

// 一番最初の要素が"\0"だったら1、違ったら0を返した。

int is_empty(char *s) {
  return s[0] == '\0';
}

// 79, 文字列 s の長さを返す関数 int str_len(char* s).

// for文でs[i]が'\0'出なくなるまで回して、最後にiを返した。

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

// 80, 文字列 s に含まれる文字 c の数を返す関数 int count_chars(char* s, char c).

// sを'\0'になるまで回して、その中でs[i]とcが同じならcntを増やしていき、cntを返した。

int count_chars(char *s, char c) {
  int i;
  int cnt = 0;

  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      cnt++;
    }
  }

  return cnt;
}

int main(void) {
  printf("No76\n");
  int a[10] = {4, 5, 6, 2, 3, 9, 8, 1, 7, 0};
  int b[10];

  sort(a, b, 10);
  int i;
  printf("{");
  for (i = 0; i < 9; i++) {
    printf("%i ", a[i]);
  }
  printf("%i}\n", a[9]);

  int j;
  printf("{");
  for (j = 0; j < 9; j++) {
    printf("%i ", b[j]);
  }
  printf("%i}\n", b[9]);

  printf("No77\n");
  printf("%i\n", is_sorted(b, 10));

  printf("No78\n");
  char ahi[] = "";
  char ahiahi[] = "ahiahi";
  printf("ahi: %i, ahiahi: %i\n", is_empty(ahi), is_empty(ahiahi));

  printf("No79\n");
  printf("ahi: %i, ahiahi: %i\n", str_len(ahi), str_len(ahiahi));

  printf("No80\n");
  printf("ahi, a: %i\n", count_chars(ahi, 'a'));
  printf("ahiahi, a: %i\n", count_chars(ahiahi, 'a'));
  char words[] = "mikitakeru";
  printf("mikitakeru, i: %i\n", count_chars(words, 'i'));
  
  return 0;
}

