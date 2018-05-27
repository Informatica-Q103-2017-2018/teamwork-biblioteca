#include <stdio.h>
#include <math.h>
float medialibro(int vector[],int numero);
typedef struct
{
	char nom[11];
	char cont[11];
}usuario;
void main()
{
	char personaNom[11],personaCont[11];
	float media1,media2,media3,media4,media5,media6,media7,media8,media9,media10;
	int w,i,vector1[100],vector2[100],vector3[100],vector4[100],vector5[100],vector6[100],vector7[100],vector8[100],vector9[100],vector10[100];
	char Nombre1[100],Nombre2[100],Nombre3[100],Nombre4[100],Nombre5[100],Nombre6[100],Nombre7[100],Nombre8[100],Nombre9[100],Nombre10[100];
	char compcont, valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10;
	usuario persona;
	float vectT[20] = {media1, media2,media3,media4,media5,media6,media7,media8,media9,media10};
	
	FILE *libros;
	Nombre1[100] = " Hola mundo";
	Nombre2[100] = " Displaying time series";
	Nombre3[100] = " Energia solar fotovoltaica";
	Nombre4[100] = " La vida es bella";
	Nombre5[100] = " Informatica is life";
	Nombre6[100] = " La vuelta al mundo en 30 dias";
	Nombre7[100] = " La vida de Cristobal Colon";
	Nombre8[100] = " Spider woman 2";
	Nombre9[100] = " Steven jokins";
	Nombre10[100]= " Albert eingstein";
	
	libros = fopen("biblioteca.txt","a");
	if (libros == NULL) 
			{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
			} 
				else 
			{ 	
				fprintf(libros,"%s \t %i \t %f \n",Nombre1, 1, media1 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre2, 2, media2 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre3, 3, media3 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre4, 4, media4 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre5, 5, media5 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre6, 6, media6 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre7, 7, media7 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre8, 8, media8 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre9, 9, media9 );
				fprintf(libros,"%s \t %i \t %f \n",Nombre10, 10, media10 );
			}
	FILE *miembros;
	
	
	
	int y = 0,t = 0,n = 0,m = 0,e = 0,p = 0,o = 0,r = 0,v = 0,u = 0;
	char a;
		printf("                         BIENVENIDO A LA BIBLIOTECA-Q103                   \n");
		printf("                    Esta usted registrad@ en esta biblioteca?\n");
		printf("               Escriba '1' si esta registrado o '2' si no lo esta\n ");
		scanf("%i",&a);
		switch(a)
		{
			case 2:
			{
				printf("A continuacion debera registrarse en la biblioteca\n");
			do
			{
				printf("Introduzca como quiere que sea su nombre de usuario con un maximo de 10 espacios:\n");
				scanf("%s", persona.nom);
				miembros = fopen("alumnos.txt","r");
				if (miembros == NULL) 
					{ 
						printf("Error al abrir el fichero.\n"); 
						return -1; 
					} 
				else 
					{ 	
						fscanf(miembros,"%s\t%s\n",personaNom,personaCont);
						fclose(miembros);  	
				return 0; 
					}
			} while (persona.nom == personaNom);
		do
		{
			printf("Introduzca como quiere que sea su contraseña de usuario con un maximo de 10 espacios:");
			scanf("%s",persona.cont); 
			printf("Introduzca otra vez la contraseña para ver si coincide\n");
			scanf("%s", compcont);
		}   while (strcmp(persona.cont,compcont)!=0);
		    printf("su contraseña coincide, proceda\n");
		    
		miembros = fopen("alumnos.txt", "a");
			if (miembros == NULL) 
			{ 
				printf("Error al abrir el fichero.\n"); 
				return -1; 
			} 
				fprintf(miembros,"%s \t %s\n",persona.nom,persona.cont);
				fclose(miembros); 
				return 0; 
			
		}
		break;
	
		case 1:
			{
				printf("Puede continuar introduciendo el nombre y contraseña del usuario:\n ");
				printf("Usuario:\n");
				scanf("%s", persona.nom);
				fopen("miembros","r");
				if (miembros == NULL) 
				{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
				} 
				else 
				{ 	
				fscanf("miembros","%s",persona.nom);
				if(miembros = persona.nom);
				{
					printf("Usuario correcto\n");
				} 	
				fclose(miembros); 
				return 0; 
				}
				
			printf("Contraseña:\n");
			scanf("%s", persona.cont);
			fopen("miembros","r");
			if (miembros == NULL) 
				{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
				} 
				else 
				{ 	
				fscanf("miembros","%s",persona.cont);
				if(miembros = persona.cont);
				{
					printf("Contraseña correcta\n");
				} 	
				fclose(miembros); 
				return 0; 
				}
			}
			break;	
		}
	
	printf("Usted acaba de iniciar sesion en la BIBLIOTECA-Q103\n");
	printf("Ahora escriba el codigo del libro que desee retirar\n");
	printf("Los codigos son los numeros:\n");
	for ( i = 1; i < 11 ;i++)
	{
		printf("%i\t",i);
	}
	scanf("%i",&w);
	printf("El libro que ha cogido es: %i",w);
	switch (w)
	{
	case 1:
		printf("la media actual del libro es: %f\n",media1);
		e++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor1);
		vector1[e-1]= valor1;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector1,e));
		media1 = medialibro(vector1,e);
		break;
	case 2:
		printf("la media actual del libro es: %f\n",media2);
		r++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor2);
		vector2[r-1]= valor2;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector2,r));
		media2 = medialibro(vector2,r);
		break;
	case 3:
		printf("la media actual del libro es: %f\n",media3);
		t++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor3);
		vector3[t-1]= valor3;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector3,t));
		media3 = medialibro(vector3,t);
		break;
	case 4:
		printf("la media actual del libro es: %f\n",media4);
		y++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor4);
		vector4[y-1]= valor4;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector4,y));
		media4 = medialibro(vector4,y);
		break;
	case 5:
		printf("la media actual del libro es: %f\n",media5);
		u++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor5);
		vector5[u-1]= valor5;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector5,u));
		media5 = medialibro(vector5,u);
		break;
	case 6:
		printf("la media actual del libro es: %f\n",media6);
		v++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor6);
		vector6[v-1]= valor6;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector6,v));
		media6 = medialibro(vector6,v);
		break;
	case 7:
		printf("la media actual del libro es: %f\n",media7);
		o++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor7);
		vector7[o-1]= valor7;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector7,o));
		media7 = medialibro(vector7,o);
		break;
	case 8:
		printf("la media actual del libro es: %f\n",media8);
		p++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor8);
		vector8[p-1]= valor8;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector8,p));
		media8 = medialibro(vector8,p);
		break;
	case 9:
		printf("la media actual del libro es: %f\n",media9);
		n++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor9);
		vector9[n-1]= valor9;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector9,n));
		media9 = medialibro(vector9,n);
		break;
	case 10:
		printf("la media actual del libro es: %f\n",media10);
		m++;
		printf("escribe su valoracion del libro:\n");
		scanf("%f",&valor10);
		vector10[m-1]= valor10;
		printf("La media entre todos los usuarios con su valoracion es: %f\n",medialibro(vector10,m));
		media10 = medialibro(vector10,m);
		break;
	}
	
 
}
float medialibro(int vector[],int numero)
{
	int i;
	float res = 0.0;
	for ( i = 0; i < numero ; i++)
	{
		res += vector[i];
	} 
	return res/numero;
}

