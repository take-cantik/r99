# R99
1 "hello, robocar!" をプリントする関数 void hello_p(void).

2 整数を引数にとり、それに1足した数を戻り値とする関数 int add1(int x).

3 整数ひとつをキーボードから読み、 それに 1 を足した数をプリントする関数 void add1_p(void).

4 円の半径（整数）を引数にとり、 その円の面積（浮動小数点数）を戻り値とする関数 float en(int r).

5 円の半径（整数）をキーボードから読み、 その円の面積（浮動小数点数）をプリントする関数 void en_p(void).

6 整数 x を引数にとり、それが偶数だったら 1、 奇数だったら 0 を返す関数 int even(int x).

7 キーボードから整数ひとつを入力し、それが偶数だったら "偶数です"、 奇数だったら "奇数です" とプリントする関数 void even_p(void).

8 整数 x, y を引数にとり、それらを足した数を戻り値とする関数 int add2(int x, int y).

9 整数 x, y を引数にとり、それらを足した数をプリントする関数 void add2_p(int x, int y).

10 整数 x, y を引数にとり、それらの和、差、積、整数商をプリントする関数 void wa_sa_seki_sho_p(int x, int y).

11 整数二つを引数とし、第 1 引数が第 2 引数で割り切れたら 1、 そうでない時 0 を返す関数 int divide(int x, int y).

12 キーボードから整数 x,y を入力し、 x が y で割り切れたら "割り切る"、 そうでない時、"割り切れない" をプリントする関数 void divide_p(void).

13 整数 n の絶対値を返す関数 int abs(int n).

14 整数 n の 2 乗を戻り値とする関数 int square(int n).

15 整数 n の 3 乗を戻り値とする関数 int triple(int n).

16 整数 n の m 乗を返す関数 int power(int n, int m). C言語では nm を n^m では計算できない。

17 彼・彼女の年齢を y とする。彼・彼女がティーンエイジャーだったら 真、そうでなければ偽を返す関数 int teenage(int y).

18 整数 x, y を引数にとり、大きい方の整数を戻り値とする関数 int max2(int x, int y).

19 整数 x, y を引数にとり、大きい方の整数をプリントする関数 void max_p(int x, int y).

20 整数三つを引数にとり、もっとも大きい整数を戻り値とする関数 int max3(int x, int y, int z).

21 整数 4 つを引数にとり、もっとも大きい整数を戻り値とする関数 int max4(int x, int y, int z, int w).

22 3つの整数を引数とし、 それらの長さを各辺とする三角形がありうるかどうかを判定する関数 int triangle(int x, int y, int z). ヒント：一番長い辺の長さ < 短い辺二つの長さの和

23 3つの整数を引数とし、 それらの長さを各辺とする直角三角形がありうるかどうかを判定する関数 int right_angle(int x, int y, int z). ヒント:前問の回答

24 整数 n から m までの総和を求める関数 int sum(int n, int m).

25 正の整数 n から m までの整数の積を求める関数 int product(int n, int m).

26 整数 n の各桁の総和を返す関数 int sum_of_digits(int n). sum_of_digits(12345) の戻り値は 15 。

27 整数 n を引数とし、それが 3 の倍数だったら 1、 5 の倍数だったら 2、 3 の倍数でもあり、かつ、5 の倍数でもあったら 3、 いずれでもなかったら 0 を返す関数 int fz(int n).

28 整数一つを引数とし、その約数を全てプリントする関数 void divisors_p(int n).

29 整数一つを引数とし、その約数の合計を戻り値とする関数 int sum_of_divisors(int n).

30 n 以下の素数(nは整数)は何個あるかを戻り値とする関数 int primes(int n). primes(10000) の戻り値はおそらく 1229。

31 n 以下の整数のうち、もっとも約数の多い数を返す関数 int most_divisors(int n). 前問に同じ。most_divisors(1000)の戻り値は 840.

32 整数一つを引数とし、 その数が素数だったら1、素数でなかったら 0 を返す関数 int is_prime(int n). 約数が何個あるかを数えて素数判定するのは遅い。 速い素数判定を望む。repl.it で is_prime(2147483549) が3秒以内で 1 を返せば速いと認める。 回答には次で得られる計算時間を入れること。

33 整数 n が平方数であるかどうかを判定する関数 int is_square(int n). 237169 は平方数である。

34 整数 n が立方数であるかどうかを判定する関数 int is_cubic(int n). 9663597 は立方数である。

35 整数 n が 二つの整数の2乗の和として表されるかどうかを判定する関数 int is_squeare_sum(int n). is_square_sum(30505) は 1 を返す。 30505 = 1232+1242.

