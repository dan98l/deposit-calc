#include <stdio.h>
#include "deposit.h"
int main(){
	int srok_max=365;
	int srok_min=0;
	int min_vklad=1000;
	int srok,vklad;	

	printf("Введите срок, на который берете кредит:/n");
	scanf("%d", &srok);
	printf("Введите сумму кредита:/n");
	scanf("%d", &vklad);
	
	calcTest(srok,srok_max,srok_min,vklad,min_vklad);
}
