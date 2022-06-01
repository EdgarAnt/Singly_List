    #include <iostream>
    #include<stdio.h>
    #include "Lista.h"
    #include <string>

    using namespace std;

    int main()
    {
        Lista* Nom = new Lista;
        int opcLista;
        int opcElimniar;
        int opcAgregar, posicion;
        string Nombre;

        do {
            cout<< Nombre << endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout<<"|                           Nombre de alumnos                              |"<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
            cout << "" << endl;
            cout << "1) ingresar nombre\n" << endl;
            cout << "2) buscar nombre\n" << endl;
            cout << "3) Eliminar nombre\n" << endl;
            cout << "4) Mostrar todos los nombres\n" << endl;
            cout << "5) Ver cantidad de nombres\n" << endl;
            cout << "0) Salir \n\n" << endl;
            cout << "\t\t\t\tOpcion: ";
            cin >> opcLista;
            cin.ignore();
            system("cls");

            switch (opcLista) {
            case 1:
                cout<<"-----------------------------------------------------------------------------"<<endl;
                cout<<"|                                     alumnos                              |"<<endl;
                cout<<"-----------------------------------------------------------------------------"<<endl;
                cout << "1) Agregar al inicio\n" << endl;
                cout << "2) Agregar al final\n" << endl;
                cout << "3) Agregar posicion\n" << endl;
                cout << "4) Terminar de agregar\n" << endl;
                cout << "6) Salir \n\n" << endl;
                cout << "\t\t\t\tOpcion: ";


                cin >> opcAgregar;
                cin.ignore();
                fflush(stdin);
                system("cls");



                switch (opcAgregar) {
                case 1:
                {
                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout<<"|                            Agregar al Inicio                              |"<<endl;
                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout << "\nNombre del Alumno: ";
                    fflush(stdin);

                    getline(cin, Nombre);

                    Nom->insertaInicio(Nombre);
                    system("pause");
                    system("cls");
                    break;
                }

                case 2:
                {

                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout<<"|                            Agregar al Final                              |"<<endl;
                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout << "\nNombre del Alumno: ";
                    getline(cin, Nombre);
                    Nom->insertaFinal(Nombre);
                    system("cls");

                } break;

                case 3:
                {

                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout<<"|                            Agregar en posicion                              |"<<endl;
                    cout<<"-----------------------------------------------------------------------------"<<endl;
                    cout << "\nNombre del Alumno: ";
                    getline(cin, Nombre);
                    cout << "Posicion:\n ";
                    fflush(stdin);
                    cin >> posicion;
                    Nom->insertaPos(Nombre, posicion);
                    system("cls");

                }	break;

                case 0:

                    cout << "presione enter para salir" << endl;
                    system("cls");

                    break;

                default:
                    cout << "Opcion no valida" << endl;
                    break;
                }

                break;
            case 2:
            {
                string N;

                cout << "Nombre ah buscar: ";
                getline(cin, N);
                Nom->buscar(N);
                system("cls");
                break;

            }


            case 3:
                cout<<"-----------------------------------------------------------------------------"<<endl;
                cout<<"|                              Eliminar Alumnos                             |"<<endl;
                cout<<"-----------------------------------------------------------------------------"<<endl;
                cout << "1) Eliminar Nombre\n" << endl;
                cout << "2) Eliminar todos los Nombres\n" << endl;
                cout << "0) Salir\n" << endl;
                cout << "\t\t\t\tOpcion: ";
                cin >> opcElimniar;
                cin.ignore();

                switch (opcElimniar) {
                case 1:

                    cout << "Nombre a eliminar: ";

                    getline(cin, Nombre);
                    Nom->elimiar(Nombre);
                    system("cls");

                    break;

                case 2:
                    Nom->vaciar();
                    system("cls");

                    break;

                case 0:
                    cout << "Ha salido del menu " << endl;
                    system("cls");

                    break;

                default:
                    cout << "a " << endl;
                    break;
                }

            case 4:
                Nom->mostrarTodo();
                system("pause");
                break;

            case 5:
                Nom->tamano();

                break;

            case 6:
                cout << "presione entter para salir " << endl;

                break;

            default: cout << "Opcion no valida" << endl;
            }
        } while (opcLista != 0);

    }

