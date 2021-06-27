// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    struct node*prevlink;
};
void create();
void display();
struct node *head,*temp;

int main() {
    int n;
    printf("Enter the number of elements to be inserted : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        create();
    }
    display();
    
    return 0;
}
void display{
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

void create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        while(temp!=0){
         if(head==0){
        temp=head=newnode;
    }
    else{
        newnode->prevlink=temp;
        temp=newnode;
        
    }}
    
}
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    struct node*prevlink;
};
void create();
void display();
struct node *head,*temp;

int main() {
    int n;
    printf("Enter the number of elements to be inserted : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        create();
    }
    display();
    
    return 0;
}
void display(){
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

void create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        
         if(head==0){
        temp=head=newnode;
    }
    else{
        temp->link=newnode;
        newnode->prevlink=temp;
        temp=newnode;
        
    }
    
}
//with insert at end.....for beginning you can make changes 
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    struct node*prevlink;
};
void create();
void display();
void insert_end();
struct node *head,*tail,*temp;

int main() {
    int n;
    printf("Enter the number of elements to be inserted : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        create();
    }
    display();
    insert_end();
    display();
    
    return 0;
}
void display(){
    
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

void create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        
         if(head==0){
        tail=head=newnode;
    }
    else{
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
    }
    
}

void insert_end(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
}


//with length

// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    struct node*prevlink;
};
void create();
void display();
void length();
void insert_end();
struct node *head,*tail,*temp;
int count=0;
int main() {
    int n;
    printf("Enter the number of elements to be inserted : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        create();
    }
    display();
    // insert_end();
    length();
    
    
    return 0;
}
void display(){
    
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

void create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        
         if(head==0){
        tail=head=newnode;
    }
    else{
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
    }
    
}

void insert_end(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
}

void length(){
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->link;
    }
    printf("\n");
    printf("The number of nodes of the linked list is:%d",count);
}


///Insert at any given position

// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    struct node*prevlink;
};
void create();
void display();
void insert_atpos();
void length();
void insert_end();
struct node *head,*tail,*temp;
int count=0;
int main() {
    int n;
    printf("Enter the number of elements to be inserted : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        create();
    }
    display();
    // insert_end();
    length();
    insert_atpos();
    display();
    
    return 0;
}
void display(){
    
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

void create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        
         if(head==0){
        tail=head=newnode;
    }
    else{
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
    }
    
}

void insert_end(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
   
        newnode->prevlink=0;
        newnode->link=0;
        tail->link=newnode;
        newnode->prevlink=tail;
        tail=newnode;
}

void length(){
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->link;
    }
    printf("\n");
    printf("The number of nodes of the linked list is:%d",count);
}
insert_atpos(){
    int i=1,pos;
    
   printf("\nEnter the position at which you want to insert the new node :");
        scanf("%d",&pos);
    if(pos>count || pos<1){
        printf("Invalid position");
    }
    if(pos==count){
        insert_end();
    }
    else{struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->prevlink=0;
        newnode->link=0;
        temp=head;
        while(i<pos-1){
        
            temp=temp->link;
            i++;
        }
        newnode->link=temp->link;
        temp->link->prevlink=newnode;
        newnode->prevlink=temp;
        temp->link=newnode;
        
        
        
    }
    
    
    
}