36 整数一 つを引数とし、その数が完全数かどうかを判定する関数 int is_perfect(int n).

37 西暦 year を引数にとり昭和、平成、令和の和暦をプリントする関数 void j_era(int year). j_era(2020)は "令和2年" をプリントする。

38 西暦 year を引数にとり、閏年であれば 1、そうでなければ 0 を返す関数。 西暦が 4 で割り切れれば閏年。ただし、100 で割り切れる時は平年。 ただし、400 で割り切れる時は閏年。 int leap(int year).

39 hh 時 mm 分 ss 秒の hh, mm, ss を引数にとり、0 時 0 分 0 秒からの通 算秒に変換した整数を戻り値とする関数 int time_to_int(int h, int m, int s).

40 時刻 h1:m1:s1 と 時刻 h2:m2:s2 の間の秒数を整数で返す関数 int sec_between(int h1, int m1, int s1, int h2, int m2, int s2).

41 平年の1 月 1 日から同年 mm 月 dd 日までの日数を返す関数 int days(int mm, int dd).

42 y1 年 m1 月 d1 日から y2 年 m2 月 d2 月までの日数を返す関数 int days_between(int y1, int m1, int d1, int y2, int m2, int m2). 自分は今日まで何日生きてきましたか？

43 時刻 h1:m1:s1 と 時刻 h2:m2:s2 をそれぞれ文字列として受け取り、 それらの時間差を文字列で戻す関数 char * times_between_string(char time1[ ], char time2[ ]).

44 3 桁の整数の桁を入れ替えた整数を返す関数 int rev3(int n). 例えば rev(314) の戻り値は 413 になる。310 は 13 だな。

45 rev3(n) が元の整数 n と等しくなる3桁の整数は何個あるかを返す関数 int how_many_rev3(void).

46 1~20 の各整数についてその2乗をプリントする関数 void squares_p(void).

47 整数 n のルートを超えない最大の整数を返す関数 int sqrt_int(int n). sqrt_int(24) の戻り値は4, sqrt_int(25)の戻り値は5 を期待している。 ヒントは前問。ライブラリ sqrt を使うことは反則とする。

48 float x を四捨五入した int を返す関数 int f_to_i(float x). ヒント: 浮動小数点数 x の整数部分は (int)x で得られる。 かっこの付け方が妙だけど、こう書く。(int)3.5 は 3 だよ。4にならない。

49 float x を小数点第 2 位で四捨五入した float を返す関数 float f_to_f1(float x). f_to_f1(3.14159265) の戻り値は 3.100000 になる。

50 float x を小数点第 n+1 位で四捨五入した float を返す関数 float f_to_f(float x, int n). f_to_f(3.14159265, 4) の戻り値は 3.141600 になる。

51 関数 long random(void) を呼ぶとすごく大きい正の整数乱数が返ってくる。 random( ) を利用し、0 以上 n 未満の正の整数乱数を返す関数 int my_rand(int n).
* 注意1, R99 は #include <stdlib.h> が前提です。
* 注意2, #include <unistd.h> を加えた後、プログラムで my_rand( ) 呼ぶ前のどこかで一度（だいたいは main( )の最初で） 、
srandom(getpid( ));
ってやると、乱数がバラバラになります（変な日本語だけど、 これやらないといつも同じ順で乱数が出てくる）

52 0.0 ≤ r < 1.0 の浮動小数点数乱数を返す関数 float randf(void).

53 n ≤ r < m の整数乱数を返す関数 int rand_int(int n, int m).

54 上の randf( ) を呼び出して、2次元乱数 [x, y] (0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0) を n 個プリントする関数 void randf_p(int n).

55 上の randf( ) を応用し、円周率 pi を求める関数 float pi(int n). 2次元乱数 [x,y]、 (0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0) を n = 1,000 個発生し、 x^2 + y^2 ≤ 1 となるものを数える。多分それは 785 近辺の数になる。 とすると円周率 pi は (785/1000)*4 と推定できる。 n を増やすと pi の精度は上がるはず。

56 重要: repl.it で回答するため、以下、61 番までは integers.txt を numbers.txt に読み替えた上、week-10 の授業資料を参照してください。 ファイル integers.txt をダウンロードし、適当な場所にセーブしてください。以下、61番まではこのファイルを使います。 ファイル "integers.txt" には一行にひとつ、 整数が書き込まれている。 そのファイルの1行目の数を返す関数 int head(void).

