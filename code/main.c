#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

enum { T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTEGER_LITERAL };

struct token {
  int token;
  int intvalue;
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Please specify a \033[31minput\033[0m file");
    return (-1);
  }

  for (int i = 1; i < argc; i++) {
    fprintf(stdout, "Provided input of %s\n", argv[i]);
  }

  return EXIT_SUCCESS;
}
