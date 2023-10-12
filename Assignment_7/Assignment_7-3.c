#include <stdio.h>

int main() {
  double num[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double *p = num;

  printf("p is %p\n", (void *)p);
  printf("num is %p\n", (void *)num);
  printf("&num[0] is %p\n", (void *)&num[0]);
  printf("&num[1] is %p\n", (void *)&num[1]);
  printf("&num[2] is %p\n", (void *)&num[2]);

  printf("num[0] is %lf\n", *p);
  printf("num[1] is %lf\n", *(p + 1));
  printf("num[2] is %lf\n", *(p + 2));

  printf("num[0] is %lf\n", num[0]);
  printf("num[1] is %lf\n", num[1]);
  printf("num[2] is %lf\n", num[2]);

  return 0;
}
