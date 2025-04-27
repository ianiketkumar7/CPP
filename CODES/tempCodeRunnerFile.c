#include <stdio.h>
int main(){
char *ptr = "Hello";
printf("%c",*&*&*ptr);
return 0;
}