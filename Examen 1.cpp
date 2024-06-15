#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


using namespace std;
int menu(void) {
	
    printf ("************************************************************************************");
    printf ("\n*********  Bienvenido al Sistema de Gestion de Reciclaje Comunitario    ************\n");
    printf ("************************************************************************************\n");
    printf ("\n**************Menu de Opciones************************\n");
	printf ("* Opcion 1: Registrar Cliente                        *\n");
	printf ("* Opcion 2: Registro de Materiales Reciclables       *\n");
	printf ("* Opcion 3: Imprimir Recibo                          *\n");
	printf ("* Opcion 4: Salir                                    *\n");
	printf ("******************************************************\n");
	printf ("Seleccione una opcion:");
	
	
	}
	
	int main(){
		
	int  i=0,tipo_reciclaje=0, cantidad_material, opcion ,opc2, opc3, a=0,  id, tel;
	char nombre [20], mensaje_string [30];
	
		
		
 do	{
 menu();
 scanf ("%i",&opcion);
 	
switch (opcion){
		
		case 1:
    printf ("\n******Datos del cliente*******\n");
	printf ("*Ingrese su nombre:");
	scanf ("%s",&nombre);
	printf ("*Ingrese su ID (Sin espacios ni guiones):");
	scanf ("%i",&id);
	printf ("*Ingrese su numero de telefono (Sin espacios ni guiones):");
	scanf ("%i",&tel);
	printf ("\n*****Gracias por registrarse, precione 1 para volver al menu y luego 2 para registrar los materiales*******:  ");
	scanf ("%i",&opc2);

	break;
	
	case 2:
    printf ("\n******Registro Materiales*******\n");
		
	printf ("*Digite la cantidad de bolsas de reciclaje recolectado:");
	scanf ("%i",&cantidad_material);
    printf ("*Digite el tipo de material reciclado  (1: Plastico 2: Vidrio 3: Aluminio) :");
	scanf ("%i",&tipo_reciclaje);
	

	if (tipo_reciclaje == 1) {
		
	strcpy(mensaje_string, "Plastico"); 
	
   }else if(tipo_reciclaje == 2){
		
	strcpy(mensaje_string, "Vidrio"); 
	
   }else if (tipo_reciclaje == 3){
		
	strcpy(mensaje_string, "Aluminio"); 
	
   }
   
   printf ("\n******Ingresa 1 para volver al menu y luego 3 para imprimir tu recibo********: ");
   scanf ("%i",&opc2);
  break;

  case 3:
  	
  	printf ("\n******Recibo cliente*******\n");
  	
	printf ("*Nombre del cliente:%s\n",nombre);
	printf ("*ID del cliente:%i\n",id);
	printf ("*Telefono del usuario:%i\n",tel);
	printf ("*Tipo de Reciclaje:%s\n",mensaje_string);
	printf ("*Cantidad de bolsas de material reciclado:%i\n",cantidad_material);
	printf ("\n******************************************************************************1\n");
	printf ("****** Gracias por Reciclar y Matener el Medio Ambiente Libre de Basura ******\n");
	printf ("******************************************************************************\n");
	
	printf ("\n*************************************************************************************************\n");
	printf ("* Recibiste un cupon de 20 porciento de descuento canjeable en nuestros supermercados afiliados *\n");
	printf ("*************************************************************************************************\n");
	
	 printf ("\n******Ingresa 1 para volver al menu y luego 4 para salir********: ");
   scanf ("%i",&opc2);
	break;
	
	
	case 4:
		
	return 0;
   
    
	

   	
   	
	   
   	
   	
   	
   	
	}
	
	
	system("cls");
	}while(opcion<=4);
	return 0;
}
