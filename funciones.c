#include <stdio.h>
#include "funciones.h"

float calcularGastos(float servicios_basicos, float arriendo, float sueldos, float gastos_logistica, float gastos_mercadeo) {
    return servicios_basicos + arriendo + sueldos + gastos_logistica + gastos_mercadeo;
}

float calcularIngresos(float ventas, float inversiones) {
    return ventas + inversiones;
}

float calcularSaldoContable(float saldo_anterior, float total_ingresos, float total_gastos) {
    return saldo_anterior + total_ingresos - total_gastos;
}
