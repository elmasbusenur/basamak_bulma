/*Write C code
to count number of digits in a number*/
#include<stdio.h>
int main(){
	int sayi;
	int digit;
	int count;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&sayi);
	while(sayi!=0){
		sayi=sayi/10;
		
		count++;
		
	}
	digit=count;
	printf("digit=%d",digit);
	return 0;
}
