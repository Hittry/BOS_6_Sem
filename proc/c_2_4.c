#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

int main(void)
{
  int pid = 0;
  int counter = atoi(argv[1]);

  for(int i = 0; i < counter; i++) {
	pid = fork();
	if(pid == 0) 
        break;
  }

  if (pid == 0) {
    printf("Children pid: %d\n", getpid());
    printf("Parent pid: %d\n", getppid());
    printf("Это сообщение из дочернего процесса\n");
	sleep(3);
  } else if (pid > 0) {
    // родительский процесс получает значение PID дочернего, он должен быть > 0
	sleep(3);
    printf("Это сообщение из родительского процесса.\n"
           "Идентификатор дочернего процесса:  %d\n", pid);
  }

  return 0;
}