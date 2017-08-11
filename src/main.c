

/*
 test demo
*/

#include "../inc/utils.h"


int main(int argc,char *const argv[])
{    

   
     void *alloc;

    // printf("%d ",mem_align(p));

      
      struct mem_pool_node *p=NULL;
       
      p=jw_mem_alloc(1240);
      //printf("%p=========",p);
      //  alloc=jw_mem_palloc(p,24);
      //  printf("%p=========",alloc);




     return 0 ;    
}