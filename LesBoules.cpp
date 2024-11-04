// LesBoules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	int      nbHasard            = 0;
	int      nbre                = 0;
	int      minNbre             = 0;////////on peut initialiser avec le max des int et faire la comparaison dans la boucle ou alors demande un nombre depuis exterieur et n-1 nbre a interieur de la boucle
	int      sommeNbre           = 0;
	int      sommeNbreCarree     = 0;
	int      sommeNbreCube       = 0;
	unsigned short choixExo      = 0;
	unsigned int premierNbre     = 0;
	unsigned int deuxiemeNbre    = 0;
	unsigned int listeNbre       = 0;
	unsigned int premierNbrePair = 0;

    cout << "Les boucles!\n";

	cout << "Liste des exos sur les boucles\n"
		<< "1- Tracer un carre\n"
		<< "2- Tracer un triangle\n"
		<< "3- Nombre aleatoire\n"
		<< "4- plus petit nombres dans la liste\n"
		<< "5- somme des nombres impairs entre 3 et 3333\n"
		<< " ========== Exercice 27======================\n "
		<< "\t\t6- Liste des nombres pairs entre deux nombres fournis\n"
		<< "\t\t7- liste des nombres de 3 a 9 avec carre et cube\n"
		<< "\t\t8- Calcul de moyenne de notes pour etudiant\n"
		<< "Entrez le chiffre de l'operation <1 a 8>:";
	cin >> choixExo;


	switch (choixExo)
	{
	case 1:
		cout << "\t\t\n============================Carree=========================\n";
		for (int t = 1; t <= 4; t++)
		{
			cout << "*";

			for (int j = 1; j <= 10; j++)
			{
				cout << "*";
			}
			cout << endl;
		}

		break;
	case 2:

		cout << "\t\t\n============================Triangle=========================\n";
		for (int t = 1; t <= 5; t++)
		{
			cout << " ";

			for (int j = 1; j <= t; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		break;
	case 3:
		cout << "\t\t\n============================Nombre hasard=========================\n";
		srand((unsigned int)time(NULL)); //time //on doit caster en unsigned int // temps depuis janvier 19... //si on met sran(10) c pas aleatoire on aura toujours le mm nbre genere
		for (int i = 1; i <= 5; ++i)
		{
			//system("cls");
			//cout<< rand()<< endl;

			nbHasard = rand() % 50 + 1;
			cout << "\nLe nombre # "
				<< i
				<< " genere au hasard est "
				<< nbHasard << endl;

		}

		break;
	case 4:
		cout << "\t\t\n==============================Plus petit nombre=========================\n";
		for (int t = 0; t < 10; t++)
		{
			cout << endl << t + 1 << "-Entrer le nombre: ";
			cin >> nbre;
			if (t == 0)
				minNbre = nbre; //pour recuperer la premiere valeur
			if (nbre < minNbre)
				minNbre = nbre;

		}
		cout << "\n le plus petit est: " << minNbre;
		break;
	case 5:

		cout << "\t\t\n============================Somme des nombres impairs de 3 a 3333=========================\n";
		for (int t = 3; t <= 3333; t+=2)
			//if (t % 2 == 1)
				sommeNbre += t;

		cout << "\n la somme des nbres impairs de 3 a 3333 est : " << sommeNbre << endl;
		break;
	case 6:

		cout << "\t\t\n============================Liste des nombres pairs entre deux nombres=========================\n";
		cout << "Entrez le premier nombre>";
		cin >> premierNbre;
		cout << "Entrez le deuxieme nombre>";
		cin >> deuxiemeNbre;

		if (premierNbre % 2 == 0)
		{
			++listeNbre;
			premierNbrePair = premierNbre;

		}
		else
			premierNbrePair = premierNbre+1;
			
		// plus efficace car ne teste pas plusieurs fois dans le boucle

		for (int t = premierNbrePair; t <= deuxiemeNbre; t+=2)
			//if (t % 2 == 0)
		{
				++listeNbre;
				cout << "   " << t;

		}
				

		cout << "\n il y a "
			<< listeNbre
			<< " nombres pairs entre " 
			<< premierNbre
			<< " et "
			<< deuxiemeNbre 
			<<"."
			<< endl;
		break;
	case 7:
		cout << "\t\t\n============================liste des nombres de 3 a 9 avec carre et cubes et somme=========================\n";
		cout << "\nNombre\tCarre\tCube\n"
			<< "=======\t=====\t====\n"
			<< setprecision(0)<<fixed;
		for (int t = 3; t <= 9; t++)
		{
			cout << t
				<< "\t"
				<< pow(t, 2)
				<< "\t"
				<< pow(t, 3)
				<< endl;

			sommeNbre       += t;
			sommeNbreCarree += pow(t, 2);
			sommeNbreCube   += pow(t, 3);

		}
		cout << endl
			<< "=======\t=====\t====\n"
			<< sommeNbre
			<< "\t"
			<< sommeNbreCarree
			<< "\t"
			<< sommeNbreCube
			<< endl;
		break;
	default:
		break;
	}

	
    

	









	

	cout << endl << endl;
	system("pause");
	return 0;
}

