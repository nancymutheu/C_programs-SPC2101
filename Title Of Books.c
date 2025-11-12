//Group B coding assignment
//NAME: NANCY MUTHEU
//REG NO:PA106/G/29212/25
/*A PROGRAMME THAT KEEPS RECORD OF BOOKS BOWRROWED EACH DAY BY ALLOWING
LIBRARIAN TO ENTER BOOK TITLES AND STORE THEM IN A TEXT FILE NAMED
borrowed_books.txt*/
#include<stdio.h>

int main()
{
char b[1000];
int a,c;

FILE* fptr;
fptr = fopen("C:\\Users\\ADMIN\\Downloads\\borrowed_books.txt","a");
	
	fprintf(fptr,"\nlist of borrowed books today\n");
	
for(a=0;a<10;a++){
printf("enter book name\n");
scanf("%s",&b);
	
	fprintf(fptr,"%s\t",b);

}

fclose(fptr);
printf("\nmaximum number of borerowed books reached");

	if(fptr ==NULL){
		printf("\nstorage operation NOT successfull");
		exit(1);}
		else{printf("\nstorge file operation successfull");
	}
	return 0;
}