#include <stdio.h>

int main() {
  // Declare an array of double values and initialize it.
  double num[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  // Declare a pointer to a double and initialize it to point to the first
  // element of array.
  double *p = num;
  // Print memory address stored in the 'p' pointer.
  printf("p is %p\n", (void *)p);
  // Print memory address of the 'num' array itself.
  printf("num is %p\n", (void *)num);
  // Print memory address of the first element of the 'num' array .
  printf("&num[0] is %p\n", (void *)&num[0]);
  // Print memory address of the second element of the 'num' array .
  printf("&num[1] is %p\n", (void *)&num[1]);
  // Print memory address of the third element of the 'num' array .
  printf("&num[2] is %p\n", (void *)&num[2]);
  // Print value pointed to by 'p'.
  printf("num[0] is %lf\n", *p);
  // Print value pointed to by 'p + 1'.
  printf("num[1] is %lf\n", *(p + 1));
  // Print value pointed to by 'p + 2'.
  printf("num[2] is %lf\n", *(p + 2));
  // Print value of the first element of the 'num' array directly.
  printf("num[0] is %lf\n", num[0]);
  // Print value of the second element of the 'num' array directly.
  printf("num[1] is %lf\n", num[1]);
  // Print value of the third element of the 'num' array directly.
  printf("num[2] is %lf\n", num[2]);

  return 0;
}
