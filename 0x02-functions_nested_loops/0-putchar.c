#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - The entry for my program
 *
 * Return: This should return zero if no error is met in the program
 */
int main(void){
char msg[] = "_putchar\n";
syscall(SYS_write, 1, msg, sizeof(msg));

return (0):
}
