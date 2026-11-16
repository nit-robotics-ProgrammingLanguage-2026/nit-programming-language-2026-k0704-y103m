#include <stdio.h>
 
/* 引数として渡された値を累積加算して合計を返す関数 */
int accumulate_sum(int add_value) {
/* static変数は関数終了後も値が保持されるため、これまでの合計値を記憶し続ける */
static int total_sum = 0;
total_sum += add_value;
return total_sum;
}
 
int main(void) {
int input_count;
int result_sum = 0;
 
scanf("%d", &input_count);
 
/* 入力値が1未満または10より大きい場合はエラー表示して終了 */
if (input_count < 1 || input_count > 10) {
printf("NG");
return 0;
}
 
/* 1からinput_countまでの各値を2倍にして累積加算する */
for (int current_step = 1; current_step <= input_count; current_step++) {
result_sum = accumulate_sum(current_step * 2);
}
 
printf("%d", result_sum);
return 0;
}
