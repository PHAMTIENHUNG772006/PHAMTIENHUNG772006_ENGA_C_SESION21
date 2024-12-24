#include <stdio.h>
int main(){
	int size = 0;
	FILE *fptr;
	char myText[1000];
	fptr = fopen("bt01.txt","r");
	printf("Chuoi ki tu trong file bt01 la: \n");
    fgets(myText, 1000, fptr);
    printf("%s", myText);   
	fclose(fptr);
  return 0;
}


