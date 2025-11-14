//int lower(c) /* convert c to lower case; ASCII only */
//int c;
int lower(int c){
  return(c >= 'A' && c <= 'Z')? c + 'a' - 'A': c;
}





#include <stdio.h>
int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower M is %c\n", lower('M'));
}