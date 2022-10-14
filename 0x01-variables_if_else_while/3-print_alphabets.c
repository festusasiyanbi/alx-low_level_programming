#include <stdio.h>
/**                                                                                                                                                            
 * main - Entry for the program
 *
 * Return: Always return zero (success)
 */
int main(void)                                                                                                                            
{                                                                                                                                                 
char i;                                                                                                                                                        
char j;                                                                                                                                                        
for (i = 'a'; i <= 'z'; i++)                                                                                                                                   
{                                                                                                                                                              
putchar(i);                                                                                                                                                    
}                                                                                                                                                              
for (j = 'A'; j <= 'Z'; j++) 
{
putchar(j);
}
putchar('\n');
return (0);
}
