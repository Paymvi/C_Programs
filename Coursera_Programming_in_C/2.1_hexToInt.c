//int atoi(s) /* convert s to integer */
//char s[];

// My solution
int htoi(char *s){
    int i, n;
  
    n = 0;
    for (i = 0; s[i] != '\0' ; ++i){
      	int extra = 0;
  
  		char s3[2];
  		s3[0] = tolower(s[i]);
  		s3[1] = '\0';
  
  
      	if (atoi(s3) == 0 && s3[0] != 0){ // if it is a letter
        	if (s3[0] == 'a'){
              extra = 10;
            } else if (s3[0] == 'b'){
              extra = 11;
            } else if (s3[0] == 'c'){
              extra = 12;
            } else if (s3[0] == 'd'){
              extra = 13;
            } else if (s3[0] == 'e'){
              extra = 14;
            } else if (s3[0] == 'f'){
              extra = 15;
            }
          	
        }
        n += (atoi(s3) + extra) * pow(16, strlen(s)-i-1);
    }
    return(n);
}

// AI's solution (I looked at after I tried doing it on my own)
int htoi(const char *s) {
    int n = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = tolower(s[i]);
        int digit;

        if (c >= '0' && c <= '9')
            digit = c - '0';
        else if (c >= 'a' && c <= 'f')
            digit = 10 + (c - 'a');
        else
            break; // or handle invalid character

        n = n * 16 + digit;
    }
    return n;
}


// Main function to test htoi
#include <stdio.h>
int main() {
  int htoi();
  printf("htoi('7ed7b') = %d\n", htoi("7ed7b"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}