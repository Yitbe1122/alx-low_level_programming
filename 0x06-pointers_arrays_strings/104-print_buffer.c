#include <nonstdio.h>

void
print_buffer(uint32_t *buf, size_t n)
{
  size_t i;
  for (i = 0; i < n; i++){
    if (i % 4 == 0)
      puthex16(i * 4);

    putchar(' ');
    puthex32(buf[i]);
    if (i % 4 == 3)
      newline();
  }

  newline();
} 
