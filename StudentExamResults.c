//Group B coding assignment
//NAME:NANCY MUTHEU
//REG NO:PA106/G/29212/25
/*A PROGRAME THAT KEEPS RECORD student examination results
(student's name(a),registation number(b)and total marks(c)*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[50],b[100];
	int c;
	FILE*fptr;
	fptr = fopen("/storage/emulated/0/Documents/results.dat","ab");
	printf("enter student name: ");
	scanf(" %[^\n]",&a);
	
	printf("\nenter registation number: ");
	scanf(" %[^\n]",&b);
	
	printf("\ntotal marks scored by %s: ",a);
	scanf("%d",&c);
	
		if(fptr ==NULL){
		printf("\noperation NOT successfull");
		exit(1);}
		else{printf("\nfile operation successfull");
        }
	
    fwrite(a, sizeof(char), 50, fptr);   
    fwrite(b, sizeof(char), 100, fptr);   
    fwrite(&c, sizeof(int), 1, fptr);   
    
    fclose(fptr);
    
    fptr= fopen("/storage/emulated/0/Documents/results.dat", "rb");
    
    if(fptr == NULL){
    printf("Cannot open file for reading\n");
    exit(1);
    }

        
    while(fread(a, sizeof(char), 50, fptr)==50){
    fread(b, sizeof(char), 100, fptr);
    fread(&c, sizeof(int), 1, fptr);
    
    a[49] = '\0';
    b[99] = '\0';
        
    printf("name:%-15sadm No:%-20smarks:%-3d\n", a, b, c);
    }


	fclose(fptr);
	return 0;
    }