#include<stdio.h>
struct SinhVien{
	int id;
	int age;
	int name[50];
};
int main(){
	struct SinhVien sv[10];
	int size=0;
    FILE *fptr;
    fptr = fopen("student.txt","w");
    if(fptr == NULL){
    	printf("khong the ti thay file de mo");
    	return 1;
	}
    printf("moi ban nhap so luong sinh vien :");
    scanf("%d", &size);
    getchar();
    for(int i=0;i<size;i++){
    	printf("Thong tin sinh vien thu %d\n",i+1);
    	printf(" ID sinh vien : ");
    	scanf("%d", &sv[i].id);
    	fprintf(fptr,"ID = %d\n",sv[i].id);
    	getchar();
    	printf("Ten sinh vien : ");
    	fgets(sv[i].name,sizeof(sv[i].name),stdin);
    	fprintf(fptr,"Ten = %s \n",sv[i].name);
    	printf(" Tuoi sinh vien : ");
    	scanf("%d", &sv[i].age);
    	fprintf(fptr,"Tuoi = %d\n",sv[i].age);
    	getchar();
    	fclose(fptr);
	}
	printf("Thong tin sinh vien da duoc them vao file");
  return 0;
}

