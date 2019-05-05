#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double waterUse, unpaidBal, totalCharge;
	int demandCharge = 35;

	cout << "Please enter water consumption based from your meter readings: " << endl;
	cin >> waterUse;
	cout << "Please enter your unpaid balance: " << endl;
	cin >> unpaidBal;

	if(unpaidBal > 0) {
		totalCharge = demandCharge + (waterUse * 1.10) + 20;
		cout << "Your total water bill is: " << totalCharge << endl;
	}
	else {
		totalCharge = demandCharge + (waterUse * 1.10);
		cout << "Your total water bill is: " << totalCharge << endl;
	}
	getch();
	return 0;
}