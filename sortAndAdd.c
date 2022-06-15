#include <stdio.h>      /* printf */
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int sum(int* numbers, int numbersCount)
{
  int sum = 0;
  qsort( numbers, numbersCount, sizeof(int), compare);
  for(int i = 1; i<numbersCount-1; i++) {
    sum += numbers[i];
  }
  printf("%d\n",sum);
  return sum;
}
