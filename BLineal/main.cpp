#include <iostream>
#include <fstream>
using namespace std;

int busqueda (int a[], int n, int dato);


int main()
{
    ofstream archivo;
    string nombre;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombre);
    archivo.open(nombre.c_str(), ios::app);
    int a[5] = {4, 1, 3, 2, 5};
    if(busqueda (a, 5, 3) == -1){
        cout << "Elemento no encontrado";
        archivo << "Elemento no encontrado";
    }
    else{
        cout << "Elemento encontrado en la posicion: " << busqueda (a, 5, 3);
        archivo << "Elemento encontrado en la posicion: " << busqueda (a, 5, 3);
    }
    archivo.close ();
    return 0;
}

int busqueda (int a[], int n, int dato)
{

    for (int i=0; i <= n; i++)
    {
        if (a[i] == dato){
            return i;
        }
    }
    return -1;
}

