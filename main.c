
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char * strupper(char * sp) {
  char * start = sp;
  while (*sp != '\0') {
    *sp = toupper(*sp);
    sp++;
  }

  return start;
}

int main(int argc, char const * argv[]) {
  printf("PleasantLeafyInstitutions\n");

  char confirm[8];
  printf("Yes or No: ");
  fflush(stdout);

//  while (getchar() != '\n');
  scanf("%s", confirm);
  printf("> %s\n", confirm);
//  printf("< %s\n", strupper(confirm));

  if (strncmp("YES", strupper(confirm), 3) == 0) {
    printf("1 %s\n", confirm);
    puts("Yay :-D");
  }
  else if (strncmp("NO", strupper(confirm), 2) == 0) {
    printf("2 %s\n", confirm);
    puts("Boo :-(");
  }
  else {
    printf("3 %s\n", confirm);
    puts("Wut?");
  }

  return 0;
}
