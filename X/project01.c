#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
 char *programmer = "My student id is 2022094839";

 int pid;
 pid = mygetpid();
 printf(1, "%s\nMy pid is %d \n", programmer, pid);

 int gpid;
 gpid = getgpid();
 printf(1, "My gpid is %d \n", gpid);
 exit();
}
