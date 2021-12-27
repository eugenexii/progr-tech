/* а) int *number;
	  printf("%d\n", *number);

   б) float *realPtr;
	  long *integerPtr;
	  integerPtr=realPtr; 		  !разные типы данных! - integerPtr=(int *)realPtr;

   в) int *x, y;
	  x=y;			              !неверно присвоен указатель! - *x=y;

   г) short *numPtr, result;
	  void *genericPtr=numPtr;    !разные типы данных! - int *genericPtr=numPtr;
	  result=*genericPtr+7;

   д) float x=19.34;
	  float xPtr=&x;
	  printf("%f\n", xPtr);       !выведется адрес, а не значаение! printf("%f\n", *xPtr);

   е) char *s;
	  printf("%s\n",s);           

*/
