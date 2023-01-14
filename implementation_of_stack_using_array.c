#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int top;
    int *arr;
    int size;
};

int isFull(struct Stack *ptr){
    
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else
    {
        return 0;
    }
}

    
int isEmpty(struct Stack *ptr){
    
    if(ptr->top==-1){
    return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow %d\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        
    }
}

int pop(struct Stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct Stack *st,int i){
    int store=st->top-i+1;
    if(store<0){
        printf("Invalid");
    }
    else{
    return st->arr[store];
    }
}

int stackTop(struct Stack *st){
    return st->arr[st->top];
}

int stackBottom(struct Stack *st){
    return st->arr[0];
}

int main(){
    struct Stack *st=(struct Stack*)malloc(sizeof(struct Stack));
    st->top=-1;
    st->size=5;
    st->arr=(int*)malloc(st->size*sizeof(int));
   // printf("Before Insertion:-%d\n",isFull(st));
   // printf("Before Insertion:-%d\n",isEmpty(st));
   // printf("Stack has been created successfully\n");
    push(st,42);
    push(st,442);
    push(st,242);
    push(st,342);
    push(st,448);
   // push(st,42);
   // pop(st);
    //printf("After insertion:-%d\n",isFull(st));
    //printf("After insertion:-%d\n",isEmpty(st));
    //printf("Popped %d from the stack\n",pop(st));
    //for(int j=1;j<=st->top+1;j++){
     //   printf("The value at position %d id %d\n",j,peek(st,j));
    //}
    printf("The topmost value is: %d\n",stackTop(st));
    printf("The bottommost value is: %d",stackBottom(st));
    
    return 0;
}
