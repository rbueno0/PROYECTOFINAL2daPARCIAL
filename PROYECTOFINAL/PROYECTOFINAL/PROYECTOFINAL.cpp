#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>
#include<vector>
#include<array>


#define BLACK "\x1b[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"
#define LIGHT_WHITE "\x1b[97m"


#define LIGHT_WHITEF "\x1b[107m"
#define CYANF "\x1b[46m"
#define REDF "\x1b[41m"
#define DEFAULTF "\x1b[49m"
#define BLUEF "\x1b[44m"
#define BLACKF "\x1b[40m"

using namespace std;
void pausa()
{
	cout << " ";
	getwchar();
	getwchar();
}

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

int convertirBinarioaDecimal(long long);
long long n;

int convertirBinarioaDecimal(long long)
{
	int numeroDecimal = 0, i = 0, recordatorio;
	while (n != 0)
	{
		recordatorio = n % 10;
		n /= 10;
		numeroDecimal += recordatorio * pow(2, i);
		++i;
	}
	return numeroDecimal;
}


int main()
{
	bool Bandera = false;
	char Menu;
	//binario a decimal
	long long v[50], x, i = 0;
	//texto binario
	char texto[300];
	int contador = 0, num, resul, cerosunos[20], a;
	int clrscr();
	int par; string resus, repu;
	vector <string> bina;
	vector <string> result;
	int par2; string resus2, repu2;
	vector <string> binar;
	vector <string> resulta;

	system("cls");
	gotoxy(49, 14);
	cout << GREEN " Conversiones Binarias";
	gotoxy(48, 15);
	cout << REDF "                         " RESET;
	gotoxy(48, 13);
	cout << REDF "                         " RESET;
	gotoxy(48, 14);
	cout << REDF "  " RESET;
	gotoxy(71, 14);
	cout << REDF "  " RESET;
	gotoxy(0, 29); cout << "Presiona una tecla para continuar...";
	gotoxy(36, 29); getwchar();
	do
	{
		system("cls");
		system("color 1F");
		//Linea Horizontal blanca 1 - Separacion
		gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
		// TITULO DEL PROGRAMA XD
		gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
		//Linea vertical blanca 1 - Separacion
		gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
		//Linea vertical blanca 2 - Separacion
		gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
		//Linea Horizontal blanca 3 - Separacion
		gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
		//Linea vertical blanca 3 - Separacion
		gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
		//Linea Horizontal blanca 2 - Separacion
		gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
		//apartado del menu
		gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
		gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
		gotoxy(2, 5); cout << "                    ";
		gotoxy(2, 6); cout << " ================== ";
		gotoxy(2, 7); cout << "        Menu        ";
		gotoxy(2, 8); cout << " ================== ";
		gotoxy(2, 9); cout << "                    ";
		gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
		//NOTAS
		gotoxy(2, 11); cout << "                    ";
		gotoxy(2, 12); cout << "       NOTA:        ";
		gotoxy(2, 13); cout << "                    ";
		gotoxy(2, 14); cout << "      OPCIONES      ";
		gotoxy(2, 15); cout << "       3 4 5        ";
		gotoxy(2, 16); cout << "                    ";
		gotoxy(2, 17); cout << " Son de un solo uso ";
		gotoxy(2, 18); cout << " Por defecto de la  ";
		gotoxy(2, 19); cout << " acumulacion de     ";
		gotoxy(2, 20); cout << " valores asi que    ";
		gotoxy(2, 21); cout << " para volver a usar ";
		gotoxy(2, 22); cout << " favor de reiniciar ";
		gotoxy(2, 23); cout << " el programa        ";
		gotoxy(2, 24); cout << "                    ";
		gotoxy(2, 25); cout << "      OPCIONES      ";
		gotoxy(2, 26); cout << "      1  Y  2       ";
		gotoxy(2, 27); cout << "   Funcionan Bien   ";
		gotoxy(2, 28); cout << "                    ";
		//Menu
		gotoxy(60, 4); cout << LIGHT_WHITEF "                      ";
		gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF"  ";
		gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "       Menu       " LIGHT_WHITEF"  ";
		gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF "  ";
		gotoxy(60, 8); cout << LIGHT_WHITEF "                      ";
		//Opciones
		gotoxy(48, 10); cout << BLUEF LIGHT_WHITE "1 .- DECIMAL A BINARIO" RESET;
		gotoxy(48, 11); cout << BLUEF LIGHT_WHITE "2 .- BINARIO A DECIMAL" RESET;
		gotoxy(48, 12); cout << BLUEF LIGHT_WHITE "3 .- BINARIO OCTAL " RESET;
		gotoxy(48, 13); cout << BLUEF LIGHT_WHITE "4 .- BINARIO HEXADECIMAL " RESET;
		gotoxy(48, 14); cout << BLUEF LIGHT_WHITE "5 .- TEXTO A BINARIO " RESET;
		gotoxy(48, 15); cout << BLUEF LIGHT_WHITE "6 .- SALIR DEL PROGRAMA" RESET;
		gotoxy(47, 17); cout << BLUEF LIGHT_WHITE "Ingresa una opcion: "; cin >> Menu;

		switch (Menu)
		{
		case '1':
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                     ";
			gotoxy(2, 6); cout << " =================== ";
			gotoxy(2, 7); cout << "  DECIMAL A BINARIO  ";
			gotoxy(2, 8); cout << " =================== ";
			gotoxy(2, 9); cout << "                     ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                         ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =================== " LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  DECIMAL A BINARIO  " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =================== " LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                         ";
			gotoxy(32, 11); cout << BLUEF LIGHT_WHITE "Ingresa el numero decimal a convertir: ";
			gotoxy(72, 11); cin >> x;

			gotoxy(33, 13); cout << "En binario es: ";
			do
			{
				v[i] = x % 2;
				x = x / 2;
				i++;
			} while (x != 0);
			for (long long t = i; t < 50; t++)
			{
				v[t] = 9;
			}
			gotoxy(48, 13);
			for (i = 49; i >= 0; i--)
			{
				if (v[i] == 0)
					cout << v[i];
				if (v[i] == 1)
					cout << v[i];
			}
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";

			pausa();
			break;
		case '2':
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                     ";
			gotoxy(2, 6); cout << " =================== ";
			gotoxy(2, 7); cout << "  BINARIO A DECIMAL  ";
			gotoxy(2, 8); cout << " =================== ";
			gotoxy(2, 9); cout << "                     ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;

			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                         ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =================== " LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  BINARIO A DECIMAL  " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =================== " LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                         ";
			gotoxy(32, 11); cout << BLUEF LIGHT_WHITE "Ingresa el numero binario a convertir: ";
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";

			gotoxy(72, 11); cin >> n;
			gotoxy(49, 13);  cout << "En binario = " << convertirBinarioaDecimal(n) << " en decimal";
			pausa();
			break;
		case '3':
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                    ";
			gotoxy(2, 6); cout << "  ===============   ";
			gotoxy(2, 7); cout << "   BINARIO OCTAL    ";
			gotoxy(2, 8); cout << "  ===============   ";
			gotoxy(2, 9); cout << "                    ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
			//NOTAS
			gotoxy(2, 11); cout << "                    ";
			gotoxy(2, 12); cout << "       NOTA:        ";
			gotoxy(2, 13); cout << "                    ";
			gotoxy(2, 14); cout << "Para utilizar esta  ";
			gotoxy(2, 15); cout << "opcion mas de 2     ";
			gotoxy(2, 16); cout << "veces, porfavor     ";
			gotoxy(2, 17); cout << "reinicia el         ";
			gotoxy(2, 18); cout << "programa...         ";
			gotoxy(2, 19); cout << "                    ";
			gotoxy(2, 20); cout << "Recuerda leer tu    ";
			gotoxy(2, 21); cout << "codigo de izquierda ";
			gotoxy(2, 22); cout << "a derecha:          ";
			gotoxy(2, 23); cout << " -->(010 111 100)   ";
			gotoxy(2, 24); cout << "                    ";
			gotoxy(2, 25); cout << "                    ";
			gotoxy(2, 26); cout << "                    ";
			gotoxy(2, 27); cout << "                    ";
			gotoxy(2, 28); cout << "                    ";
			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                     ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =============== " LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  BINARIO OCTAL  " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =============== " LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                     ";
			gotoxy(32, 12); cout << BLUEF LIGHT_WHITE "¿Cuantos grupos de 3 digitos tiene tu codigo?:  ";
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
			gotoxy(79, 12); cin >> par;


			for (int c = 0; c < par; c++) {
				system("cls");
				system("color 1F");
				//Linea Horizontal blanca 1 - Separacion
				gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
				// TITULO DEL PROGRAMA XD
				gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
				//Linea vertical blanca 1 - Separacion
				gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea vertical blanca 2 - Separacion
				gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea Horizontal blanca 3 - Separacion
				gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
				//Linea vertical blanca 3 - Separacion
				gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea Horizontal blanca 2 - Separacion
				gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
				//apartado del menu
				gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
				gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
				gotoxy(2, 5); cout << "                    ";
				gotoxy(2, 6); cout << "  ===============   ";
				gotoxy(2, 7); cout << "   BINARIO OCTAL    ";
				gotoxy(2, 8); cout << "  ===============   ";
				gotoxy(2, 9); cout << "                    ";
				gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
				//NOTAS
				gotoxy(2, 11); cout << "                    ";
				gotoxy(2, 12); cout << "       NOTA:        ";
				gotoxy(2, 13); cout << "                    ";
				gotoxy(2, 14); cout << "Recuerda leer tu    ";
				gotoxy(2, 15); cout << "codigo de izquierda ";
				gotoxy(2, 16); cout << "a derecha:          ";
				gotoxy(2, 17); cout << " -->(010 111 100)   ";
				gotoxy(2, 18); cout << "                    ";
				gotoxy(2, 19); cout << "Si tu codigo carece ";
				gotoxy(2, 20); cout << "de caracteres para  ";
				gotoxy(2, 21); cout << "completar grupos de ";
				gotoxy(2, 22); cout << "3, agrega ceros (0) ";
				gotoxy(2, 23); cout << "al principio de tu  ";
				gotoxy(2, 24); cout << "codigo, ejemplo:    ";
				gotoxy(2, 25); cout << "   ( 10 111 100)    ";
				gotoxy(2, 26); cout << "   (010 111 100)    ";
				gotoxy(2, 27); cout << "                    ";
				gotoxy(2, 28); cout << "                    ";
				//Menu
				gotoxy(60, 4); cout << LIGHT_WHITEF "                     ";
				gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =============== " LIGHT_WHITEF"  ";
				gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  BINARIO OCTAL  " LIGHT_WHITEF"  ";
				gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " =============== " LIGHT_WHITEF "  ";
				gotoxy(60, 8); cout << LIGHT_WHITEF "                     ";
				gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
				gotoxy(33, 13); cout << c + 1 << ": " << "Ingresa 3 digitos de tu codigo: " << endl;
				gotoxy(69, 13); cin >> repu;
				bina.push_back(repu);
				if (bina[c] == "000") {
					result.push_back("0");
				}
				if (bina[c] == "001") {
					result.push_back("1");
				}
				if (bina[c] == "010") {
					result.push_back("2");
				}
				if (bina[c] == "011") {
					result.push_back("3");
				}
				if (bina[c] == "100") {
					result.push_back("4");
				}
				if (bina[c] == "101") {
					result.push_back("5");
				}
				if (bina[c] == "110") {
					result.push_back("6");
				}
				if (bina[c] == "111") {
					result.push_back("7");
				}
				resus = resus + result[c];
			}
			gotoxy(32, 17); cout << " El codigo Octal es: " << resus;

			pausa();
			break;
		case '4':
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                     ";
			gotoxy(2, 6); cout << " =================== ";
			gotoxy(2, 7); cout << " BINARIO HEXADECIMAL ";
			gotoxy(2, 8); cout << " =================== ";
			gotoxy(2, 9); cout << "                     ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
			//NOTAS
			gotoxy(2, 11); cout << "                    ";
			gotoxy(2, 12); cout << "       NOTA:        ";
			gotoxy(2, 13); cout << "                    ";
			gotoxy(2, 14); cout << "Para utilizar esta  ";
			gotoxy(2, 15); cout << "opcion mas de 2     ";
			gotoxy(2, 16); cout << "veces, porfavor     ";
			gotoxy(2, 17); cout << "reinicia el         ";
			gotoxy(2, 18); cout << "programa...         ";
			gotoxy(2, 19); cout << "                    ";
			gotoxy(2, 20); cout << "Recuerda leer tu    ";
			gotoxy(2, 21); cout << "codigo de izquierda ";
			gotoxy(2, 22); cout << "a derecha:          ";
			gotoxy(2, 23); cout << "-->(0001 1000 1010) ";
			gotoxy(2, 24); cout << "                    ";
			gotoxy(2, 25); cout << "                    ";
			gotoxy(2, 26); cout << "                    ";
			gotoxy(2, 27); cout << "                    ";
			gotoxy(2, 28); cout << "                    ";
			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                           ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ===================== " LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  BINARIO HEXADECIMAL  " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ===================== " LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                           ";
			gotoxy(32, 12); cout << BLUEF LIGHT_WHITE "¿Cuantos grupos de 4 digitos tiene tu codigo?: "; gotoxy(79, 12); cin >> par2;
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";

			for (int d = 0; d < par2; d++) {
				system("cls");
				system("color 1F");
				//Linea Horizontal blanca 1 - Separacion
				gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
				// TITULO DEL PROGRAMA XD
				gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
				//Linea vertical blanca 1 - Separacion
				gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea vertical blanca 2 - Separacion
				gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea Horizontal blanca 3 - Separacion
				gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
				//Linea vertical blanca 3 - Separacion
				gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
				//Linea Horizontal blanca 2 - Separacion
				gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
				//apartado del menu
				gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
				gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
				gotoxy(2, 5); cout << "                     ";
				gotoxy(2, 6); cout << " =================== ";
				gotoxy(2, 7); cout << " BINARIO HEXADECIMAL ";
				gotoxy(2, 8); cout << " =================== ";
				gotoxy(2, 9); cout << "                     ";
				gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
				//NOTAS
				gotoxy(2, 11); cout << "                    ";
				gotoxy(2, 12); cout << "       NOTA:        ";
				gotoxy(2, 13); cout << "                    ";
				gotoxy(2, 14); cout << "Recuerda leer tu    ";
				gotoxy(2, 15); cout << "codigo de izquierda ";
				gotoxy(2, 16); cout << "a derecha:          ";
				gotoxy(2, 17); cout << "-->(0001 1000 1010) ";
				gotoxy(2, 18); cout << "                    ";
				gotoxy(2, 19); cout << "Si tu codigo carece ";
				gotoxy(2, 20); cout << "de caracteres para  ";
				gotoxy(2, 21); cout << "completar grupos de ";
				gotoxy(2, 22); cout << "4, agrega ceros (0) ";
				gotoxy(2, 23); cout << "al principio de tu  ";
				gotoxy(2, 24); cout << "codigo, ejemplo:    ";
				gotoxy(2, 25); cout << "  ( 001 1000 1010)  ";
				gotoxy(2, 26); cout << "  (0001 1000 1010)  ";
				gotoxy(2, 27); cout << "                    ";
				gotoxy(2, 28); cout << "                    ";
				//Menu
				gotoxy(60, 4); cout << LIGHT_WHITEF "                           ";
				gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ===================== " LIGHT_WHITEF"  ";
				gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  BINARIO HEXADECIMAL  " LIGHT_WHITEF"  ";
				gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ===================== " LIGHT_WHITEF "  ";
				gotoxy(60, 8); cout << LIGHT_WHITEF "                           ";
				gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
				gotoxy(33, 13); cout << d + 1 << ": " << "Ingresa 4 digitos de tu codigo: ";
				gotoxy(69, 13); cin >> repu2;
				binar.push_back(repu2);
				if (binar[d] == "0000") {
					resulta.push_back("0");
				}
				if (binar[d] == "0001") {
					resulta.push_back("1");
				}
				if (binar[d] == "0010") {
					resulta.push_back("2");
				}
				if (binar[d] == "0011") {
					resulta.push_back("3");
				}
				if (binar[d] == "0100") {
					resulta.push_back("4");
				}
				if (binar[d] == "0101") {
					resulta.push_back("5");
				}
				if (binar[d] == "0110") {
					resulta.push_back("6");
				}
				if (binar[d] == "0111") {
					resulta.push_back("7");
				}
				if (binar[d] == "1000") {
					resulta.push_back("8");
				}
				if (binar[d] == "1001") {
					resulta.push_back("9");
				}
				if (binar[d] == "1010") {
					resulta.push_back("A");
				}
				if (binar[d] == "1011") {
					resulta.push_back("B");
				}
				if (binar[d] == "1100") {
					resulta.push_back("C");
				}
				if (binar[d] == "1101") {
					resulta.push_back("D");
				}
				if (binar[d] == "1110") {
					resulta.push_back("E");
				}
				if (binar[d] == "1111") {
					resulta.push_back("F");
				}
				resus2 = resus2 + resulta[d];
			}
			gotoxy(32, 17); cout << " El codigo Hexadecimal es: " << resus2;

			pausa();
			break;
		case '5':
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                    ";
			gotoxy(2, 6); cout << " =================  ";
			gotoxy(2, 7); cout << "  TEXTO A BINARIO   ";
			gotoxy(2, 8); cout << " =================  ";
			gotoxy(2, 9); cout << "                    ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
			//NOTAS
			gotoxy(2, 11); cout << "                    ";
			gotoxy(2, 12); cout << "       NOTA:        ";
			gotoxy(2, 13); cout << "                    ";
			gotoxy(2, 14); cout << "Para utilizar esta  ";
			gotoxy(2, 15); cout << "opcion mas de 2     ";
			gotoxy(2, 16); cout << "veces, porfavor     ";
			gotoxy(2, 17); cout << "reinicia el         ";
			gotoxy(2, 18); cout << "programa...         ";
			gotoxy(2, 19); cout << "                    ";
			gotoxy(2, 20); cout << "   Esta opcion      ";
			gotoxy(2, 21); cout << "   solo soporta     ";
			gotoxy(2, 22); cout << "   9 letras.        ";
			gotoxy(2, 23); cout << " Porfavor no        ";
			gotoxy(2, 24); cout << " excedas el limite  ";
			gotoxy(2, 25); cout << "                    ";
			gotoxy(2, 26); cout << "                    ";
			gotoxy(2, 27); cout << "                    ";
			gotoxy(2, 28); cout << "                    ";
			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                       ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ================= " LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "  TEXTO A BINARIO  " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE " ================= " LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                       ";
			gotoxy(32, 11); cout << BLUEF LIGHT_WHITE "Ingresa el texto a convertir a binario:  ";
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
			gotoxy(73, 11);  cin >> (texto);
			gotoxy(33, 13); while (contador < strlen(texto))
			{
				a = 1;
				num = texto[contador];
				while (num > 0)
				{
					resul = num % 2;
					if (resul == 0)
					{
						cerosunos[a] = 0;
						a = a + 1;
					}
					else
					{
						cerosunos[a] = 1;
						a = a + 1;
						num = num - 1;
					}
					num = num / 2;
				}
				a = a - 1;
				while (a > 0)
				{
					printf("%i", cerosunos[a]);
					a = a - 1;
				}
				printf(" ");
				contador = contador + 1;
			}
			pausa();
			break;
		case '6':
			Bandera = true;
			break;
		default:
			system("cls");
			system("color 1F");
			//Linea Horizontal blanca 1 - Separacion
			gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			// TITULO DEL PROGRAMA XD
			gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
			//Linea vertical blanca 1 - Separacion
			gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea vertical blanca 2 - Separacion
			gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 3 - Separacion
			gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
			//Linea vertical blanca 3 - Separacion
			gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
			//Linea Horizontal blanca 2 - Separacion
			gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
			//apartado del menu
			gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  GREEN " ONLINE " RESET;
			gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
			gotoxy(2, 5); cout << "                    ";
			gotoxy(2, 6); cout << " ================== ";
			gotoxy(2, 7); cout << "        Menu        ";
			gotoxy(2, 8); cout << " ================== ";
			gotoxy(2, 9); cout << "                    ";
			gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
			//Menu
			gotoxy(60, 4); cout << LIGHT_WHITEF "                      ";
			gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF"  ";
			gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "       Menu       " LIGHT_WHITEF"  ";
			gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF "  ";
			gotoxy(60, 8); cout << LIGHT_WHITEF "                      ";
			//Opciones
			gotoxy(48, 10); cout << BLUEF LIGHT_WHITE "OPCION NO DISPONIBLE" RESET;
			gotoxy(48, 11); cout << BLUEF LIGHT_WHITE "PORFAVOR INGRESA OTRA OPCION" RESET;
			gotoxy(48, 12); cout << BLUEF LIGHT_WHITE "GRACIAS POR TU COMPRENSION   ";
			gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para continuar...";
			pausa();
			break;
		}
		/* //pausa
		gotoxy(25, 28); pausa(); */

	} while (Bandera != true);
	system("cls");
	system("color 1F");
	//Linea Horizontal blanca 1 - Separacion
	gotoxy(0, 0); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
	// TITULO DEL PROGRAMA XD
	gotoxy(30, 1); cout << BLUEF LIGHT_WHITE " PROYECTO PROGRAMACION/LOGICA MATEMATICA: CONVERSIONES BINARIAS";
	//Linea vertical blanca 1 - Separacion
	gotoxy(0, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(0, 28); cout << LIGHT_WHITEF "  " RESET;
	//Linea vertical blanca 2 - Separacion
	gotoxy(22, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(22, 28); cout << LIGHT_WHITEF "  " RESET;
	//Linea Horizontal blanca 3 - Separacion
	gotoxy(0, 29); cout << LIGHT_WHITEF "                                                                                                                        " RESET;
	//Linea vertical blanca 3 - Separacion
	gotoxy(118, 1); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 2); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 3); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 4); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 5); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 6); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 7); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 8); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 9); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 10); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 11); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 12); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 13); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 14); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 15); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 16); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 17); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 18); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 19); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 20); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 21); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 22); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 23); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 24); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 25); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 26); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 27); cout << LIGHT_WHITEF "  " RESET; gotoxy(118, 28); cout << LIGHT_WHITEF "  " RESET;
	//Linea Horizontal blanca 2 - Separacion
	gotoxy(0, 2); cout << LIGHT_WHITEF "                                                                                                                        \n" RESET;
	//apartado del menu
	gotoxy(2, 3); cout << " PROGRAMA " LIGHT_WHITEF "  " RESET  RED " OFFLINE " RESET;
	gotoxy(2, 4); cout << LIGHT_WHITEF "                    " RESET;
	gotoxy(2, 5); cout << "                    ";
	gotoxy(2, 6); cout << " ================== ";
	gotoxy(2, 7); cout << "      CREDITOS      ";
	gotoxy(2, 8); cout << " ================== ";
	gotoxy(2, 9); cout << "                    ";
	gotoxy(2, 10); cout << LIGHT_WHITEF "                    " RESET;
	//Menu
	gotoxy(60, 4); cout << LIGHT_WHITEF "                      ";
	gotoxy(60, 5); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF"  ";
	gotoxy(60, 6); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "     CREDITOS     " LIGHT_WHITEF"  ";
	gotoxy(60, 7); cout << LIGHT_WHITEF "  " BLUEF LIGHT_WHITE "==================" LIGHT_WHITEF "  ";
	gotoxy(60, 8); cout << LIGHT_WHITEF "                      ";
	//Opciones
	gotoxy(36, 10); cout << BLUEF LIGHT_WHITE "    Anguiano Castillo Carlos David - Opcion Binario Hexadecimal" RESET;
	gotoxy(36, 11); cout << BLUEF LIGHT_WHITE "       Bueno Siller Roberto Ramses - Estructura del programa" RESET;
	gotoxy(36, 12); cout << BLUEF LIGHT_WHITE "  Fernandez Santiago Aurelio Adair - Opcion Binario Octal" RESET;
	gotoxy(36, 13); cout << BLUEF LIGHT_WHITE "      Meneses Garcia Oscar Esteban - Opcion Texto Binario" RESET;
	gotoxy(36, 14); cout << BLUEF LIGHT_WHITE "            Nolazco Lagunas Carlos - Opcion Binario a Decimal" RESET;
	gotoxy(36, 15); cout << BLUEF LIGHT_WHITE "Villanueva Santibanez Angel Manuel - Opcion Decimal a binario" RESET;
	gotoxy(24, 28); cout << BLUEF LIGHT_WHITE "Presiona una tecla para cerrar completamente el programa..."; pausa();

	system("cls");
	system("color 04");
	return 0;
}
