#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "number of times 'wcupa' has been called: %d", getreadcount(), "\n");
  exit();
}
