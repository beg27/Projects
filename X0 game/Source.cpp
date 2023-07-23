#include <iostream>
#include <ctime>
#include <random>
using namespace std;

char plansa[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

void afisare_plansa()
{
	cout << "   " << "   |   " << "   |   " << endl;
	cout << "   " << plansa[0] << "  |   " << plansa[1] << "  |   " << plansa[2] << endl;
	cout << "--------------------" << endl;
	cout << "   " << "   |   " << "   |   " << endl;
	cout << "   " << plansa[3] << "  |   " << plansa[4] << "  |   " << plansa[5] << endl;
	cout << "--------------------" << endl;
	cout << "   " << "   |   " << "   |   " << endl;
	cout << "   " << plansa[6] << "  |   " << plansa[7] << "  |   " << plansa[8] << endl;

}
void alegere_jucatorX()
{
	while (true)
	{
		cout << "Alege o pozitie inte (1-9): ";
		int alegere;
		cin >> alegere;
		alegere--;
		if (alegere < 0 || alegere>9)
		{
			cout << "Optiune gresita! Va rog alegeti o pozitie intre 1 si 9." << endl;
		}
		else if (plansa[alegere] != ' ')
		{
			cout << "Va rog alegeti o pozitie libera" << endl;
		}
		else
		{
			plansa[alegere] = 'X';
			break;
		}
	}
}
void alegere_jucatorO()
{
	while (true)
	{
		cout << "Alege o pozitie inte (1-9): ";
		int alegere;
		cin >> alegere;
		alegere--;
		if (alegere < 0 || alegere>9)
		{
			cout << "Optiune gresita! Va rog alegeti o pozitie intre 1 si 9." << endl;
		}
		else if (plansa[alegere] != ' ')
		{
			cout << "Va rog alegeti o pozitie libera" << endl;
		}
		else
		{
			plansa[alegere] = 'O';
			break;
		}
	}

}
void alegere_calculator()
{
	srand(time(0));
	int alegere;
	do {
		alegere = rand() % 10;
	} while (plansa[alegere] != ' ');
	plansa[alegere] = 'O';
}
int numarare_plansa(char simbol)
{
	int total = 0;
	int i;
	for (i = 0; i < 9; i++)
	{
		if (plansa[i] == simbol)
			total = total + 1;
	}
	return total;
}
char verificare_castigator()
{   //verificare pe orizontala
	if (plansa[0] == plansa[1] && plansa[1] == plansa[2] && plansa[0] != 0)
		return plansa[0];
	if (plansa[3] == plansa[4] && plansa[4] == plansa[5] && plansa[3] != 0)
		return plansa[3];
	if (plansa[6] == plansa[7] && plansa[7] == plansa[8] && plansa[6] != 0)
		return plansa[6];
	//verificare pe verticala
	if (plansa[0] == plansa[3] && plansa[3] == plansa[6] && plansa[0] != 0)
		return plansa[0];
	if (plansa[1] == plansa[4] && plansa[4] == plansa[7] && plansa[1] != 0)
		return plansa[1];
	if (plansa[2] == plansa[5] && plansa[5] == plansa[8] && plansa[2] != 0)
		return plansa[2];
	//verificare pe diagonala
	if (plansa[0] == plansa[4] && plansa[4] == plansa[8] && plansa[0] != ' ')
		return plansa[0];
	if (plansa[2] == plansa[4] && plansa[4] == plansa[6] && plansa[2] != ' ')
		return plansa[2];

	if (numarare_plansa('X') + numarare_plansa('O') < 9)
		return'C';
	else
		return 'E';

}
void calculator_vs_jucator()
{
	string nume_jucator;
	char castigator;
	cout << "Introduceti numele jucatorului: ";
	cin >> nume_jucator;
	while (true)
	{
		system("cls");
		afisare_plansa();
		if (numarare_plansa('X') == numarare_plansa('O'))
		{
			cout << "Este randul lui " << nume_jucator << endl;
			alegere_jucatorX();
		}
		else
		{
			alegere_calculator();
		}
		castigator = verificare_castigator();
		if (castigator == 'X')
		{
			system("cls");
			afisare_plansa();
			cout << nume_jucator << " este castigator!!!" << endl;
			break;

		}
		else if (castigator == 'O')
		{
			system("cls");
			afisare_plansa();
			cout << "Calculatorul este castigator!!!" << endl;
			break;
		}
		else if (castigator == 'E')
		{
			cout << "Este egalitate!!!" << endl;
			break;
		}
	}
}
void jucator1_vs_jucator2()
{
	string jucator_X, jucator_O;
	cout << "Introduceti numele jucatorului X: ";
	cin >> jucator_X;
	cout << "Introduceti numele jucatorului O: ";
	cin >> jucator_O;
	while (true) {
		system("cls");
		afisare_plansa();
		if (numarare_plansa('X') == numarare_plansa('O'))
		{
			cout << "Este randul lui " << jucator_X << endl;
			alegere_jucatorX();
		}
		else {
			cout << "Este randul lui " << jucator_O << endl;
			alegere_jucatorO();
		}

		char castigator = verificare_castigator();

		if (castigator == 'X')
		{
			system("cls");
			afisare_plansa();
			cout << jucator_X << " este castigator!!!" << endl;
			break;

		}
		else if (castigator == 'O')
		{
			system("cls");
			afisare_plansa();
			cout << jucator_O << " este castigator!!!" << endl;
			break;
		}
		else if (castigator == 'E')
		{
			cout << "Este egalitate!!!" << endl;
			break;
		}
	}
}
void resetare_plansa()
{
	for (int i = 0; i < 9; i++)
	{
		plansa[i] = ' ';
	}
}
int main()
{
	int mod;
	do
	{
		cout << endl;
		cout << "1. Calculator vs Jucator" << endl;
		cout << "2. Jucator vs Jucator" << endl;
		cout << "0. Iesire din joc" << endl;
		cout << "Alege modul jocului: ";
		cin >> mod;

		switch (mod)
		{
		case 1:
			calculator_vs_jucator();
			break;
		case 2:
			jucator1_vs_jucator2();
			break;
		case 0:
			cout << "La revedere! Multumim pentru joc." << endl;
			break;
		default:
			cout << "Selectati un mod de joc valid!!!" << endl;
			break;
		}
		resetare_plansa();

	} while (mod != 0);
	return 0;
}