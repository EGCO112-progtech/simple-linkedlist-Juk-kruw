//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    b.next=&d;
    // Exercise 1
    b.next->value = head->next->value+3;
    d.next = NULL;
    
    struct node f;
    
    f.next = &a;
    head =&f;
    f.value=2;
    // Exercise 2
     printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    // Exercise 1
    printf("%d\n", head ->next->next->value);
    printf("%d\n",head->next->next->next->value);

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp valu,e to faciliate
        
    //  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            
            printf("%d\n", tmp->value);
            tmp = (*tmp).next;
          // What is missing???
        }
    tmp =head;
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(tmp!=NULL){
            printf("%d ", tmp->value);
            tmp = (*tmp).next;
        }
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
     printf("\n");
  head = (NodePtr)malloc(sizeof(struct node));
  tmp =head; 
  for(i=0;i<3;i++){
  tmp->next = (NodePtr)malloc(sizeof(struct node));
  tmp->value = 3+i;
  printf("%d ",tmp->value);
  tmp = tmp->next;
  }
  tmp->value =i+3;
  printf("%d ",tmp->value);
  tmp->next = NULL;

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */printf("\n");
    
    for(tmp =head;tmp!=NULL;tmp = head){
  head = tmp->next;
  printf("Free %d\n",tmp->value);
  free(tmp);

  
  
  }
    return 0;
}
