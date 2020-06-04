#include <stdio.h>
int calculateSum(int age[]);
int main() {
    int result, age[] = {234, 55, 226, 3, 405, 18};
    // age array is passed to calculateSum()
    result = calculateSum(age); 
    printf("Result = %.2f", result);
    return 0;
}
int calculateSum(int age[]) {
  int sum = 0;
  for (int i = 0; i < 6; ++i) {
		sum += age[i];
  }
  return sum;
}
