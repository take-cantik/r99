#include <stdio.h>
#include <stdlib.h>

// 96, 文字列一つを引数にとり、 それが "コロナ"だったら "no thanks."、 "ビール" だったら "乾杯！"、 "単位" だったら "よかったね。"、 それ以外だったら "なんくるないさ" を表示する関数 void greet(char* s).

int str_len(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    ;
  }

  return i;
}

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

/*
  str_eql関数を用いて、if文を使ってある特定の単語で、その単語に対応するものを出力した。
  また、俺以外の時は、elseを使って、なんくるないさを出力した。
*/

void greet(char *s) {
  if (str_eql(s, "コロナ")) {
    printf("no thanks.\n");
  } else if (str_eql(s, "ビール")) {
    printf("乾杯！\n");
  } else if (str_eql(s, "単位")) {
    printf("よかったね。\n");
  } else {
    printf("なんくるないさ\n");
  }
}

// 97, 1000000 未満の整数で、平方数かつ立方数でもある最大の数を探す関数。 int square_cubic(int n). square_cubic(1000000) の戻り値はきっと、531***.

int is_square(int n) {
  int i;
for (i = 1; i * i < n; i++) {
  ;
}
return i * i == n;
}

int is_cubic(int n) {
int i;
for (i = 1; i * i * i < n; i++) {
  ;
}
return i * i * i == n;
}

/*
for文で、iがn未満から1になる前までどんどん減らして行って、
iがis_squareとis_cubicの両方に正しかったら、そのiを返して、
最後までそこを通らなかったら答えは1なので、1になっているiを返した。
*/

int square_cubic(int n) {
int i;
for (i = n - 1; i > 1; i--) {
  if (is_square(i) && is_cubic(i)) {
    return i;
  }
}

return i;
}

// 98, int * shuffle(int n) を定義せよ。戻り値は 0~n-1 の n 個の正整数が重複なく順番バラバラに入った配列。完成するとビンゴゲームに使えるぞ。関数名を bingo( ) にしようか。

int my_rand(int n) {
return random() % n;
}

/*
  nの大きさのint型の大きさのメモリを確保して、そこに0~n未満までを順に初期値として代入した。
  次に、for文のなかでmy_randを使って、i番目とランダムの番号の要素を入れ替えることで、
  重複しないランダムの数を作ることができる。
*/

int *shuffle(int n) {
int *np = NULL;
np = (int*)malloc(sizeof(int) * n);

int i;
for (i = 0; i < n; i++) {
  np[i] = i;
}

int ran_num, tmp;
for (i = 0; i < n; i++) {
    ran_num = my_rand(n);
    tmp = np[i];
    np[i] = np[ran_num];
    np[ran_num] = tmp;
  }

  return np;
}

// 99, 10 までの整数をその約数の数で分類すると、 1-(1), 2-(2,3,5,7),3-(4,9), 4-(6,8,10) となって グループ 2 が最もたくさんのメンバーを持ち、 そのメンバーの和は 17 になる。 同様に 1000までの整数を分類し、もっともたくさんのメンバーを持つグループを特定し、総和せよ。多分その数は 143*** くらいになる。

int num_of_divisors(int n) {
  int i;
  int count = 0;

  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }

  return count;
}

int sum_of_list(int *num, int n) {
  int i;
  int sum = 0;

  for (i = 0; i < n; i++) {
    sum += num[i];
  }

  return sum;
}

int *largest_num_index(int *num, int n) {
  int i, index;
  int most_num = 0;
  for (i = 0; i < n; i++) {
    if (most_num < num[i]) {
      most_num = num[i];
      index = i;
    }
  }
  
  int *ret;
  ret[0] = index;
  ret[1] = most_num;

  return ret;
}

/**/

int sum_of_most_num_with_same_num_of_divisors(int n) {
  printf("1\n");
  int **n_p;
  n_p = malloc(sizeof(int) * (n + 1));
  int i;
  for (i = 0; i <= n; i++) {
    n_p[i] = (int*)malloc(sizeof(int) * (n + 1));
  }
  printf("2\n");
  for (i = 0; i <= n; i++) {
    n_p[0][i] = 0;
  }

  for (i = 1; i <= n; i++) {
    printf("n_p[0][%i] = %i\n", i, n_p[0][i]);
    n_p[i][n_p[0][i]] = num_of_divisors(i);
    n_p[0][i] += 1;
  }
  printf("3\n");

  int *num;
  num = largest_num_index(n_p[0], n);

  printf("4\n");
  return sum_of_list(n_p[num[0]], num[1]);
}

// 100, 

/**/

int main(void) {
  printf("No96\n");
  greet("コロナ");
  greet("ビール");
  greet("単位");
  greet("あひあひ");

  printf("No97\n");
  printf("%i\n", square_cubic(1000000));

  printf("No98\n");
  int *n01 = shuffle(100);
  int i;
  for (i = 0; i < 100; i++) {
    printf("%i, ", n01[i]);
  }
  printf("\n");

  printf("No99\n");
  printf("%i\n", sum_of_most_num_with_same_num_of_divisors(1000));

  printf("No100\n");

  return 0;
}

