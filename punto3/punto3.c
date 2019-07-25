#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv){
	pid_t pid;
	pid = fork();
	if(pid == 0){
		printf("El hijo esperó al padre, pid: %d \n", (int) getpid());
	}else{
		pid_t pid2;
		printf("Padre ejecutandose, pid: %d \n", (int)getpid());
		pid2 = wait(NULL);
		printf("Terminó el hijo: %d\n", pid2);

	}
}
