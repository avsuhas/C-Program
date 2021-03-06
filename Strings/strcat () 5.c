strcat( s1 ,s2 )
	
      strcat( s1, s2) is a standard library function which appends the string s2  with  s1 provided s1 must be large enough to hold s2. 

Example:
     we are taking the input from the user using command linearguments.
     input   =  ./a.out  Subhash  programming
     output =  Subhashprogramming
      
      In the given example "Subhash" is the  target string  and  "programming "is the  source string . So  argv[1] = "Subhash " and argv[2] = "programming".The  strcat( ) concatenates the  argv[2]  with argv[1] . Therefore in this case the output string is "Subhashprogramming".
              
logic: 
     1. Take s1 and s2 strings using  command line arguments.
     2. Call the function my_strcat( )  and pass the base address of the  argv[1]  and argv[2].( my_strcat(argv[1], argv[2]) .
     3. The control goes to the function definition( void my_strcat(char * p, char * q)).
     4. Increment the pointer 'p' until it reaches '\0' character (while(*p != '\0')).
     5. If the above condition is true then come out of the loop and start appending the characters from q to p(while(*p++ = *q++)).
     6. The condition specified in 5 fails when '\0' character is copied into the s1.
     7.Come out of the loop and print the string s1.


Source code:

#include<stdio.h>

void  my_strcat(char *,char *);

int main(int argc, char*argv[])

{


        my_strcat(argv[1] , argv[2]);

        printf("%s",argv[1]);

}

void my_strcat(char *p,char *q)

{


        while(*p != '\0')

        	p++;

        while(*p++ = *q++ )

	;


}


