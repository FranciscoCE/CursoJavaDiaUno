#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define extension 50

void BurbujaMayor();
void BurbujaMenor();
void Sacudida();
void Insercion();
void Shell();

int main()
{
int opcion=1;

while(opcion >=1 && opcion <=5){
printf("\tOrdenamiento de arreglos");
printf("\n\n\tSelecciona tu metodo: ");
printf("\n\n       1.-Burbuja mayor");
printf("\n       2.-Burbuja menor");
printf("\n       3.-Sacudida");
printf("\n       4.-Insercion");
printf("\n       5.-Shell");

printf("\n\n       Selecciona opcion: ");
scanf("\n%d",&opcion );

switch(opcion){

case 1: BurbujaMayor();break;
case 2:BurbujaMenor(); break;
case 3:Sacudida();break;
case 4:Insercion(); break;
case 5:Shell(); break;

default:  printf("\n\nOpcion invalidad");                  break;


}
}


}


 void Shell(){
 system("cls");
  int arreglo[extension], aux;
	int pa=0;
  	int mov=0;
  	int movto=0;
  	int num,a, temp;
  	
	cout<<"Cuantos numeros deseas generar: ";
	cin>>num;

    for(int i=0;i<num;i++)
    {     cout<<"Ingresa numero:";
         cin>>arreglo[i];
    }

    cout<<"\nNumeros generados: "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arreglo[i]<<",";
    }

     getche();

	cout<<endl<<"-----------------Proceso-----------------"<<endl<<endl;
	
	for(a=1 ; a<num ; a=a*3+1);

      while (a > 0)
      {
          for (int i=a; i < num; i++)
          {
                int j = i;
                temp = arreglo[i];

                while ((j >= a) && (arreglo[j-a] > temp))
                {
                 mov++;
                 movto++;
                    arreglo[j] = arreglo[j - a];
                    j = j - a;
                }
                
                arreglo[j] = temp;
          }

          a/= 2;
          pa++;

          for(int i=0;i<num;i++)
          {
          	cout<<arreglo[i]<<",";
          }
      	 cout<< "\tNumero de pasada: "<<pa << "\tMovimientos: "<<mov*2<<endl;
          mov=0;
      }

 cout<<"\nMovimientos totales: "<<movto*2<<endl;
      
 //IMPRESION ARREGLO ORDENADO
    for(int i=0;i<num;i++)
	{
		cout<<arreglo[i]<<",";
	}
   getche();
 }





void BurbujaMayor(){
system("cls");
int arreglo[50];
int numero;
int aux;
int pasadas=0;
int intercambios=0;


printf("\nIngresa tamaño de arreglo: ");
scanf("%d",&numero );

printf("\nLlena arreglo");
for(int i=0; i<numero; i++){
   printf("\nIngresa numero: ");
   scanf("\n%d",&arreglo[i] );
}
			printf("\n");
        for(int i=0;i<(numero-1); i++){
        pasadas++;
        for(int j=0; j<(numero-1); j++){

                if(arreglo[j]>arreglo[j+1]){

                    aux=arreglo[j];

                    arreglo[j]=arreglo[j+1];

                    arreglo[j+1]=aux;
                      intercambios++;

                     }
                    }
                    for(int i=0; i<numero; i++){
                    cout<<arreglo[i]<<",";
                    }
                    cout <<"Pasadas: " <<pasadas << "\tIntercambios: " <<intercambios<<"\n_______________________________________________"<<endl;

                   intercambios=0;
                }




              printf("\nTu arreglo ordenado es: ");

            for(int i=0; i<numero; i++){
               printf("%d, ", arreglo[i]);
            }
     getch();

}



void BurbujaMenor(){
system("cls");
int arreglo[50];
int numero;
int aux;
int pasadas=0;
int intercambios=0;


printf("\nIngresa tamaño de arreglo: ");
scanf("%d",&numero );

printf("\nLlena arreglo");
for(int i=0; i<numero; i++){
   printf("\nIngresa numero: ");
   scanf("\n%d",&arreglo[i] );
}
                  printf("\n");
               for(int i=0; i<(numero-1); i++){
                  pasadas++;
            for(int j=(numero-1); j>0; j--){



                if(arreglo[j-1]>arreglo[j]){



                    aux=arreglo[(j-1)];

                    arreglo[(j-1)]=arreglo[j];

                    arreglo[j]=aux;
                    intercambios++;

                }

               }
               for(int i=0; i<numero; i++){
                    cout<<arreglo[i]<<",";
                    }
                cout <<"Pasadas: " <<pasadas << "\tIntercambios: " <<intercambios<<"\n_______________________________________________"<<endl;


               intercambios=0;
            }





              printf("\nTu arreglo ordenado es: ");

            for(int i=0; i<numero; i++){
               printf("%d, ", arreglo[i]);
            }
     getch();

}






void Insercion(){
system("cls");
int arreglo[50];
int numero;
int aux;
int pos;
 int intercambios=0, pasada=0;


printf("\nIngresa tamaño de arreglo: ");
scanf("%d",&numero );

printf("\nLlena arreglo");
for(int i=0; i<numero; i++){
   printf("\nIngresa numero: ");
   scanf("\n%d",&arreglo[i] );
}
  for(int i=0; i<numero; i++){
              pasada++;


            pos=i;

            aux=arreglo[i];
            intercambios=0;


            while(pos>0 && arreglo[pos-1]>aux){
                 intercambios++;
                arreglo[pos]=arreglo[pos-1];

                pos--;

            }

            arreglo[pos]=aux;

             for(int i=0; i<numero; i++){
                    cout<<arreglo[i]<<",";
                    }
                cout <<"Pasadas: " <<pasada << "\tIntercambios: " <<intercambios<<"\n_______________________________________________"<<endl;

        }

        printf("\nTu arreglo ordenado es: ");
        for(int i=0; i<numero; i++){
               printf("\n%d ", arreglo[i]);
            }
            getch();


}





















void Sacudida(){
system("cls");
int arreglo[50];
int numero;
int aux;
int intercambios=0;
int pasadas=0;



printf("\nIngresa tamaño de arreglo: ");
scanf("%d",&numero );

printf("\nLlena arreglo");
for(int i=0; i<numero; i++){
   printf("\nIngresa numero: ");
   scanf("\n%d",&arreglo[i] );
}

  for(int i=0; i<(numero-1); i++){
  pasadas++;

            for(int j=(numero-1); j>0; j--){



                if(arreglo[j-1]>arreglo[j]){



                    aux=arreglo[(j-1)];

                    arreglo[(j-1)]=arreglo[j];

                    arreglo[j]=aux;
                         intercambios++;

                }

               }

                for(int j=0; j<(numero-1); j++){

                if(arreglo[j]>arreglo[j+1]){

                    aux=arreglo[j];

                    arreglo[j]=arreglo[j+1];

                    arreglo[j+1]=aux;  intercambios++;

                       }

                    }
                    for(int i=0; i<numero; i++){
                    cout<<arreglo[i]<<",";
                    }
                       cout <<"Pasadas: " <<pasadas << "\tIntercambios: " <<intercambios<<"\n_______________________________________________"<<endl;

                     intercambios=0;
            }







              printf("\nTu arreglo ordenado es: ");

            for(int i=0; i<numero; i++){
               printf("\n%d ", arreglo[i]);
            }
     getch();
}


