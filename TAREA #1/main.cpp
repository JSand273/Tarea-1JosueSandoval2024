#include <iostream>
using namespace std;
int main() {
    //TAREAS
    //EJERCICIOS CON IF, IF ELSE

    //1)Escribir un programa que pida al usuario su edad y determine si es mayor de edad o no.
    /*
        int edad;
        cout<<"Ingrese su edad: ";cin>>edad;
        if(edad>=18){
            cout<<"usted es mayor de edad";
        }
        else if(edad<18){
            cout<<"usted es menor de edad ";
        }
*/


    //2)Escribir un programa que pida al usuario dos números y determine cuál es el mayor de los dos.
/*
    {
        int a, b;
        cout << "\n Ingrese numero a:";
        cin >> a;
        cout << "\n Ingrese numero b:";
        cin >> b;
        if (a == b)
            cout << "\n Son iguales";
        else {
            if (a > b)
                cout << "\n El mayor es: " << a;
            else
                cout << "\n El mayor es: " << b;
        }
*/

    //3)Escribir un programa que pida al usuario un número entero y determine si es par o impar.
/*
    int numero;
    system("cls");


    cout << "Introduce numero: ";
    cin >> numero;

    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";

    system("pause");
*/

    //4)Escribir un programa que pida al usuario un número y calcule su factorial utilizando un bucle while.
/*
    int n,i = 0,j,factorial;

    cout<<"Ingrese el numero: ";cin>>n;

    while(i <= n){
        if(i == 0){
            factorial = 1;
        }

        else{
            factorial = 1;
            j=1;
            while(j <= i){
                factorial *= j;
                j++;
            }
        }
        cout<<"Factorial de "<<i<<": "<<factorial<<endl;
        i++;
    }
    */

//5)Escribir un programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.
/*
    int num;

    cout<<"Ingrese un numero entre 10 y 30: "; cin>>num;
    if ( num >= 10 && num <= 30 ) {
        cout << "Los numeros impares haste ese numero son: ";
        for (int i = 1; i < num; i += 2) cout << i << endl;
    } else {
        cout << "Debe ser entre 10 y 30. ";
    }
*/

//6)Escribir un programa que realice lo mismo que el ejercicio anterior, pero usando el buqle while.
/*
    char opcion = 's';
    int numero;
    while (opcion == 's' || opcion == 'S') {

        cout<<"Ingrese un numero entre 10 y 30: "; cin>>numero;
        if ( numero >= 10 && numero <= 30 ) {
            cout << "Los numeros impares haste ese numero son: "<<endl;
            for (int i = 1; i < numero; i += 2) cout << i << endl;
        }else
        do {
            cout << "Desea ingresar otro numero? (S/N) : ";
            cin >> opcion;
        } while (opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N');

    }
    */

//7)Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.
/*
    cout << "Ingrese un numero entre 1 y 5: ";
    int dia = 0;
    cin >> dia;

    switch(dia)
    {
        case 1: cout << "1 Representa el Lunes";
            break;
        case 2: cout << "2 Representa el Martes";
            break;
        case 3: cout << "3 Representa el Miercoles";
            break;
        case 4: cout << "4 Representa el Jueves";
            break;
        case 5: cout << "5 Representa el Viernes";
            break;
        default: cout << "Usted ha elegido un numero incorrecto.";
    }
*/

//8)Escribir un programa en el cual el usuario pueda seleccionar cualquiera de los ejercicios anteriores para poder ejecutarlo.
/*
    bool bandera = false;
    char tecla;

    do {

        system("cls");
        cin.clear();
        cout << "a) Calculo de edad " << endl;
        cout << "b) Numero mayor " << endl << endl;
        cout << "c) Numero par o impar " << endl;
        cout << "d) Factorial con while " << endl;
        cout << "e) Impares de numero entre 10 y 30 con for" << endl;
        cout << "f) Impares de numero entre 10 y 30 con while" << endl;
        cout << "g) Dias de la semana ";
        cout << "h) Salir " << endl;
        cout << "Elije una opcion: ";

        cin >> tecla;

        switch (tecla) {
            case 'a':
                system("cls");
                cout << "Has elejido Calculo de edad\n";
                int edad;
                cout << "ingrese su edad: ";
                cin >> edad;
                if (edad >= 18) {
                    cout << "usted es mayor de edad";
                } else if (edad < 18) {
                    cout << "usted es menor de edad ";
                }
                break;

            case 'b':
                system("cls");
                cout << "Has elejido Numero mayor.\n";
                {
                    int a, b;
                    cout << "\n Ingrese numero a:";
                    cin >> a;
                    cout << "\n Ingrese numero b:";
                    cin >> b;
                    if (a == b)
                        cout << "\n Son iguales";
                    else {
                        if (a > b)
                            cout << "\n El mayor es: " << a;
                        else
                            cout << "\n El mayor es: " << b;
                    }
                    break;

                    case 'c':
                        system("cls");
                    cout << "Has elejido Numero par o impar.\n";
                    int numero;
                    system("cls");

                    cout << "Introduce numero: ";
                    cin >> numero;

                    if (numero % 2 == 0)
                        cout << endl << numero << " es par\n";
                    else
                        cout << endl << numero << " es impar\n";

                    system("pause");
                    break;

                    case 'd':
                        system("cls");
                    cout << "Has elejido Factorial con While.\n";
                    int n, i = 0, j, factorial;

                    cout << "Ingrese el numero: ";
                    cin >> n;

                    while (i <= n) {
                        if (i == 0) {
                            factorial = 1;
                        } else {
                            factorial = 1;
                            j = 1;
                            while (j <= i) {
                                factorial *= j;
                                j++;
                            }
                        }
                        cout << "Factorial de " << i << ": " << factorial << endl;
                        i++;
                    }
                    break;

                    case 'e':
                        system("cls");
                    cout << "Has elejido Impares entre 10 y 30 con for.\n";
                    int num;

                    cout << "Ingrese un numero entre 10 y 30: ";
                    cin >> num;
                    if (num >= 10 && num <= 30) {
                        cout << "Los numeros impares haste ese numero son: ";
                        for (int i = 1; i < num; i += 2) cout << i << endl;
                    } else {
                        cout << "Debe ser entre 10 y 30. ";
                    }
                    break;

                    case 'f':
                        system("cls");
                    cout << "Has elejido Impares entre 10 y 30 con while.\n";
                    char opcion = 's';
                    int numero1;
                    while (opcion == 's' || opcion == 'S') {

                        cout << "Ingrese un numero entre 10 y 30: ";
                        cin >> numero1;
                        if (numero1 >= 10 && numero1 <= 30) {
                            cout << "Los numeros impares haste ese numero son: " << endl;
                            for (int i = 1; i < numero1; i += 2) cout << i << endl;
                        } else
                            do {
                                cout << "Desea ingresar otro numero? (S/N) : ";
                                cin >> opcion;
                            } while (opcion != 's' && opcion != 'S' && opcion != 'n' && opcion != 'N');
                        break;

                        case 'g': {
                            system("cls");
                            cout << "Has elejido Dias de la semana. \n";
                            cout << "Ingrese un numero entre 1 y 5: ";
                        }
                        int dia = 0;
                        cin >> dia;

                        switch (dia) {
                            case 1:
                                cout << "1 Representa el Lunes";
                                break;
                            case 2:
                                cout << "2 Representa el Martes";
                                break;
                            case 3:
                                cout << "3 Representa el Miercoles";
                                break;
                            case 4:
                                cout << "4 Representa el Jueves";
                                break;
                            case 5:
                                cout << "5 Representa el Viernes";
                                break;

                                cout << "Usted ha elegido un numero incorrecto.";
                                break;

                            case 'k':
                                bandera = true;
                                break;

                            default:
                                system("cls");
                                cout << "Opcion no valida.\a\n";
                                break;
                        }
                    }
                }
        }
    }
*/
return 0;
}