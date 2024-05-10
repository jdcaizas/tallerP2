#include <stdio.h>
#include "funciones.h"

int main() {
    char respuesta;
    float saldo_anterior = 0.0;

    do {
        float servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo, total_gastos;
        float ventas, inversiones, saldo_actual, total_ingresos;

        printf("Ingrese los gastos de servicios basicos: ");
        scanf("%f", &servicios_basicos);

        printf("Ingrese el gasto de arriendo: ");
        scanf("%f", &arriendo);

        printf("Ingrese el gasto de sueldos: ");
        scanf("%f", &sueldos);

        printf("Ingrese los gastos de logistica: ");
        scanf("%f", &gastos_logistica);

        printf("Ingrese los gastos de mercadeo: ");
        scanf("%f", &gastos_mercadeo);

        total_gastos = calcularGastos(servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo);

        printf("Ingrese el monto de las ventas: ");
        scanf("%f", &ventas);

        printf("Ingrese el monto de las inversiones: ");
        scanf("%f", &inversiones);

        total_ingresos = calcularIngresos(ventas, inversiones);

        saldo_actual = calcularSaldoContable(saldo_anterior, total_ingresos, total_gastos);

        printf("\nTotal de gastos del mes: %.2f\n", total_gastos);
        printf("Total de ingresos del mes: %.2f\n", total_ingresos);
        printf("El saldo contable del mes es: %.2f\n", saldo_actual);

        saldo_anterior = saldo_actual;

        printf("\n¿Desea calcular otro mes? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
