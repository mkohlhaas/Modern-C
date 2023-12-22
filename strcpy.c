#include <string.h>
#include <stdio.h>
int main(int argc, char* argv[argc+1]) {
  size_t const len = strlen(argv[0]); // Computes the length
  char name[len+1] = { };             // Initialized VLA terminates with 0 character
  memcpy(name, argv[0], len);         // Copies the name
  if (!strcmp(name, argv[0])) {
    printf("program name \"%s\" successfully copied\n",
           name);
  } else {
    printf("copying %s leads to different string %s\n",
           argv[0], name);
  }
}
