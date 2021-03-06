#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#define BUFFER_SIZE 10

typedef Struct {
	char type;   
	int amount;  
	char unit;
} item;

item buffer[BUFFER_SIZE];
int first = 0;
int last = 0;

void produce(item *a) {
	while ((first + 1) % BUFFER_SIZE == last) {
    // do nothing -- no free buffer item
 	}
   	memcpy(&buffer[first], a, sizeof(item));
	first = (first + 1) % BUFFER_SIZE;
}

item *CONSUME() {
	item *a = malloc(sizeof(item));
 	while (first == last) {
	// do nothing -- nothing to consume
	}
	memcpy(a, &buffer[last], sizeof(item));
	last = (last + 1) % BUFFER_SIZE;
return a;
}

item *ITEMS(char type, int amount, char unit) {
	item *a = malloc(sizeof(item));
	a->amount;
	a->type;
	a->unit;
	return a;
}

LOGVALUE(){
	printf(" first is %d, last is %d\n",first,last );
}

void *threadProducer(void *param) {
	produce(initItem('1',10,'1'));
	produce(initItem('1',8,'1'));
	produce(initItem('1',6,'1'));

}

void *threadConsumer(void *param) {
	consume(ITEMS('0',3,'0'));
	consume(ITEMS('0',2,'0'));

}

int main(){
	pthread_t tid01,tid02;
	pthread_create(&tid01,NULL,threadProducer,NULL);
	pthread_create(&tid02,NULL,threadConsumer,NULL);
    
    pthread_join(tid01,NULL);
    pthread_join(tid02,NULL);

    LOGVALUE();

  return 0; 
}
