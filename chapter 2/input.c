#include <stdio.h>

int main(){

  int a, b;
  float c, d;

  scanf("%d", &a);
  printf("%d\n", a);

  scanf("%d", &b);
  printf("%d\n", b);

  printf("%d + %d = %d", a, b, a+b);


// take at the same time two value
  scanf("%f %f", &c, &d);
  printf("%f %f", c, d);

  return 0;
}
