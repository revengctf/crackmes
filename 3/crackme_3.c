#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_flag(char* input) {
  // Strings are just arrays of characters which can be represented by their ASCII codes.
  char encrypted_flag[37] = {102, 109, 99, 100, 127, 97, 127, 105, 105, 100, 99, 104, 83, 117, 97, 125, 79, 122, 119, 106, 103, 74, 119, 101, 125, 70, 104, 126, 125, 113, 65, 40, 19, 21, 17, 23, 89};
  unsigned int encrypted_flag_length = strlen(encrypted_flag);

  if (strlen(input) != encrypted_flag_length) {
    return false;
  }

  for (unsigned int i = 0; i < encrypted_flag_length; ++i) {
    int key = i;

    if ((input[i] ^ key) != encrypted_flag[i]) {
      return false;
    }
  }

  return true;
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
