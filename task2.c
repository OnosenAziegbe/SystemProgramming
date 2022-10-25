#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* string_replace(char *str, const char *target, const char *replace)
{
char b[1024] = { 0 };
char *point = &b[0];
const char *temp = str;
size_t target_len = strlen(target);
size_t replace_len = strlen(replace);
while (1) {
const char *ptr = strstr(temp, target);
if (ptr == NULL) {
strcpy(point, temp);
break;
}
memcpy(point, temp, ptr - temp);
i_point += ptr - temp;
memcpy(point, replace, replace_len);
i_point += replace_len;
tmp = ptr + target_len;
}
strcpy(str, b);
return str;
}
int main(){
char string[1000];
char target_words[1000][1000]={"Inferno","In dark woods","those woods","to enter","crest","Below a hill","shoulders","planet","dante"};
char new_words[1000][1000]={"Paradiso","using Windows 8.1","Windows 8.1","to use 8.1",
"screen","Before a monitor","GUI","UNIX","Shakespeare"};
strcpy(string,"\0");
FILE *file1;
FILE *file2;
if ((f = fopen("C://Users/THE__INFINITY/Desktop/input.txt", "r")) == NULL)
{
printf("Error! opening input file");
exit(1);
}
char temp[1000];
strcpy(temp,"\0");
while(fgets(temp,sizeof(char*),f) !=NULL){
strcat(string,temp);
}
int i;
for(i=0;i<9;i++){
strcpy(string,string_replace(string,targets[i],replacement_words[i]));
}
if ((w = fopen("C://Users/THE__INFINITY/Desktop/Dante.txt", "w")) == NULL)
{
printf("Error! opening output file");
exit(1);
}
fprintf(w,"%s", string);
fclose(f);

return 0;
}
