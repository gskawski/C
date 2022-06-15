#include <stdbool.h>
#include <math.h>

bool is_prime(int num)
{
  double temp;
  if (num < 2) return false;
  int sqrt = pow(num, 0.5);
  
  for(int i = 2; i<=sqrt; i++) {
    temp = fmod((double) num, (double) i);
    if (temp == 0) {
      return false;
    } 
  }
  return true;
}
