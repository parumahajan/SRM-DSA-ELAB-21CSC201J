#include <stdio.h>     
#include<stdlib.h> 
struct node { 
int data; 
struct node *next; 
}; 
struct node *start,*t,*p2,*p1; 
int n,valtoinsert,c=0; 
void create(){ 
 //   struct node *t,*ptr; 
    t=(struct node *)malloc(sizeof(struct node)); 
     
    scanf("%d",&t->data); 
    t->next=NULL; 
    if(start==NULL){ 
        start=t; 
    }  else 
    {  p2=start; 
    while(p2->next!=NULL){ 
         
     p2=p2->next;} 
     p2->next=t; }} 
 
void display(){   
  // int aftervalue,c=0;  
 //  scanf("%d",&aftervalue); 
 //  struct  node *p1,*insert; 
  p1=(struct node*)malloc(sizeof(struct node)); 
   scanf("%d%d",&valtoinsert,&p1->data); 
    p1->next=NULL; 
    
      p2=start; 
      while(p2){ 
       if(valtoinsert==p2->data){ c++; 
         p1->next=p2->next; 
         p2->next=p1; 
       }p2=p2->next;    
      } 
     //  if(c==0){
      printf(c==0?"Node not found! Linked List:":"Linked List:"); 
      //   } 
    //  printf("Linked List:");  
      p2=start;               
      while(p2){ 
      printf("->%d",p2->data); 
      p2=p2->next; 
     } 
} 
int main (){ 
    scanf("%d",&n); 
 //   int t=n; 
    while(n--){ 
        create();}  
    display(); 
    return 0;
}