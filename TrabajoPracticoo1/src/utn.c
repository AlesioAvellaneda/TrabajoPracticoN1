/*
 * utn.c
 *
 *  Created on: 16 abr 2022
 *      Author: Alesio Avellaneda
 *
 *      esta biblioteca esta echa para ser reutilizable, por lo tanto tiene funciones sencillas
 *
 *
 */

     float porcentajeCredito (float A, float B)
    {
        float descuento = A*B;
        return descuento;
    }

     float porcentajeDebito(float A, float B)
    {
        float descuento = (A*B);
        return descuento;
    }

     float porcentajeBitCoin(float A, float B)
    {
        float precioTotal=A*B;

        return precioTotal;
    }

     float precioUnitario(float A, float B)
    {
        float precioUnitario = A / B;

        return precioUnitario;
    }

     float diferenciaDePrecios(float A, float B)
    {
        float diferencia = A - B;

        return diferencia;
    }



