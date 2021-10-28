//----------------------------------------------------------------------------
//   File:        ChangeCounter.c
//
//   Functions:
//                main()
//----------------------------------------------------------------------------
#include <stdio.h>
#include <math.h> 
#include <stdlib.h> 
#include <stdint.h>
#pragma warning(disable: 4996)  

#define PENNIESINTWENTY 2000
#define PENNIESINTENS 1000
#define PENNIESINFIVES 500
#define PENNIESINONES 100
#define PENNIESINQUARTERS 25
#define PENNIESINDIMES 10
#define PENNIESINNICKELS 5
#define PENNIESINPENNIES 1

//----------------------------------------------------------------------------
//   Function:    main()
//
//   Title:       Calculate change or money owed.
//
//   Description: 
//                Calculates and displays number of bills and coins in change
//			      or that are owed.
//
//   Programmer:  Daryl Susilo
//   
//   Date:        10/8/2016
// 
//   Version:     1.0
//  
//   Environment: Intel Pentium PC 
//                Software: OS: MS Windows 10  
//                Compiles under Microsoft Visual Studio.Net 2015
//
//   Input:		Cost and money tendered from console
//   Output:	Screen display of numbers of bills and coins in change
//				or that are owed.
//   Calls:       
// 
//   Returns:     EXIT_SUCCESS (successful execution)
//
//   History Log:
//                10/9/16  DS completed version 1.0
//----------------------------------------------------------------------------
int main(void)
{
	long double costInDollars = 0.0;
	long double tenderInDollars = 0.0;
	long long ChangeInDollarsInPennies = 0;
	long double ChangeInDollars = 0.0;
	long long ChangeInTwenty = 0;
	long long ChangeInTens = 0;
	long long ChangeInFives = 0;
	long long ChangeInOnes = 0;
	long long ChangeInQuarters = 0;
	long long ChangeInDimes = 0;
	long long ChangeInNickels = 0;
	long long ChangeInPennies = 0;

	printf("Welcome to Change Counter by <Daryl Susilo>!\n");

	printf("Please enter the total amount of purchase: $");

	scanf("%lf", &costInDollars);

	costInDollars = floor(costInDollars * 100.0 + 0.5) / 100.0;

	printf("$%.2lf \n", costInDollars);

	printf("Please enter amount of money tendered: $");

	scanf("%lf", &tenderInDollars);

	tenderInDollars = floor(tenderInDollars * 100.0 + 0.5) / 100.0;

	printf("$%.2lf \n\n\n", tenderInDollars);

	ChangeInDollarsInPennies = floor((tenderInDollars - costInDollars) * 100 + 0.5);

	ChangeInDollars = tenderInDollars - costInDollars;

	if (ChangeInDollars < 0)
	{
		printf("You owe: $%.2lf \n", ChangeInDollars * -1);

		//Change number in dollars in pennies into a positive.
		ChangeInDollarsInPennies *= -1;
	}
	
	else
	{
		printf("Your change is: $%.2lf \n", tenderInDollars - costInDollars);
	}

	printf("--------------------------------------------------------------- \n");

	ChangeInTwenty = (ChangeInDollarsInPennies / PENNIESINTWENTY);

	//Count how much is left after number of twenties have been subtracted
	ChangeInDollarsInPennies %= PENNIESINTWENTY;

	ChangeInTens = (ChangeInDollarsInPennies / PENNIESINTENS);

	//Count how much is left after number of tens have been subtracted
	ChangeInDollarsInPennies %= PENNIESINTENS;

	ChangeInFives = (ChangeInDollarsInPennies / PENNIESINFIVES);

	//Count how much is left after number of fives have been subtracted
	ChangeInDollarsInPennies %= PENNIESINFIVES;

	ChangeInOnes = (ChangeInDollarsInPennies / PENNIESINONES);

	//Count how much is left after number of ones have been subtracted
	ChangeInDollarsInPennies %= PENNIESINONES;

	ChangeInQuarters = (ChangeInDollarsInPennies / PENNIESINQUARTERS);

	//Count how much is left after number of quarters have been subtracted
	ChangeInDollarsInPennies %= PENNIESINQUARTERS;

	ChangeInDimes = (ChangeInDollarsInPennies / PENNIESINDIMES);

	//Count how much is left after number of dimes have been subtracted
	ChangeInDollarsInPennies %= PENNIESINDIMES;

	ChangeInNickels = (ChangeInDollarsInPennies / PENNIESINNICKELS);

	//Count how much is left after number of nickels have been subtracted
	ChangeInDollarsInPennies %= PENNIESINNICKELS;
     
	ChangeInPennies = (ChangeInDollarsInPennies / PENNIESINPENNIES);

	//Count how much is left after number of pennies have been subtracted
	ChangeInDollarsInPennies %= PENNIESINPENNIES;

	printf("Twenties : %lld \nTens : %lld \n", ChangeInTwenty, ChangeInTens);
	printf("Fives : %lld \nOnes : %lld \n", ChangeInFives, ChangeInOnes);
	printf("Quarters : %lld \nDimes : %lld \n", ChangeInQuarters, ChangeInDimes);
	printf("Nickels : %lld \nPennies %lld \n", ChangeInNickels, ChangeInPennies);
	printf("--------------------------------------------------------------- \n");
	printf("Thank you for Using Change Counter!");
	getchar();
	getchar();
	return EXIT_SUCCESS;
}




	