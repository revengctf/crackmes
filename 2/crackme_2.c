#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_flag(char* input) {
  char encrypted_flag[38] = "ndiospgzWa{W|`mWaf~mz{mWgnWpgzW;:;?:;u";
  unsigned int flag_length = strlen(encrypted_flag);
  int key = 8;

  if (strlen(input) != flag_length) {
    return false;
  }

  for (unsigned int i = 0; i < flag_length; ++i) {
    // ^ denotes the XOR operator.
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
