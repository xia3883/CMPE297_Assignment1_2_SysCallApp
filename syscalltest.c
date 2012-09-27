#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <sys/types.h>

int main()
{
   int ret;
   printf("invoking system call sys_hello_world \n");
   ret = syscall(313);
   if (ret < 0)
     exit(1);
   return 0;
}


