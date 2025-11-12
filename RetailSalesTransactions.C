//Group B coding assignment
//NAME:NANCY MUTHEU
//REG NO:PA106/G/29212/25
/*A PROGRAME THAT KEEPS RECORD of a store daily transaction
in a file named sales.txt each line contain amont of single 
transactions examination result and rads the record from it
 calculate and displays total sales of the day and proper closure of file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct shop{
int a; 
char i[50];
float p,t,gt;}w;//i is item ,a is quantity,p is price per item,t is total,gt is grand total

int main(){

FILE *fptr;

printf("item name: ");
scanf(" %[^\n]",w.i);
printf("quantity: ");
scanf("%d",&w.a);
printf("price: ");
scanf("%f",&w.p);

w.t=(w.a*w.p);
w.gt = 0;


fptr = fopen("/storage/emulated/0/Download/sales.txt", "a");

if(fptr ==NULL){
  printf("\n initiating header operation NOT successfull");
  exit(1); }
  
  fseek(fptr, 0, SEEK_END);
     long size = ftell(fptr);
     if (size == 0) {
        fprintf(fptr, "%-25s %-10s %-10s %-10s\n", "Item Name", "Quantity", "Price", "Total");
        fprintf(fptr, "---------------------------------------------------------------\n");}
         
        fprintf(fptr,"%-25s %-10d %-10.2f %-10.2f\n",w.i,w.a,w.p,w.t);
           
         fclose(fptr);
         fptr = fopen("/storage/emulated/0/Download/sales.txt", "r");
         char line[200];
    // Skip the header (first two lines)
    fgets(line, sizeof(line), fptr);
    fgets(line, sizeof(line), fptr);
    
    while (fscanf(fptr, "%s %d %f %f",w.i, &w.a, &w.p, &w.t) == 4) {
        w.gt += w.t;
    }
    
    fclose(fptr);     
    

printf("Total item sales : %.2f\n",w.t);
printf("updated grand sales : %.2f\n",w.gt);



return 0;}
	