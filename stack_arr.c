//Change one

#include <stdio.h>
#define SIZE 5

int stack[SIZE], top=-1;

int isFull(){
	if(top==SIZE-1)
		return 1;
	return 0;
}

int isEmpty(){
	if(top==-1)
		return 1;
	return 0;
}

void push(int item){
	if(!isFull()){
		stack[++top]=item;
	}
	else{
		printf("Stack overflow\n");
	}
}

int pop(){
	if(isEmpty()){
		printf("Stack underflow!\n");
		return -1;
	}
	top--;
	printf("%d is popped\n",stack[top+1]);
    return(stack[top+1]);
}

void peak(){
    if(!isEmpty())
        printf("%d is the top value\n",stack[top]);
    else
        printf("Stack underflow\n");
}

int main(){
	while(1){
		int choice;
		printf("1-Push\n2-Pop\n3-Peak\n");
		scanf("%d",&choice);

		if(choice==1){
			int item;
			scanf("%d", &item);
			push(item);
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			peak();
		}
		else{
			break;
		}
	}
}
