#include "ps4.h"

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();
  jailbreak();
  initSysUtil();

  unlink("/update/PS4UPDATE.PUP.net.temp");
  rmdir("/update/PS4UPDATE.PUP.net.temp");

  unlink("/update/PS4UPDATE.PUP");
  rmdir("/update/PS4UPDATE.PUP");

  printf_notification("Enabled updates!");

  return 0;
}
