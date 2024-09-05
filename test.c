#include <stdio.h>

int main() {
  int value = 0x12345678;
  unsigned char *ptr = (unsigned char *)&value;
  for (int i = 0; i < sizeof(int); i++) {
    printf("Byte %d: 0x%02x\n", i, ptr[i]);
  }
  return 0;
}
