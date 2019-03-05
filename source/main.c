#include "kernel_utils.h"

int _main(struct thread *td) {
  initKernel();
  initLibc();
  initPthread();

  uint64_t fw_version = get_fw_version();
  jailbreak(fw_version);

  initSysUtil();

  unlink("/update/PS4UPDATE.PUP.net.temp");
  rmdir("/update/PS4UPDATE.PUP.net.temp");

  unlink("/update/PS4UPDATE.PUP");
  rmdir("/update/PS4UPDATE.PUP");

  printf_notification("Enabled updates!");

  return 0;
}
