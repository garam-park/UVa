#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define null 0
typedef struct _node{
    int data;
    struct _node* preNode, *nextNode;
} Node;

Node* createNode(int data){

    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;

    newNode->preNode = null;
    newNode->nextNode = null;

    return newNode;
}



void returning(Node* N){

    if (N->nextNode != null){ returning(N->nextNode); }

    if (N->preNode != null){

        N->preNode->nextNode = null;

        N->preNode = null;
    }
}


Node* endNode(Node* N){
    if (N->nextNode != null){ return endNode(N->nextNode); }
    else { return N; }
}

void move_onto(Node* a, Node* b){


    returning(a);


    returning(b);


    b->nextNode = a;

    

    if (a->preNode != null){
        

        a->preNode->nextNode = null;
    }
    

    a->preNode = b;
}


void move_over(Node* a, Node* b){
    

    Node* end = endNode(b);

    returning(a);
    

    end->nextNode = a;
    

    if (a->preNode != null){ a->preNode->nextNode = null; }

    a->preNode = end;
}


void pile_onto(Node* a, Node* b){
    returning(b);
    b->nextNode = a;
    if (a->preNode != null){ a->preNode->nextNode = null; }
    a->preNode = b;
}
void pile_over(Node* a, Node* b){
    Node* end = endNode(b);
    end->nextNode = a;
    if (a->preNode != null){ a->preNode->nextNode = null; }
    a->preNode = end;
}
void printBlock(Node* N){
    printf(" %d", N->data);
    if (N->nextNode != null){ printBlock(N->nextNode); }
}

int searchNode(Node* N, Node* Target){
    if (N->data == Target->data){ return 1; }
    else{
        if (N->nextNode != null){
            return searchNode(N->nextNode, Target);
        }
        else{
            return 0;
        }
    }
}

int main(void){
 
    int count,
    block[2],
    i;
    

    char str[2][5];
    

    Node* B[25];
    

    scanf("%d", &count);
    

    for (i = 0; i < count; i++){
        B[i] = createNode(i);
    }
    

    while (1){


        scanf("%s", str[0]);
        
            if (str[0][0]=='q'){
            

            for (i = 0; i < count; i++){

                printf("%d:", i);
                if (B[i]->preNode == null){ printBlock(B[i]); }
                printf("\n");
            }
            for (i = 0; i < count; i++){
                free(B[i]);
            }
            return 0;
        }
        
        
        scanf("%d %s %d", &block[0], str[1], &block[1]);
       
        if (str[0][0]=='m'){
            if (str[1][1]=='n'){move_onto(B[block[0]], B[block[1]]); }
            else if (str[1][1]=='v'){ move_over(B[block[0]], B[block[1]]); }
            else{ continue; }
        }
        else if (str[0][0]=='p'){
            if (str[1][1]=='n'){ pile_onto(B[block[0]], B[block[1]]);}
            else if (str[1][1]=='v'){  pile_over(B[block[0]], B[block[1]]);}
            else{ continue; }
        }
    }
}