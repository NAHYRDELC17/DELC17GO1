#include"iostream"
#include "stdio.h"
using namespace std;
int contra ;

	int *apuntador1;
	int *apuntador2;
	int *apuntador3;
	int *apuntador4;
	
	int op,i,op1;
	int uno = 1;
	int dos = 2;
	int tres = 3;
	int cuatro = 4;
	
	
	int **punterop1 = &apuntador1;
	int **punterop2 = &apuntador2;
	int **punterop3              ;
	int **punterop4 = &apuntador4;
int main(){


   int o;

	system("color f3");
//	char uno,dos,tres,cuatro;

	apuntador1 = &uno;
	apuntador2 = &dos;
	apuntador3 = &tres;
	apuntador4 = &cuatro;
	


	do{
	
	printf(" \n\tQue archivo desea conocer o modificicar?\n");
	printf("\n\tArchivo 1.");
	printf("\n\tArchivo 2.");
	printf("\n\tArchivo 3.");
	printf("\n\tArchivo 4.");
	printf("\n\tOPCION: ");
	scanf("%d",&op);
	system("cls");
	switch(op){
		
		case 1:
		
			printf("\n\t\t\t\tUbicacion es :%d \n\t\t\t\t",apuntador1);
			printf("Archivo numero: %d \n",**punterop1);
			
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\tDesea modificar archivo? 1.si/2.no";
				printf("\n\t:");

			cin>>o;
			if (o==1){
				printf("\n\tEscriba como desea modificar el archivo");
				printf("\n\t:");
				scanf("%d",apuntador1);
				
			}
			system("cls");
			break;
			
			
		case 2:
			
			printf("\n\t\t\t\tSu ubicacion es %d \n\t\t\t",apuntador2);
			printf("Archivo numero: %d \n",**punterop2);
			
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\tDesea modificar archivo? 1.si/2.no";
				printf("\n\t:");

			cin>>o;
			if (o==1){
				printf("\n\tEscriba  como desea modificicar el  archivo");
				printf("\n\t:");
				scanf("%d",apuntador2);
				
			}
			system("cls");
			break;
		case 3: printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t Este archivo se encuentra bloqueado, \n\t\t\t\t\t para revisarlo necesita contraseña, \n\n\n\n\n\n\n\n\n\n\n\n\n\t");
				system("pause");
				system("cls");
				printf("\n\t\t\tEscriba contraseña");
				printf("\n:");
				scanf("%d",&contra);
				system("cls");
				if (contra==10032020){
					
						int **punterop3 = &apuntador3;				
				 
			
			printf("\n\t\t\tSu ubicacion es %d \n\t\t\t",apuntador3);
			printf("Archivo numero: %d \n",**punterop3);
			
			cout<<"\n\tDesea modificar archivo? 1.si/2.no";
				printf("\n\t:");

			cin>>o;
			if (o==1){
				printf("\n\n\tEscriba como desea modificar el archivo");
				printf("\n\t:");
				scanf("%d",apuntador3);
				
			}			
			
		}else{
			
			cout<<"Este archivo se encuentra protegido intente escoger otro...\n\n";
		}system("pause");
		
			system("cls");
			break;
		case 4:
			printf("\n\t\t\tSu ubicacion es %d \n\t\t\t ",apuntador4);
			printf("archivo numero: %d \n",**punterop4);
			
			cout<<"\n\tdesea modificar archivo? 1.si/2.no";
				printf("\n:");

			cin>>o;
			if (o==1){
				printf("\n\tescriba como desea modificar el archivo");
				printf("\n:");
				scanf("%d",apuntador4);
				
			}
			system("cls");
			break;			
		
	}
	cout<<" \n\n\n\ndesea volver a seleccionar archivo? 1.si/2.no";
	cout<<":";
	cin>>op1;
	system("cls");
}while(op1==1);
	
	
	
	
	
	
	
	
	
	
	
	
}


