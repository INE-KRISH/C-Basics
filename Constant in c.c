#include <stdio.h>

int main() {
  const int minutesPerHour=60;
 // minutesPerHour = 80;  //this gives error as value of a constant is being given again.
  
  printf("%d", minutesPerHour);
  return 0;
}
