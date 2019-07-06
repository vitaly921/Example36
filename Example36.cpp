#include <conio.h>
#include <stdio.h>



long int fact(int n);

//Главная функция
int main()
{
	int num;
	printf("Enter integer positive number: ");
	scanf("%d", &num);
	printf("Factorial = %ld\n", fact(num));
	
	getch();
	return 0;
}

long int fact(int n)
{
	if(n > 0)
		return n*fact(n-1);
	else
		return 1;
}

