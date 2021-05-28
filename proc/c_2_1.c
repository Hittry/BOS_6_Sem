#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  // определить, в каком процессе мы находимся, помогает переменная pid

  if (pid == 0) {
    printf("Children pid: %d\n", getpid());
    printf("Parent pid: %d\n", getppid());
    printf("Это сообщение из дочернего процесса\n");
  } else if (pid > 0) {
    // родительский процесс получает значение PID дочернего, он должен быть > 0
    printf("Это сообщение из родительского процесса.\n"
           "Идентификатор дочернего процесса:  %d\n", pid);
  }

  return 0;
}