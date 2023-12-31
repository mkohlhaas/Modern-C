#include <stdio.h>
#include "c23-fallback.h"

size_t fib(size_t n) [[__unsequenced__]] {
  if (n < 3)
    return 1;
  else
    return fib(n-1) + fib(n-2);
}


int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; ++i) {             // Processes args
    size_t const n = strtoull(argv[i], nullptr, 0);  // arg -> size_t
    printf("fib(%zu) is %zu\n",
           n, fib(n));
  }
  return EXIT_SUCCESS;
}
