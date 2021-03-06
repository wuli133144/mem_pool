

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



#include "utils.h"


typedef struct mem_large_s mem_large_t;
struct mem_large_s{
     mem_large_t *next;
     void *ex;
};


struct mem_pool_node{
       
       char *last; /*last pool*/
       char *end;  /*end position*/
       struct mem_pool_node *next; /*next pool object*/
       mem_large_t *large;
       void *ex;

};

typedef struct  mem_pool_node mem_pool_t;


mem_pool_t *jw_mem_alloc(size_t);

void * jw_mem_palloc(mem_pool_t *,size_t);


void destroy_mem(mem_pool_t *pool);
 
  




