#include "types.h"
#include "stat.h"
#include "user.h"

void
printf(int fd, char *s, ...)
{
  write(fd, s, strlen(s));
}

int
main(void)
{
  int pid;
  if ((pid=fork2())==0){
    printf( 1,"Filho aki\n");
    int i=0;
    while(i<100000)i++;
    printf( 1,"Filho is dead\n");
  }else{
    printf( 1,"Pai aki\n");
    int i=0;
    while(i<100000)i++;
    printf( 1,"wait for its\n");
    wait();
    printf( 1,"Filho is dead on fathers arms\n");
  }
  printf( 1,"Father is dead\n");

  exit();
}
