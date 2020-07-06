#include <stdio.h>

int main()
{
	int ntrab, rims, nnomi, dia, mes, an, dtrab, faltas, menu, menuaux;
	char nom[10], segnom[10], appat[10], apmat[10], curp[20], rfc[20], regtrab[20], depto[20], puesto[20];
	printf("\n\t\tEMPRESAS FICTICIA SA DE CV");
	printf("\n\n\t\t  ***RECIBO DE NOMINA***");
	printf("\n\nCALLE IMAGINARIA No. 44 Int. LOC 1, Col CENTRO,\n");
	printf("CUAUHTEMOC, CIUDAD DE MEXICO, MEXICO, C.P. 00000\n");
	printf("RFC: FUL12431245\n");
	printf("General de Ley Personas Morales\nRegistro Patronal IMSS: FSD12539812");
	printf("\n\nNo. Trab.: \t\t\t\tDepto.:");
	printf("\nNombre: \t\t\t\tPuesto:");
	printf("\nCURP: \t\t\t\t\tNo. Nomina:");
	printf("\nRFC: \t\t\t\t\tPeriodo del:");
	printf("\nR. IMSS: \t\t\t\tDias Trabajados:");
	printf("\nRegimen Trabajador: \t\t\tFaltas:");
	printf("\n\n\t**PERCEPCIONES**\t\t**DEDUCCIONES**");
	printf("\n\nP001\tSueldo\t\t\t3\tD002\tIMSS\t\t\t\t3");
	printf("\n\t\t\t\t\tD100\tSUBSIDIO PARA EL EMPLEO\t\t3");
	printf("\n\n\nTotal Percepciones\t\t3\tTotal Deducciones\t\t\t3");
	printf("\n\n\n\t\t\t\t\t\tFIRMA:___________________________");
	
	do{
		printf("\n\nMenu");
		printf("\n\n1.- Ingresar datos del trabajador");
		printf("\n2.- Calcular e Imprimir Nomina");
		printf("\n3.- Salir");
		printf("\n\nIngrese la opcion deseada (1-3): ");
		fflush(stdin);
		scanf("%d", &menu);
		
		if(menu <=0 || menu >=4)
		{
			printf("\n\nOpcion Incorrecta");
		}
	}while(menu <=0 || menu >=4);
	
	switch(menu)
	{
		case 1:
			printf("\n\nEn desarrollo");
			break;
		case 2:
			printf("\n\nEn desarrollo");
			break;
		case 3:
			printf("\n\nElegiste salir");
			break;
	}
	
	
	
	
	return 0;
}