57 ファイル "integers.txt" が何行あるかを返す関数 int lines(void).

58 ファイル "integers.txt" の n 行目の数字を返す関数 int nth(int n).

59 ファイル "integers.txt" の最初の十行に含まれる整数の総和を返す関数 int sum10(void).

60 ファイル "integers.txt" の最初の n 行に含まれる整数の総和を返す関数 int sum_n(int n).

61 ファイル "integers.txt"の最後の n 行に含まれる整数の総和を返す関数 int sum_tail(int n).

62 ファイル名を文字列 fname として引数にとり、そのファイルの中身を 表示する関数 void cat(char *fname)

63 ファイル名を文字列 fname として引数にとり、そのファイルの中身を 行番号つきで表示する関数 void n_cat(char *fname)

64 n 以上 m 未満の奇数の和を求める関数 int sum_odds(int n, int m). sum_odds(100, 200) は 7500 を返す。

65 n よりも大きい完全数はなにか？を求める関数 int next_perfect(int n). next_perfect(28) はきっと 496 だ。 これまでにR99で作成した関数を駆使しなさい。

66 n 未満の素数の和を求める関数 int sum_primes_under(int n). sum_primes_under(1000) は 76127 のはず。

67 関数 int factorial(int n) を定義せよ。 factorial(5) は 5! の値を戻り値とする。 一般に factoria(n) = n * factorial(n-1). 0! は 1 だよ。

68 0!, 1!, 2! ... を次々に計算していき、 n! > m となる最小の n を求める関数 int factorial_over(int m). factorial_over(2000000) の戻り値は

69 0!, 1!, 2! ... を次々に計算していき、 n! < 0 となる最小の n を求める関数 int factorial_overflow(void). C 言語ではこういうことが起こる。int が有限だからね。

70 フィボナッチ数列を計算する関数 int fibo(int n) を定義せよ。 fibo(0) = 0, fibo(1) = 1, fibo(2) = 1 で、 一般にfibo(n) = fibo(n-1) + fibo(n-2) だ。

71 fibo(n) が最初に n を超える n はいくらかを求める関数 int fibo_over(n). fibo_over(20000) の戻り値はきっと 23 だ。

72 n 以上 m 未満となるフィボナッチ数の総和を返す関数 int sum_of_fibo_between(int n, int m). sum_of_fibo_between(10000,100000) の戻り値は 178700 よりちょっと大きい。

73 サイズ n の整数配列 a[ ] に 0~99 の乱数をセットする関数 void init_randoms_99(int a[ ] , int n).

74 上で作った乱数配列 a[ ] 中にみつからない 0~99 の数をプリントする関数 void find_not(int a[ ], int n).

75 上で作った乱数配列 a[ ] ( サイズは n) 中に一番たくさん重複して現れる数を返す関数 int find_max_dupli(int a[ ], int n).

76 上で作った乱数配列 a[ ] を要素の大きさ順に並べ替え、b[ ] にセットする関数 void sort(int a[ ], int b[ ], int n).

77 上で並べ替えた配列 b[ ] が正しく要素順になっているかを確認する関数 int is_sorted(int b[ ], int n).

78 文字列 s が空文字列 "" かどうかを判定する関数 int is_empty(char* s).

79 文字列 s の長さを返す関数 int str_len(char* s).

80 文字列 s に含まれる文字 c の数を返す関数 int count_chars(char* s, char c).

81 文字列 s1 と文字列 s2 が等しいかどうかを判定する関数 int str_eql(char* s1, char* s2).

82 二つの文字列 s1, s2 の先頭の n 文字が等しいかどうかを判定する関数 int str_eql_n(char* s1, char*s2, int n).

83 文字列 s1 を文字列 s2 にコピーする関数 void str_copy(char* s1, char* s2). s2 は s1 をコピーするに十分な長さがあると仮定してよい。 以下同様。 str_copy(s1,s2) の実行後、str_sql(s1, s2) が真になること。

84 文字列 s1 の後ろに文字列 s2 を連結する関数 char* str_append(char* s1, char* s2). str_append("abc", "def") の実行後、str_eql(s1, "abcdef")は真になる。

85 文字列 s1 の n 文字目からの m 文字を s2 の先頭にコピーする関数 char * str_take(char* s1, int n, int m, char* s2). 戻り値は s2. str_take("0123456", 1, 3, s2) の呼び出しのあと、s2 は "123" となる。

86 文字列 s1 中に文字列 s2 が出現するかどうかを判定する関数 int str_search(char* s1, char* s2). s2 が s1 の何文字目から出現しているかを返す。見つからなかった時は -1 を返せ。 戻り値 が 0 の時は「s1 の先頭に s2 は見つかる」の意味になる。

