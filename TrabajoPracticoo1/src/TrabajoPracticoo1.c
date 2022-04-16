/*
 ============================================================================
 Name        : TrabajoPracticoo1.c
 Author      : Alesio Avellaneda
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h" //mi biblioetaca

int main(void) {

		setbuf(stdout, NULL);

	 	int opcionMenu;
	    float kilometrosIngresados;
	    float precioAerolineasArgentinas;
	    float preciosLatam;
	    float precioAerolineasArgentinasDebito;
	    float preciosLatamDebito;
	    float precioAerolineasArgentinasCredito;
	    float preciosLatamCredito;
	    float precioAerolineasArgentinasBitCoin;   //declaro las variables las cuales no son forzadas
	    float precioLatamBitCoin;
	    float precioUnitarioAerolineasArgentinas;
	    float precioUnitarioLatam;
	    float diferencia;
	    float kilometrosIngresadosForzado = 7090;
	    float precioAerolineasArgentinasForzado = 162965;
	    float preciosLatamForzado = 159339;

	    float precioAerolineasArgentinasDebitoForzado;
	    float preciosLatamDebitoForzado;
	    float precioAerolineasArgentinasCreditoForzado;
	    float preciosLatamCreditoForzado;
	    float precioAerolineasArgentinasBitCoinForzado; //declaro las variables forzadas
	    float precioLatamBitCoinForzado;
	    float precioUnitarioAerolineasArgentinasForzado;
	    float precioUnitarioLatamForzado;
	    float diferenciaForzado;


	    char salida = 'n';
	    do //se cumple la condicion del while por lo tanto se procede con el bucle

	        {
	            printf("Eliga que quiere ingresar o saber acerca del viaje.\n 1 = kilometros. \n 2 = precios de los vuelos. \n 3 = Procesar Datos.\n 4 = Resultados.\n 5 = carga forzada.\n 6 = salir\n");
	            scanf("%d", &opcionMenu);
	            switch(opcionMenu) //hago el menu
	               {
	        case 1:
	            system("cls");
	            printf("ingrese los kilometros que desea viajar\n"); //como primera opcion se ingresan los kilometros que se desea viajar
	            scanf("%f",&kilometrosIngresados );
	            while (kilometrosIngresados<100)
	            {
	                printf("error, reingrese");
	                scanf("%f", &kilometrosIngresados);
	            }
	            break;

	        case 2:
	            system("cls");
	            printf("ingrese el precio de los vuelos de Aerolineas Argentinas\n");
	            scanf("%f", &precioAerolineasArgentinas );
	            system ("cls"); 										//como segunda opcion se establecen los precios de ambas empresas de viajes
	            printf("Ahora ingrese el precio de los vuelos de Latam\n");
	            scanf("%f", &preciosLatam);
	            break;

	        case 3:
	            system("cls");
	            printf("Se calcularon los datos ingresados...\n\n\n");
	            precioAerolineasArgentinasCredito = porcentajeCredito(precioAerolineasArgentinas,1.25);
	            precioAerolineasArgentinasDebito = porcentajeDebito(precioAerolineasArgentinas,0.9);
	            preciosLatamCredito = porcentajeCredito(preciosLatam,1.25);
	            preciosLatamDebito = porcentajeDebito(preciosLatam,0.9);
	            precioAerolineasArgentinasBitCoin = porcentajeBitCoin(precioAerolineasArgentinas,2.1683485589219995e-7); //en la tercera opcion se procesan los datos
	            precioLatamBitCoin = porcentajeBitCoin(preciosLatam,2.1683485589219995e-7);
	            precioUnitarioAerolineasArgentinas = precioUnitario(precioAerolineasArgentinas,kilometrosIngresados);
	            precioUnitarioLatam = precioUnitario(preciosLatam,kilometrosIngresados);
	            diferencia = diferenciaDePrecios(precioAerolineasArgentinas,preciosLatam);
	            break;

	        case 4:
	            system("cls");
	            printf("Kilometros ingresado = %.2f\n\n", kilometrosIngresados);
	            printf("precio de Aerolineas Argentinas = %.2f\n\n", precioAerolineasArgentinas);
	            printf("precio con tarjeta de debito = %.2f\n", precioAerolineasArgentinasDebito);
	            printf("precio con tarjeta de credito = %.2f\n", precioAerolineasArgentinasCredito);
	            printf("precio BitCoin = %f\n", precioAerolineasArgentinasBitCoin);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioAerolineasArgentinas); //la cuarta opcion se muestran los datos de la 3ra opcion
	            printf("precio de Latam = %.2f\n\n", preciosLatam);
	            printf("precio con tarjeta de debito = %.2f\n", preciosLatamDebito);
	            printf("precio con tarjeta de credito = %.2f\n", preciosLatamCredito);
	            printf("precio BitCoin = %f\n", precioLatamBitCoin);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioLatam);
	            printf("diferencia de precios = %f\n\n", diferencia);
	            break;

	        case 5:
	            system("cls");
	            precioAerolineasArgentinasCreditoForzado = porcentajeCredito(precioAerolineasArgentinasForzado,1.25);
	            preciosLatamCreditoForzado = porcentajeCredito(preciosLatamForzado,1.25);
	            precioAerolineasArgentinasDebitoForzado = porcentajeDebito(precioAerolineasArgentinasForzado,0.9);
	            preciosLatamDebitoForzado = porcentajeDebito(preciosLatamForzado,0.9);
	            precioAerolineasArgentinasBitCoinForzado = porcentajeBitCoin(precioAerolineasArgentinasForzado,2.1683485589219995e-7);
	            precioLatamBitCoinForzado = porcentajeBitCoin(preciosLatamForzado,2.1683485589219995e-7);
	            precioUnitarioAerolineasArgentinasForzado = precioUnitario(precioAerolineasArgentinasForzado,kilometrosIngresadosForzado);//se procesan los datos forzados
	            precioUnitarioLatamForzado = precioUnitario(preciosLatamForzado,kilometrosIngresadosForzado);
	            diferenciaForzado = diferenciaDePrecios(precioAerolineasArgentinasForzado,preciosLatamForzado);

	            printf("Kilometros ingresado = %.2f\n\n", kilometrosIngresadosForzado);
	            printf("precio de Aerolineas Argentinas = %.2f\n\n", precioAerolineasArgentinasForzado);
	            printf("precio con tarjeta de debito = %.2f\n", precioAerolineasArgentinasDebitoForzado);
	            printf("precio con tarjeta de credito = %.2f\n", precioAerolineasArgentinasCreditoForzado);
	            printf("precio BitCoin = %f\n", precioAerolineasArgentinasBitCoinForzado);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioAerolineasArgentinasForzado);  //se calculan los datos forzados
	            printf("precio de Latam = %.2f\n\n", preciosLatamForzado);
	            printf("precio con tarjeta de debito = %.2f\n", preciosLatamDebitoForzado);
	            printf("precio con tarjeta de credito = %.2f\n", preciosLatamCreditoForzado);
	            printf("precio BitCoin = %f\n", precioLatamBitCoinForzado);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioLatamForzado);
	            printf("diferencia de precios = %f\n\n", diferenciaForzado);
	        break;

	        case 6:
	            printf("desea salir? n = no \n cualquiera otra tecla = si");   //por si el ususario desea salir del menu
	            fflush(stdin);
	            scanf("%c", &salida);
	        break;

	        default:
	        	printf("Opcion Invalida, reingrese\n");
	        	fflush(stdin);									//si se ingresa un numero que no esta en el menu salta el "error"
	        	scanf("%d", &opcionMenu);
			break;
	      }
	    }
	    	while(salida == 'n'); //la condicion que tiene el do para que el menu sea parte de un bucle

	    	return 0;

	}
