#include<unistd.h>
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

void handler_for_tstp(int signo) {
  printf("You can't suspend me\n");
}

int main() {
  printf("Welcome pid %d\n",getpid());// getpid());
  signal(SIGTSTP, handler_for_tstp);
  while(1)
    pause();   
  return 0;
}