87 文字列 s1 の n 文字目からの m 文字を削除する char* str_remove(char* s1, int n, int m). 戻り値は s1. s1="0123456789" として、 str_remove(s1, 5,3) の後、s1 は "0123489" になる。

88 文字列 s1 中に文字列 s2 が見つかる場合、s1 から s2 を削除し、s1 ポインタを返す。 char* str_remove_str(char s1[ ], char s2[ ]). 見つからない時？なにも削除しないよ。

89 文字列 s1 の n 文字目に文字列 s2 を挿入する char* str_insert(char* s1, int n, char* s2). 戻り値は挿入後の文字列（ポインタ）。 printf("%s\n", str_insert("012345", 3, "abc")) は 0123abc45 を印字する。

90 文字列 s1 中に現れる文字列 s2 を文字列 s3 で置き換える char* str_subst(char* s1, char* s2, char* s3). 戻り値は置き換え後の文字列（ポインタ）。

91 文字列 s を全て大文字にして返す char *toUpper(char* s). printf("%s\n", toUpper("I am small letters, ain't I?")) は I AM SMALL LETTERS, AIN'T I? を印字する。

92 文字列 s1 を整数に変換して返す関数 int str_to_int(char* s1). str_to_int("314")の戻り値は 214 になる。

93 整数 n を文字列 s に変換する関数 void int_to_str(int n, char* s). int_to_str(1023, s) の呼び出しによって 文字列 "1023" が s にコピーされる。

94 文字列 *s を逆にした文字列を返す関数 char* str_reverse(char* s). printf("%s\n", str_reverse("abcdef")) がプリントするのは "fedcba\n"

95 文字列 *s1 が日本語文字列の場合、s1 を逆順にした文字列を返す関数 char *jstr_reverse(char* s1)). printf("%s\n", jstr_reverse("おはようございます。")) がプリントするのは "。すまいざごうよはお\n"

96 文字列一つを引数にとり、 それが "コロナ"だったら "no thanks."、 "ビール" だったら "乾杯！"、 "単位" だったら "よかったね。"、 それ以外だったら "なんくるないさ" を表示する関数 void greet(char* s).

97 1000000 未満の整数で、平方数かつ立方数でもある最大の数を探す関数。 int square_cubic(int n). square_cubic(1000000) の戻り値はきっと、531***.

98 int * shuffle(int n) を定義せよ。戻り値は 0~n-1 の n 個の正整数が重複なく順番バラバラに入った配列。完成するとビンゴゲームに使えるぞ。関数名を bingo( ) にしようか。

99 10 までの整数をその約数の数で分類すると、 1-(1), 2-(2,3,5,7),3-(4,9), 4-(6,8,10) となって グループ 2 が最もたくさんのメンバーを持ち、 そのメンバーの和は 17 になる。 同様に 1000までの整数を分類し、もっともたくさんのメンバーを持つグループを特定し、総和せよ。多分その数は 143*** くらいになる。

100 216を超えない最大の素数は何か？ それは 65521.

101 231を超えない最大の素数は何か？ それはきっと 2147483647.

102 4 番目までの素数を足すと 2 + 3 + 5 + 7 = 17. 1000 番目までの素数の和を求めなさい。 それはたぶん 3682913.

103 1000 未満の素数 p1, p2, p3 で、 p12 + p22 = p32 を満たすものはあるでしょうか？

104 n を整数とする。factorial(n) + 2 が立方数となるような n を全て求めよ。

105 3 で割って1余り、5 で割って2余り、7 で割って 3 余る正の整数の最小のものはなにか？ （孫子の問題）

106 2520 は 1 から 10 の数字のすべての整数で割り切れる最小の整数である。 1 から 20 までの整数すべてで割り切れる最小の整数は何か？

107 整数 n を文字列に変換し、戻り値とする関数 char* int_to_str(int n).

108 左右どちらから読んでも同じ値になる数を回文数という。 2桁の数の積で表される回文数のうち、最大のものは 9009 = 91 × 99 である。 3桁の数の積で表される回文数の最大値を求めよ。

109 600851475143 の素因数のうち最大のものを求めよ。

110 n * m と同じ計算をする関数 int stoic_times(int n, int m) を定義せよ。 stoic_times( ) ほか、補助関数中でも * を使うのは反則とする。

111 ++ と -- のみを使い、x + y と同じ計算をする関数 int stoic_add(int x, int y) を定義せよ。

