// Test that fork fails gracefully.
// Tiny executable so that the limit can be filling the proc table.

#include "types.h"
#include "stat.h"
#include "user.h"

#define N  1000
void
printf(int fd, char *s, ...)
{
  write(fd, s, strlen(s));
}
/**
void
forktest(void)
{
  int n, pid;

  printf(1, "fork test\n");

  for(n=0; n<N; n++){
    pid = fork();
    if(pid < 0)
      break;
    if(pid == 0)
      exit();
  }

  if(n == N){
    printf(1, "fork claimed to work N times!\n", N);
    exit();
  }

  for(; n > 0; n--){
    if(wait() < 0){
      printf(1, "wait stopped early\n");
      exit();
    }
  }

  if(wait() != -1){
    printf(1, "wait got too many\n");
    exit();
  }

  printf(1, "fork test OK\n");
}
*/
void forkt(){
  printf(1,"\nsdsdsd\n" );

}
int
main(void)
{
/*  printf(1,(char *)forkt );
  printf(1,"\n" );
  //uint * bla=(uint*)forkt;

  char *buff=(char*)0x84;
  printf(1,"\naaaaaaaaaaa\n" );
  buff[0]=0x00;
  buff[1]=0x00;
  buff[2]=0xEB;
  buff[3]=0x00;

  bla=(uint) 0xFF000000;
  printf(1,"\nbbbbbbbbbb\n" );

//  printf(1,(char *)forkt );
  forkt();*/
  int i=0x137a;
  char *buff=(char*)i;
  while (i<0x137a+0x16) {
    *buff=65;
    i++;

  }
  *buff=0;
  printf(1,"\nbbbbbbbbbb\n" );
  exit();
}
