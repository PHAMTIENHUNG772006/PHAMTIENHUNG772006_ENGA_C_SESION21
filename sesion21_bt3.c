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
	fptr = fopen("bt01.txt","a");
	printf("moi nhap them thong tin chuoi : ");
	fgets(myText,1000,stdin);
	fputs(myText,fptr);
	fclose(fptr);
	printf("\nChuoi da bt01 da duoc them ");
  return 0;
}

