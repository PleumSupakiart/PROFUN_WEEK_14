#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
	
	int money_save, every_month;
	
}Age;

Age money_retirement(int *Current,int *Retirement,int *Last,int *Expenditure)
{
	Age money;
	if (*Current > 0)
	{
		if (*Last > *Retirement && *Last > *Current)
		{
			money.money_save = (*Last - *Retirement) * (*Expenditure) * 12;
			money.every_month = (money.money_save / ((*Retirement - *Current) * 12));


			int M[] = { money.money_save, money.every_month };
			if ( M[0] > M[1] )
			{
				int i = 0;
				printf("\n\nFrom retirement in %d years old with money to spend per month %d Bath.", *Retirement, *Expenditure);
				printf("\nAt the age of %d you must have at least %d baht in savings.", *Retirement, M[i]);
				i++;
				printf("\n\nFrom now on every month you have to save at least %d baht to meet up in retirement", M[i]);
			}
		}
	}
	return money;
}


int main()
{
	int Current, Retirement, Last, Expenditure;
	
	cout << "Current age : ";
	cin >> Current;

	cout << "Retirement age : ";
	cin >> Retirement;

	cout << "Last age : ";
	cin >> Last;

	cout << "Your expenditure per month : ";
	cin >> Expenditure;

	money_retirement(&Current,&Retirement,&Last,&Expenditure);

	

	return 0;
}