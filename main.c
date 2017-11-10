/*Team Angry: Piotr Milewski and Victor Teoh
  Systems pd10
  HW11 -- Don't get argumentative
  2017-11-10*/

#include "main.h"

char **parse_args( char *line){
  char retArr[8][64];
  char **p = retArr;
  int count = 0;
  while (line){
    p[count] = strsep( p, " ");
    count++;
  }
  return p;
}

int main(){

  char line[200];
  fgets( line, sizeof(line), stdin);
  
  char **args = parse_args( line);
  execvp( args[0], args);

  return 0;
}
