#include <stdio.h>
// ビット演算のサンプルプログラム

int main()
{
  int a, b;
  a = 38;
  b = 49;
  printf("%d & %d = %d\n", a, b, a & b); // 100110 (38) & 110001 (49) = 100000 (32)
  printf("%d | %d = %d\n", a, b, a | b); // 100110 (38) | 110001 (49) = 110111 (55)
  printf("~%d = %d\n", a, ~a);           // 最上位ビットが 1 になるため マイナスの値に
  printf("%d ^ %d = %d\n", a, b, a ^ b); // 100110 (38) ^ 110001 (49) = 010111 (23)
  printf("%d << 1 = %d\n", a, a << 1);   // 100110 (38) << 1 = 1001100 (76)
  printf("%d << 2 = %d\n", a, a << 2);   // 100110 (38) << 2 = 10011000 (152)
  printf("%d << 3 = %d\n", a, a << 3);   // 100110 (38) << 3 = 100110000 (304)
  return 0;
}