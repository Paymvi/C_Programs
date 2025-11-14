

// Write a function itob(n, s) which converts the unsigned integer n into a binary (base 2) character representation in s. Write itoh, which converts an integer to hexadecimal representation. You can assume that the s variable contains enough space. Make sure to properly terminate s with the end-of-string marker '\0' before returning.
// You can use reverse(s) to reverse a string - make sure you pass a character array and not a string constant to reverse.


//void itob(n, s)
//int n;
//char s[];
void itob(int n, char s[]){
  
  	char binary[40];
  	int index = 0;
  	while (n > 0){
    	binary[index++] = '0' + (n % 2);
      	n /= 2;
    }
  	binary[index++] = '\0';
  
  	void reverse();
    reverse(binary);
  
  	int j;
  	for (j = 0; j < index; j++){
    	s[j] = binary[j];
    }
}
//void itoh(n, s)
//int n;
//char s[];
void itoh(int n, char s[]){
  	char hex[40];
  	int index = 0;
  	while (n > 0){
      
      	int rem = n % 16;
      	char c = '0';
          if (rem >= 10){
            if (rem == 10){
              c = 'a';
            } else if (rem == 11){
              c = 'b';
            } else if (rem == 12){
              c = 'c';
            } else if (rem == 13){
              c = 'd';
            } else if (rem == 14){
              c = 'e';
            } else if (rem == 15){
              c = 'f';
            }
        } else {
          c = '0' + rem;
        }
      	
    	hex[index++] = c;
      	n /= 16;
    }
  	hex[index++] = '\0';
  
  	void reverse();
    reverse(hex);
  
  	int j;
  	for (j = 0; j < index; j++){
    	s[j] = hex[j];
    }
}








#include <stdio.h>
#include <string.h>
int main() {
  char s[1000];
  void itob(), itoh(), reverse();

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}
