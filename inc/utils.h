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

#ifndef __UTILS_H
#define __UTILS_H



 #if !defined(_STDC_)
 //#include <sys/types.h>
  #define _STDC_
 #endif


 #if !defined(__cplusplus)||defined (_STDC_)
      #include <stdio.h>
      #include <stdlib.h>

      #define mem_alloc(size)         malloc((size))
      #define mem_free(p)             free(p)
      
      
      #define CAST_TO                  (unsigned long)
      #define  ALIGN_MAX_SIZE          sizeof(unsigned long)

      #define mem_align(p)            (char *)((CAST_TO p+ALIGN_MAX_SIZE-1)&(~(ALIGN_MAX_SIZE-1)))   



      #define  MAX_SIZE_ONCE_ALLOC          2048           

 #else

        #ifdef __cplusplus
        extern "c"{
        #endif
            
            #include<stdio.h>
            #include<stdlib.h>


        #ifdef __cplusplus       
        }
        #endif 

#endif 

 
#endif



