#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]){
	if(argc < 2){
	  fprintf(2, "usage: setpriority priority pid\n");
  	  exit(1);
	}

	int new_priority;
	int pid;

    argint(0, &new_priority);
    argint(0, &pid);

	set_priority(new_priority, pid);

	exit(0);
}