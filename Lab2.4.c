//*program to read in a list of numbers and to write them out in reverse order*/
	#include <stdio.h>
    #define MAX 4	  /* size of array	*/
   
   int main()  
   {
       int table[MAX];	  /* declare array    */
       int num;		  /* to hold input    */ 
       int i,index=0;	 /* index for the array */
       int signal;	 /* return code for scanf*/
	   
        
      while (index < MAX) // signalled by a Control-Z
      {  
      	  printf("Enter an integer %d: \n",index+1);
      	  scanf("%d",&num);	/* read first input */
      	  signal = num;
	      if (signal < 0) 		/* invalid input */
	      {
	      	printf("Entered a negative.\n"); 
	       	printf("Invalid input after %d values\n",index);  getchar();  
          }
          else if(signal>0){
          	table[index++] = num;
		  }  
          else 	{		  
            printf("Not an integer.\n"); 
	       	printf("Invalid input after %d values\n",index);  getchar(); 
		  }
      } //end while
    
    printf("Print out numbers : \n");
  /* write out numbers in reverse */
	for (i=index-1; i>=0; i--)
       printf("%d\n",table[i]);
 
      getchar();
   
     
} //end program

   
