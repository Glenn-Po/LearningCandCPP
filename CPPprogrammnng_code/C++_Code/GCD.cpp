#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int hcf(int, int);//signed int parameters by default
int main(){
	int a, b;
	printf("***Program to find GCD or HCF of two integers***\n\n");
	printf("Enter the two numbers:\n");
	scanf("%d%d", &a, &b);                                                                                                                                                                                                         
	printf("\ngcd(%d, %d)=%d\n\n", a, b, hcf(a,b));
	if(hcf(a,b)==1)
	printf("Note: %d and %d are relatively prime\n\n", a, b);
	system("pause");
	return 0;
}

int hcf(int a, int b){
	int reval;
	for(int i=1; i<=abs(a); ++i)
		if(a%i==0 && b%i==0) reval=i;
	return reval;
}
