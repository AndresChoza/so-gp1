#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char ** argv){
	int pid;
	int priority;
	pid = atoi(argv[1]);
	priority = getPriority(pid);
	if(priority == -1){
		printf(1,"Process not found with id \n %d",pid);
	}
	else{
		printf(1,"Process %d has priority %d",pid,priority);
	}
	exit();
}