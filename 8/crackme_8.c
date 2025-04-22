#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_flag(char* input) {
  return false;
}

int main() {
  char input[64];

  printf("Enter flag: ");
  scanf("%256s", input);

  if (check_flag(input)) {
    printf("\"%s\" is correct\n", input);
  }
  else {
    printf("\"%s\" is incorrect\n", input);
  }

  return 0;
}
