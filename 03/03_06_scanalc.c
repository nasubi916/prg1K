#include <stdio.h>

int main(int argc, char *argv[]) {
  int a;
  int b;
  printf("a b? ");
  scanf("%d %d", &a,&b);
  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d - %d = %d\n",a,b,a-b);
  printf("%d * %d = %d\n",a,b,a*b);
  printf("%d / %d = %d\n",a,b,a/b);
  return 0;
}