/*
 Copyright <YEAR> <COPYRIGHT HOLDER>
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/*jackwu  2017-8-9 14:23*/



#include "mem_pool.h"


mem_pool_t *jw_mem_alloc(size_t sz){
       mem_pool_t  *p;
       if(!(p=mem_alloc(sz))){
           return NULL;
       }

    
       p->next=NULL;
       p->end=(char *)p+sz;
       p->last=(char *)p+sizeof(mem_pool_t);/*get one object*/

       return p;
}



void *jw_mem_palloc(mem_pool_t *pool,size_t sz){
        
        mem_pool_t *p,*q, *ex;
       
        char *cur;
       /*enough mem*/
      if(sz<MAX_SIZE_ONCE_ALLOC 
          &&sz<=  ( (pool->end-(char *)pool-sizeof(mem_pool_t))  ))
       {    
            for(p=pool,q=pool->next;;p=q,q=q->next)
                 { 
                     cur=mem_align(p->last);
                     
                      if((size_t)((char *)p->end-(char *)cur)>sz){/*enough*/
                            p->last+=sz;
                            return cur;
                      }
                      if(q==NULL){
                          break;
                      }
                      
                 }
            
            /*not enough*/
            if(!(ex=jw_mem_alloc((size_t)(pool->end-(char *)pool)))){
                return NULL;
            }
            p->next=ex;
            cur=ex->last;
            ex->last+=sz;
            return cur;
       }else{/*very bif mem block*/
         
          
             




       }




}