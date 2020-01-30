#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

void *myThreadFun(void *vargp) 
{ 
	sleep(1); 
	for(int i=0;i<10;i++)
	{
	printf("Printing hey from Thread \n"); 
	}
	return NULL; 
} 

int main() 
{ 
	pthread_t thread_id; 
	printf("Before Thread\n"); 
	for(int i=0;i<10;i++)
	{
	printf("Printing hey from main \n"); 
	}
	pthread_create(&thread_id, NULL, myThreadFun, NULL); 
	pthread_join(thread_id, NULL); 
	printf("After Thread\n"); 
	
	exit(0); 
}

