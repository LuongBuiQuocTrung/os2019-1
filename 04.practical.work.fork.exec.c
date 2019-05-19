#include <stdio.h>
#include <unistd.h>
#include <wait.h>
int main(){
int pid01,pid02,status;
printf("Main before fork()\n");
pid01 = fork();
if(pid01 == 0){
printf("first child after fork \n\t Run \"ps-ef\"n");
char* arg[] = {"/bin/ps", "-ef", NULL};
if(execvp("/bin/ps", args)<0){
printf("Execute fail \"ps-ef\"\n);
}
}
else{
waitpid(pid01, NULL, 0);
printf("Parent after fork , %d is child after fork \n\tCreate other childs\n",pid01);
if(pid02==0){
printf("The second child after fork \n\t Run \"free -h\"\n");
char* arg[] = {"/usr/bin/free". "-h", NULL};
if(execvp("/usr/bin/free",args)<0){
printf("Execute fail \"free -h\"\n");
}
}
else {
printf("It's parent after 2 forks, %d is second child\n",pid02);
waitpid(pid02,NULL,0);
}
}
return 0;
}
