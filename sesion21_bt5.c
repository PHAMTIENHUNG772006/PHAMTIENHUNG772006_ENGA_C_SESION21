#include <stdio.h>
int main(){
	int size = 0;
	FILE *fptr;
	char myText[1000];
	printf("moi ban nhap so dong trong file : ");
	scanf("%d", &size);
	getchar();
	fptr = fopen("bt05.txt","w");
	if (fptr == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;  
    }
	for(int i=0;i<size;i++){
	    printf("moi nhap thong tin file %d : ", i+1);
	       fgets(myText,1000,stdin);
   				fputs(myText,fptr);
    }
    fclose(fptr);
	fptr = fopen("bt05.txt","r");
	if(fptr == NULL){
		printf("Khong the mo file de ghi.");
		return 1;
	}
	printf("Chuoi ki tu trong file bt05 la : \n");
	while (fgets(myText, 1000, fptr) != NULL) {
        printf("%s", myText);  
    }
	fclose(fptr);
  return 0;
}


