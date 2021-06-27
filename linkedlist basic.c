"No 1 - without any function"

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};


int main(){
    struct node *head,*newnode,*temp;
        int n;
        scanf("%d",&n);
    for(int i=0;i<n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list");
    scanf("%d",&newnode->data);

    if(head==NULL){
        temp=head=newnode;
        newnode->link=0;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }

    }
    temp=head;
    while(temp!=NULL){
            printf("%d",temp->data);
    temp=temp->link;

    }
    return 0;

}

"No 2 - with any function"

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
void insert();
void display();
struct node *head,*newnode,*temp;
int main(){
    
        int n;
        scanf("%d",&n);
    for(int i=0;i<n;i++){
        insert();
        
    }
    display();
    
    return 0;

}
void display(){
        temp=head;
        printf("The list is: ");
    while(temp!=NULL){
            printf("%d ",temp->data);
    temp=temp->link;

}
printf("\n");
}

void insert(){
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list\n");
    scanf("%d",&newnode->data);

    if(head==NULL){
        temp=head=newnode;
        newnode->link=0;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }
}


"No3 - with any function and insert in bet after a element"
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
void insert();
void display();
struct node *head,*newnode,*temp;
int main(){
    
        int n,pos;
        scanf("%d",&n);
    for(int i=0;i<n;i++){
        insert();
        
    }
    display();
    printf("enter the value of the element after which the newnode has to be inserted");
    scanf("%d",&pos);
     
    insertinbet(pos);
    display();
    
    
    return 0;

}
void display(){
        temp=head;
        printf("The list is: ");
    while(temp!=NULL){
            printf("%d ",temp->data);
    temp=temp->link;

}
printf("\n");
}

void insert(){
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list\n");
    scanf("%d",&newnode->data);

    if(head==NULL){
        temp=head=newnode;
        newnode->link=0;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }
}
"Insert in between after a given number"
void insertinbet(int pos){
    temp=head;
    while(temp->data!=pos){
            printf("%d ",temp->data);
    temp=temp->link;
    }
    // struct node* temp1;
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list\n");
    scanf("%d",&newnode->data);


  
        // temp1=temp->link;
        // temp->link=newnode;
        // temp=temp->link;
        // temp->link=temp1;
        newnode->link=temp->link;
        temp->link=newnode;
}
//reverse the linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
void insert();
void display();
void insertinbet(int);
void reverse();

struct node *head,*newnode,*temp;
int main(){
    
        int n,pos;
        scanf("%d",&n);
    for(int i=0;i<n;i++){
        insert();
        
    }
    display();
    printf("enter the value of the element after which the newnode has to be inserted");
    scanf("%d",&pos);
     
    insertinbet(pos);
    display();
    reverse();
    display();
    
    
    return 0;

}
void display(){
        temp=head;
        printf("The list is: ");
    while(temp!=NULL){
            printf("%d ",temp->data);
    temp=temp->link;

}
printf("\n");
}

void insert(){
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list\n");
    scanf("%d",&newnode->data);

    if(head==NULL){
        temp=head=newnode;
        newnode->link=0;
    }
    else{
        temp->link=newnode;
        temp=temp->link;
    }
}
// "Insert in between after a given number"
void insertinbet(int pos){
    temp=head;
    int i=1;
    while(i!=pos){
            printf("%d ",temp->data);
    temp=temp->link;i++;
    }
    // struct node* temp1;
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert any element into linked list\n");
    scanf("%d",&newnode->data);


  
        // temp1=temp->link;
        // temp->link=newnode;
        // temp=temp->link;
        // temp->link=temp1;
        newnode->link=temp->link;
        temp->link=newnode;
}
void reverse(){
    struct node *prevnode,*nextnode,*currentnode;
    prevnode=NULL;
    nextnode=currentnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->link;
        currentnode->link=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
        
    }head=prevnode;
    
    
}