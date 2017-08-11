

/*
 test demo
*/

//#include "../inc/utils.h"

#include"../inc/mem_pool.h"


int main(int argc,char *const argv[])
{    

   
     char *alloc;

    // printf("%d ",mem_align(p));

      mem_pool_t *p=NULL;     
      p=jw_mem_alloc(1240);

      printf("=====pool addr====%p\n",p);
      printf("======pool->end===%p\n",p->end);
      printf("real size=%d\n",p->end-(char*)p);
      printf("======pool->last===%p\n",p->last);
      printf("last size %d\n",p->last-(char *)p);
      printf("======pool->next===%p\n",p->next);
      


       alloc=jw_mem_palloc(p,24);
       printf("%d=========",alloc-(char *)p);






     return 0 ;    
}