#include <iostream>

using namespace std;

int main()

{
    int sumaCalificaciones = 0;
    int promedio;
    string nombreEstudiante;
    int calificacionEstudiante;
    int totalestudiantes = 0;
    int i;

    cout<<"Ingrese la cantidad total de estudiantes:";
    cin >> totalestudiantes;
            

        if (totalestudiantes < 10) {

        cout<<"Se han ingresado mas de 10 estudiantes. Programa Detenido.";
        return 0;
        }

    for (i = 1; i <= totalestudiantes; i++)
     {
        cout<<"Estudiante #"<< i <<":"<<endl;
        cout<< "Ingrese el nombre del estudiante:";
        cin >> nombreEstudiante;

        cout<< "Ingrese la puntuacion del estudiante "<< nombreEstudiante <<":"<<endl;
        cin >> calificacionEstudiante;

        sumaCalificaciones += calificacionEstudiante;

     }


    promedio = sumaCalificaciones / totalestudiantes;

    cout<<"El promedio general de las calificaciones del grupo es:"<< promedio <<endl;
        
    return 0;

}


   




    