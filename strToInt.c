#include <string.h>
#include <stdlib.h>
#include <math.h>

// "1234" --> 1234
/*
int string_to_number(const char *src) {
  int x;
  int y = 0;
  int len = strlen(src);
  int neg_flag = (src[0] != '-' ? 0: 1);
  for(int i=0+neg_flag; i<len; i++) {
    x = pow(10,len-1-i) * ((int)src[i]-48);
    y += x;
  }
  y = (neg_flag == 0 ? y : -y);
  printf("%d\n",y);
  return y;
}
*/

int string_to_number(const char *src) {
  int y = atoi(src);
  return y;
}
