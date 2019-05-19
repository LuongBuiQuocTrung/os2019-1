#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 10
typedef struct product{
int amount;
char unit;
char type;
} item;
item buffer[BUFFER_SIZE];
int first = 0;
int last = 0;
void produce(item *a){
while((first + 1) % BUFFER_SIZE == last){
printf("No free buffer");
return;
}
memcpy(%buffer[first], a, sizeof(item));
first = (first +1) % BUFFER_SIZE;
printf("First = %d", first);
}
void consume(){
item *a = malloc(sizeof(item));
while(first == last){
printf("Nothing to consume");
}
memcpy(i, &buffer[last], sizeof(item));
last = (last + 1) % BUFFER_SIZE;
printf("Last = %d\n", Last);
return;
}
void Chicken(item *b){
b->type = 0;
b->unit = 0;
b->amount = 0;
}
int main(){
int opts = 0;
item beef , chicken;
printf("welcome to restaurant");
printf("menu: beef and chicken");
printf("1.Beef || 2.Chicken");
while(true){
scanf("%d", &opts);
if(opts == 1){
printf("Beef is coming");
produce(beef);
printf("Cosuming...");
consume();
break;
}
else if (opts == 2){
printf("Chicken is coming");
Chicken(chicken);
produce(chicken);
printf("Cosuming");
consume();
break;
}
return 0;
}
