// C11 standard
// created by cicek on Dec 20, 2019 17:47

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    /* fork a child process */
    pid = fork();
    printf(" pid: %d\n", pid);

    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return 1;
    } else if (pid == 0) { /* child process */
        printf("child pid: %d\n\n", pid);
        execlp("/bin/ls", "ls", "-la", NULL);
    } else { /* parent process */
        /* parent will wait for the child to complete */
        wait(NULL);
        printf("\nparent pid: %d\n", pid);
        printf("Child complete !\n");
    }

    return 0;
}

