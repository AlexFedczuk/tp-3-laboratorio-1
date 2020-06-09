#include "funcionesTP3.h"

/** \brief Mostrar el menu principal de la aplicacion.
 *
 * \param void
 * \return La opcion elegida por el usuario.
 *
 */
int mostrarMenuPrincipal(void)
{
    int opcionAuxiliar;

    do
    {
        printf("Menu:\n");
        printf(" 1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)\n");
        printf(" 2. Cargar los datos de los empleados desde el archivo data.csv (modo binario)\n");
        printf(" 3. Alta de empleado\n");
        printf(" 4. Modificar datos de empleado\n");
        printf(" 5. Baja de empleado\n");
        printf(" 6. Listar empleados\n");
        printf(" 7. Ordenar empleados\n");
        printf(" 8. Guardar los datos de los empleados en el archivo data.csv (modo texto)\n");
        printf(" 9. Guardar los datos de los empleados en el archivo data.csv (modo binario)\n");
        printf(" 10. Salir\n");
        printf("\nElija una opcion: ");
        scanf("%d",&opcionAuxiliar);

        if(opcionAuxiliar<1 || opcionAuxiliar>10)
        {
            printf("\nError! La opcion ingresada es invalida!\n");
            system("pause");
            system("cls");
        }
    }
    while(opcionAuxiliar<1 || opcionAuxiliar>10);

    return opcionAuxiliar;
}
