#include<stdio.h>
#include<stdlib.h>

struct node
{
     
      int data;
      struct node *ptr;
}*start,*end,*t,*n;
         void push()
         {
               
               int ele;
               n=(struct node*)malloc(sizeof(struct node));
               printf("enter ele");
               scanf("%d",&ele);
               n->data  =  ele;
               n->ptr  =  NULL;
               
                    if(start== NULL)
                      start=end=n;
                      else
                      {
                            n->ptr  =  start;
                            start=n;
                      }
                     
               
         }
         
         void pop()
         {
             if(start==NULL)
             printf("UNDER FLOW");
             else if(start==end)
             {
                   printf("deleted is %d",start-> data);
                   start=end=NULL;
             }
             else
             {
                  printf("deleted is %d",start-> data);
                   start=start->ptr;
             }
         }
        
         void display()
         {
               for(t=start;t!=NULL;t=t->ptr)
               printf("%d ",t->data);
         }
         int main()
         {
               int ch;
               while(1)
               {
                     printf("1:push; 2:pop; 3:display ; 4:exit ");
                     printf("enter your choice");
                     scanf("%d",&ch);
                     switch(ch)
                     {
                           case 1 : push();
                                    break;
                            case 2 : pop();
                                     break;
                            case 3 : display();
                                     break;
                           
                            case 4: exit(0);
                           
                     }
                }
    }

