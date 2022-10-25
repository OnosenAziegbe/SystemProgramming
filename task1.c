#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char string[1000];
FILE *file1;
FILE *file2;
if ((file1 = fopen("C://Users/THE__INFINITY/Desktop/input.txt", "r")) == NULL)
{
printf("Error! opening input file");
exit(1);
}
fscanf(file1,"%[^\n]", string);
for(int i=0;i<strlen(string);i++){
if(string[i]=='a')
string[i]='b';
}
if ((file2 = fopen("C://Users/THE__INFINITY/Desktop/Heaven.txt", "w")) == NULL)
{
printf(“An error occurred while opening this file");
exit(1);
}
fprintf(w,"%s", string);
fclose(f);
return 0;
}
