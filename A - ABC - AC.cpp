#include<stdio.h>
#include<string.h>

int main(){
  
  char s[11];
  scanf("%s", s);
  int len= strlen(s); 
  for(int i= len/2; i<len; i++){

      s[i]= s[i+1];
    
  }
  printf("%s", s);
  
  
  return 0;
}