#include<stdio.h> 
#include<string.h> 
#include<conio.h> 
int main() 
{ 
	char number[10]; 
	int flag=0; 
	int length; 
	printf("Enter a number \n"); 
	scanf("%s",number); 
	length=strlen(number); 
	while(length--) 
	{ 
		if(number[length]=='.') 
		{ 
			flag=1; 
			break; 
		} 
	} 
	if(flag) 
		printf("Floating point\n"); 
	else 
		printf("Integer\n"); 
 
	getch(); 
	return 0; 
} 
