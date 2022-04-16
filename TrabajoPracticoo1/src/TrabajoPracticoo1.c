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
#include "utn.h"

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
	    float precioAerolineasArgentinasBitCoin;
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
	    float precioAerolineasArgentinasBitCoinForzado;
	    float precioLatamBitCoinForzado;
	    float precioUnitarioAerolineasArgentinasForzado;
	    float precioUnitarioLatamForzado;
	    float diferenciaForzado;


	    char salida = 'n';
	    do
	        {
	            printf("Eliga que quiere ingresar o saber acerca del viaje.\n 1 = kilometros. \n 2 = precios de los vuelos. \n 3 = Procesar Datos.\n 4 = Resultados.\n 5 = carga forzada.\n 6 = salir\n");
	            scanf("%d", &opcionMenu);
	            switch(opcionMenu)
	               {
	        case 1:
	            system("cls");
	            printf("ingrese los kilometros que desea viajar\n");
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
	            system ("cls");
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
	            precioAerolineasArgentinasBitCoin = porcentajeBitCoin(precioAerolineasArgentinas,2.1683485589219995e-7);
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
	            printf("precio Unitario = %.2f\n\n", precioUnitarioAerolineasArgentinas);
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
	            precioUnitarioAerolineasArgentinasForzado = precioUnitario(precioAerolineasArgentinasForzado,kilometrosIngresadosForzado);
	            precioUnitarioLatamForzado = precioUnitario(preciosLatamForzado,kilometrosIngresadosForzado);
	            diferenciaForzado = diferenciaDePrecios(precioAerolineasArgentinasForzado,preciosLatamForzado);

	            printf("Kilometros ingresado = %.2f\n\n", kilometrosIngresadosForzado);
	            printf("precio de Aerolineas Argentinas = %.2f\n\n", precioAerolineasArgentinasForzado);
	            printf("precio con tarjeta de debito = %.2f\n", precioAerolineasArgentinasDebitoForzado);
	            printf("precio con tarjeta de credito = %.2f\n", precioAerolineasArgentinasCreditoForzado);
	            printf("precio BitCoin = %f\n", precioAerolineasArgentinasBitCoinForzado);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioAerolineasArgentinasForzado);
	            printf("precio de Latam = %.2f\n\n", preciosLatamForzado);
	            printf("precio con tarjeta de debito = %.2f\n", preciosLatamDebitoForzado);
	            printf("precio con tarjeta de credito = %.2f\n", preciosLatamCreditoForzado);
	            printf("precio BitCoin = %f\n", precioLatamBitCoinForzado);
	            printf("precio Unitario = %.2f\n\n", precioUnitarioLatamForzado);
	            printf("diferencia de precios = %f\n\n", diferenciaForzado);
	        break;

	        case 6:
	            printf("desea salir? s/n \n");
	            fflush(stdin);
	            scanf("%c", &salida);
	        break;

	        default:
	        	printf("Opcion Invalida, reingrese\n");
	        	fflush(stdin);
	        	scanf("%d", &opcionMenu);
			break;
	      }
	    }
	    	while(salida == 'n');

	    	return 0;

	}
