#include<stdio.h>
int main(){
	printf("moi nhap thong tin chuoi");
	char myText[1000];
	fgets(myText,1000,stdin);
	FILE *fptr;
	if (fptr == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1; 
    }
	fptr = fopen("bt01.txt","w");
	fclose(fptr);
	
  return 0;
}


