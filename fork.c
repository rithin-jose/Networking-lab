#include<stdio.h>
#include<unistd.h>
int main()
{
int id;
printf("Hello world\n");
pid_t pid=fork();
if(id>0){
   printf("The parent process[process id:%d]\n",getpid());
}
else if (id==0){
   printf("fork created[process id:%d]\n",getpid());
   printf("fork parent process id:%d\n",getppid());
}
else{
   printf("fork creation failed");
}
return 0;
}

