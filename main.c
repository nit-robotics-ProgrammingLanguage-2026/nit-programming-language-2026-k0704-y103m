#include <stdio.h>
 
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