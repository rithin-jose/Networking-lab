
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

void *myThreadOddFun(void *vargp) 
{ 	int *myid = (int *)vargp; 
        int i =1;
        for(i=1;i<=*myid;i++)
        { if(i%2!=0)printf("Odd %d\n",i);
          sleep(1);
	}
}

void *myThreadEvenFun(void *vargp) 
{ 	int *myid = (int *)vargp; 
        int i =1;
        for(i=1;i<=*myid;i++)
	{ if(i%2==0)printf("Even %d\n",i);
         sleep(1);
	}
}



int main() 
{ int i; 
  pthread_t tid; 
  int limit=20;
  pthread_create(&tid, NULL,&myThreadOddFun, (void *)&limit); 
  pthread_t tid2; 
  pthread_create(&tid2, NULL,&myThreadEvenFun, (void *)&limit); 
  pthread_exit(NULL); 
  return 0; 
} 


