#include<stdio.h>
 2
 3 void StringCat2(char *s1,const char *s2)
 4 {
 5  while ((*s1++) != '\0');
 6  s1--;
 7  while(((*s1++)=(*s2++)) != '\0');
 8 }
 9
 10 int main(int argc,char *argv[])
 11 {
 12  char *t1;
 13  t1 = argv[1];
 14
 15  char *t2;
 16  t2 = argv[2];
 17
 18  StringCat2(t1,t2);
 19  printf("%s\n",t1);
 20 }

