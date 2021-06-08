#include "ckb_consts.h"
#include "ckb_syscalls.h"

int main() {
  uint8_t code_hash[32] = {175, 146, 240, 99,  27,  12,  185, 169,
                           209, 181, 84,  229, 107, 95,  3,   175,
                           54,  253, 52,  76,  7,   133, 116, 186,
                           118, 197, 58,  207, 133, 151, 148, 107};
  int argc = 3;
  char *argv[] = {"a", "b", "c"};
  return ckb_exec_dep(code_hash, 0, argc, argv);
}
