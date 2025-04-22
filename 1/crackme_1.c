#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_flag(char* input) {
  return strcmp(input, "flag{wow_reading_the_source_code_is_easy_3736424}") == 0;
}

int main() {
  char input[64];

  printf("Enter flag: ");
  scanf("%64s", input);

  if (check_flag(input)) {
    printf("\"%s\" is correct\n", input);
  }
  else {
    printf("\"%s\" is incorrect\n", input);
  }

  return 0;
}
