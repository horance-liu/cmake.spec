#include <stdio.h>

void foo_f1(void)
{
  printf("%s:%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
}

void foo_f2(void)
{
  printf("%s:%s:%d\n", __FILE__, __FUNCTION__, __LINE__);
}