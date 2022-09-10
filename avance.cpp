#include <iostream> 
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	do
	{
		int a, b, c, d, e, f, i, j, k, m, n, l;
		char gene[10];
		char cara[20];
		char nom[20];
		char cla[5];
		float p, g, h;
		void menu();

		cout << "------ BIENVENIDO AL MENU PRINCIPAL ------" << endl;
		cout << "¿QUE DESEA HACER?" << endl;
		cout << "1. Agregar Articulo " << endl;
		cout << "2. Modificar Articulo " << endl;
		cout << "3. Eliminar Articuolo " << endl;
		cout << "4. Lista De Articulos Vigentes " << endl;
		cout << "5. Limpiar Pantalla  " << endl;
		cout << "6. Salir" << endl;
		cin >> a;
		system("cls");
		switch (a)

		{

		case 1:
			for (i = 0; i < 4; i++)
			{
				cout << "Numero De Articulo" << endl;
				cin >> c;
				cout << "Nombre Del Videojuego" << endl;
				cin >> nom;
				cout << "Año De Lanzamiento" << endl;
				cin >> e;
				cout << "Clasificacion" << endl;
				cout << "1. A" << endl;
				cout << "2. B " << endl;
				cout << "3. B15" << endl;
				cout << "4. C" << endl;
				cout << "5. D " << endl;
				cout << "escriba la clasificacion que es :)" << endl;
				cin >> cla;
				cout << "caracteristicas" << endl;
				cin >> cara;
				cout << "Genero" << endl;
				cout << "accion" << endl;
				cout << "arcade" << endl;
				cout << "deportivo" << endl;
				cout << "estrategia" << endl;
				cout << "simulacion" << endl;
				cout << "juegos de mesa" << endl;
				cout << "escriba el genero del juego" << endl;
				cin >> gene;
				cout << "Precio Unitario" << endl;
				cin >> p;
				g = p * 0.16;

				h = p + g;

				system("cls");
			}
			cout << c << endl;
			cout << nom << endl;
			cout << e << endl;
			cout << cla << endl;
			cout << cara << endl;
			cout << gene << endl;
			cout << "Impuesto del juego es:" << g << endl;
			cout << "El Precio Del Juego Con IVA es un total de;" << h << endl;
			break;
		case 2:
			cout << "ESTAS APUNTO DE MODIFICAR UN ARTICULO " << endl;
			break;
		case 3:
			cout << "ESTAS POR ELIMINAR UN ARTICULO" << endl;
			break;
		case 4:
			cout << "ESTA ES LA LISTA DE ARTICULOS VIGENTES" << endl;
			break;
		case 5:
			system("cls");

			break;
		case 6:
			cout << "ESTAS SEGURO DE QUERER SALIR DEL PROGRAMA? :( " << endl;
			cout << "1. SI " << endl;
			cout << "2. NO" << endl;
			cin >> i;
			if (i == 1)
			{
				return 0;
			}
			else
			{
				return main();

			}
			break;
		default:
			return main();
			break;
		}

	} while ('a' != 7);
	{
		system("pause");
		return main();
	}
}