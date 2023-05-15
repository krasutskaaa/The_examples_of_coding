#include <iostream>
#include <iomanip>

using namespace std;

void print_card(int card, int suit)
{
	cout << "\n\n";

	cout << char(201);

	for (int i = 0; i < 18; i++)
	{
		cout << char(205);
	}
	cout << char(187) << "\n";

	for (int i = 0; i < 14; i++)
	{
		
		if (i == 1 ) {
			cout << char(186);
			cout << setw(3);
			switch (card)
			{
			case 1:
				cout << 6;
				break;
			case 2:
				cout << 7;
				break;
			case 3:
				cout << 8;
				break;
			case 4:
				cout << 9;
				break;
			case 5:
				cout << 10;
				break;
			case 6:
				cout << "J";
				break;
			case 7:
				cout << "Q";
				break;
			case 8:
				cout << "K";
				break;
			case 9:
				cout << "A";
				break;
			}
			cout << setw(16) << char(186) << "\n";
		}
		else if (i == 6) {
			cout << char(186);
			switch (suit)
			{
			case 1:
				cout << setw(13) << "DIAMONDS" << setw(6) << char(186) << "\n";
				break;
			case 2:
				cout << setw(12) << "HEARTS" << setw(7) << char(186) << "\n";
				break;
			case 3:
				cout << setw(11) <<"CLUBS" << setw(8) << char(186) << "\n";
				break;
			case 4:
				cout << setw(12) << "SPADES" << setw(7) << char(186) << "\n";
				break;
			}
			
		}
		else if (i == 12) {
			cout << char(186);
			cout << setw(16);
			switch (card)
			{
			case 1:
				cout << 6;
				break;
			case 2:
				cout << 7;
				break;
			case 3:
				cout << 8;
				break;
			case 4:
				cout << 9;
				break;
			case 5:
				cout << 10;
				break;
			case 6:
				cout << "J";
				break;
			case 7:
				cout << "Q";
				break;
			case 8:
				cout << "K";
				break;
			case 9:
				cout << "A";
				break;
		    }
			cout << setw(3) << char(186) << "\n";
		}
		else {
			cout << char(186);
			cout << setw(19) << char(186) << "\n";
		}
		
	}

	cout << char(200);

	for (int i = 0; i < 18; i++)
	{
		cout << char(205);
	}

	cout << char(188) << "\n";
}


int main()
{
	int card, suit;
	cout << "Welcome to the program for outputing playing card.\n\n";
	cout << "Please enter the number of card you want to see on the screen:\n";
	cout << "\n1 - six\n2 - seven\n3 - eight\n4 - nine\n5 - ten\n6 - Jack\n7 - Queen\n8 - King\n9 - Ace\n\n";
	cin >> card;
	cout << "\nPlease enter the number of suit:\n";
	cout << "\n1 - diamonds\n2 - hearts\n3 - clubs\n4 - spades\n\n";
	cin >> suit;

	print_card(card, suit);
	cout << "\n\nTHAT'S ALL!!!\n\n";
	return 0;

}
