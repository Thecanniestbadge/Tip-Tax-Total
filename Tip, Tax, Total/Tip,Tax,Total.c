// Programmer:		Thecanniestbadge
// Date:			5/24/2023
// Program Name:	Tip, Tax, Total
// Description:		Write a program that displays some basic information about tip and tax percentages, asks the user for the amount of the bill at a restaurant, 
//					and then calculates and displays a tip based on 15% of the bill (not including the tax), tax based on 7% of the bill (not including the tip) 
//					and the total (which is the amount of the bill plus the tip plus the tax).
#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userBill;
	double userTip;
	double userTotal;
	double userTax;
	const double userTipPercent = 0.15; // 15%
	const double userTaxPercent = 0.07; // 7%
	// *** Your program goes here ***
	// Standard customary for tips and tax rate
	printf("It is customary to tip 15 percent,\n");
	printf("and the tax rate is 7 percent.\n");
	printf("\n"); // Blank line
	
	// *** INPUT ***
	printf("Enter the amount of the bill: $");
	scanf("%lf", &userBill);
	printf("\n"); // Blank line 

	// *** PROCESSING ***
	// takes the bill and muliplys the tip percent and the tax percent and comes out with a total amount
	userTip = userBill * userTipPercent;
	userTax = userBill * userTaxPercent;
	userTotal = userBill + userTax + userTip;


	// *** OUTPUT ***
	printf("Based on a bill of $%.2f, the calculated amounts are:\n", userBill);
	printf("  Tip = $%.2f\n", userTip);
	printf("  Tax = $%.2f\n", userTax);
	printf("Total = $%.2f\n", userTotal);

	printf("\n"); // Blank line



	return 0;
} // end main()