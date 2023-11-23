#include <iostream>
using namespace std;

int main()
{
	double tc, price, apstax, discount;
	int	quantity;
	cout << "Enter price of product = " << endl;
	cin >> price;
	cout << "Enter it's quantity = " << endl;
	cin >> quantity;
	if (quantity >= 10)
	{
		price = 0.9 * quantity;
		cout << price << endl;
	}
	apstax = quantity / price * 100;
	tc = price + apstax;
	cout << "Your total cost of product = " << tc << endl;
	for (int product = 1; product <= quantity; product++)
	{
		tc = product * (price + apstax);
		cout << "Total cost of your products = " << tc << endl;
	}
	return 0;
}