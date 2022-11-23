#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
 
 int main(int argc, char **argv) {
        pid_t child_pid;
        int child_status;
 
        child_pid = fork();
        switch (child_pid) {
                case -1:
                        printf("error: we can use perror\n");
                        perror("fork");
                        exit(1);
                case 0:
                        printf("child is getting dead immediately\n");
                        exit(0);
                default:
                        printf("parent process continuing to execute, but not cared of child is dead or alive\n");
                        sleep (180);
        }
        return 0;
}