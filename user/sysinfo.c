#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/sysinfo_data.h"

int
main(int argc, char *argv[])
{
  struct sysinfo_data information;
  
  if (sysinfo(&information) == 0)
    printf("Running Processes: %d\nFree Memory: %d\n", 
            information.running_processes, information.free_memory);
  
  else
    printf("Error Occured\n");

  exit(0);
}
