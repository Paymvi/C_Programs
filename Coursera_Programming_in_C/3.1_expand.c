//void expand(s, t)
//char s[], t[];
void expand(char *s, char *t){
  int i, j;
  for(i=0, j=0; s[i]; i++) {
    
    char c = s[i];
    
    switch (c){
      case '\n':
        t[j++] = '\\';
        t[j++] = 'n';
      	break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
      	break;
      default:
         t[j] = s[i];
        
        
      j++;
    }
  }
  t[j] = '\0';
}






#include <stdio.h>
int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}