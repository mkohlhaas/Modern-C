#include "c23-fallback.h"
#include <stdio.h>

void fib2rec(size_t n, size_t buf[2]) {
  if (n) {
    size_t res = buf[0] + buf[1];
    buf[1] = buf[0];
    buf[0] = res;
    fib2rec(n-1, buf);
  }
}


size_t fib2(size_t n) {
  size_t res[2] = { 1, 1, };
  if (n > 2) fib2rec(n - 2, res);
  return res[0];
}

int main(int argc, char* argv[argc+1]) {
  for (int i = 1; i < argc; ++i) {             // process args
    size_t const n = strtoull(argv[i], nullptr, 0); // arg -> size_t
    printf("fib(%zu) is %zu\n",
           n, fib2(n));
  }
  return EXIT_SUCCESS;
}
