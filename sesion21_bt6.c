#include <stdio.h>
int main() {
    FILE *fptr, *fptr1;
    char myText[1000];
    printf("moi nhap thong tin chuoi : ");
	fgets(myText,1000,stdin);
	fptr = fopen("bt01.txt","w");
    fputs(myText,fptr);
	fclose(fptr);
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1; 
    }
    fptr1 = fopen("bt06.txt", "w");
    if (fptr1 == NULL) {
        printf("Khong the mo file bt06.txt de ghi.\n");
        fclose(fptr); 
        return 1;
    }
    while (fgets(myText, 1000, fptr) != NULL) {
        fputs(myText, fptr1);
    }
    fclose(fptr);
    fclose(fptr1);
    printf("Sao chep thanh cong tu bt01.txt sang bt06.txt.\n");

    return 0;
}

