#include <stdio.h>
int main(){
	printf("moi nhap thong tin chuoi : ");
	char myText[1000];
	fgets(myText,1000,stdin);
	FILE *fptr = fopen("bt01.txt","w");
	if (fptr == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1; 
    }
    fputs(myText,fptr);
	fclose(fptr);
	fptr = fopen("bt01.txt","r");
	char fistChar = fgetc(fptr);
	printf("Ki tu dau tien trong file bt01 la : %c",fistChar);
	fclose(fptr);
  return 0;
}


