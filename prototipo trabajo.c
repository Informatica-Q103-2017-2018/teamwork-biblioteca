#include <stdio.h>
#include <math.h>
float medialibro(int nota,int numero);
typedef struct
{
	
	char nom[11];
	char cont[11];
}usuario;
void main()
{
	float vectT[11];
	float media1,media2,media3,media4,media5,media6,media7,media8,media9,media10;
	int w,i,vector1[100],vector2[100],vector3[100],vector4[100],vector5[100],vector6[100],vector7[100],vector8[100],vector9[100],vector10[100];
	char Nombre1[100],Nombre2[100],Nombre3[100],Nombre4[100],Nombre5[100],Nombre6[100],Nombre7[100],Nombre8[100],Nombre9[100],Nombre10[100];
	char compcont, valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10;
	usuario persona;
	
	FILE *libros;
	libros=fopen("biblioteca.txt","a");
	if (libros == NULL) 
			{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
			} 
				else 
			{ 	
			int i;
			for ( i = 1; i < 11 ; i++)
			{
		//		fprintf(libros,"%s \t %i \t %f \n", Nombre[i],i,vectT[i] );
			}
		}
	FILE *miembros;
	
	
	//vector1[] = {Como aprobar infor}
	int y = 0,t = 0,n = 0,m = 0,e = 0,p = 0,o = 0,r = 0,v = 0,u = 0;
	char a;
		printf("                         BIENVENIDO A LA BIBLIOTECA-Q103                   \n");
		printf("¿Esta usted registrad@ en esta biblioteca?\n");
		printf("Escriba '1' si esta registrado o '2' si no lo esta\n ");
		scanf("%i",&a);
		switch(a)
		{
			case '2':
			{
				printf("A continuacion debera registrarse en la biblioteca\n");
			//do
		//	{
				printf("Introduzca como quiere que sea su nombre de usuario con un maximo de 10 espacios:");
				scanf("%s", persona.nom);
			//	miembrosNom = fopen("alumnos.txt","r");
			//	if (miembrosNom == NULL) 
			//	{ 
			//		printf("Error al abrir el fichero.\n"); 
			//		return -1; 
			//	} 
			//	else 
			//	{ 	
			//		fscanf(miembrosNom,"%s",persona.nom);
			//		fclose(miembrosNom);  	
			//		return 0; 
			//	}
			//} while (persona.nom = alumnos);
			 
			
		
		//miembrosNom = fopen("alumnos.txt","a");
		//	if (miembrosNom == NULL) 
		//	{ 
		//			printf("Error al abrir el fichero.\n"); 
		//			return -1; 
		//	} 
		//		else 
		//	{ 	
		//		fprintf(miembrosNom,"%s",persona.nom);
		//		fclose(miembrosNom); 
		//	return 0; 
		//	}
			
		do
		{
			printf("Introduzca como quiere que sea su contraseña de usuario con un maximo de 10 espacios:");
			scanf("%s",persona.cont); 
			printf("Introduzca otra vez la contraseña para ver si coincide\n");
			scanf("%s", compcont);
		}   while (strcmp(persona.cont,compcont)!=0);
		    printf("su contraseña coincide\n");
		    
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
		
	
		case '1':
			{
				printf("Puede continuar introduciendo el nombre y contraseña del usuario:\n ");
				printf("Usuario:\n");
				scanf("%s", persona.nom);
				fopen("miembros","r");
				if (miembros == NULL) 
				{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
				else 
				{ 	
					if( persona.nom = miembros);
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
					if( persona.cont = miembros);
				{
					printf("Contraseña correcta\n");
				} 	
				fclose(miembros); 
				return 0; 
				}
			
		
			//for ()
			//if 
		}
	}
	printf("Usted acaba de iniciar sesion en la BIBLIOTECA-Q103\n");
	printf("Ahora escriba el codigo del libro que desee retirar\n");
	printf("Los codigos son los numeros:\n");
	for ( i = 1; i < 11 ;i++)
	{
		printf("%i\t",i);
	}
	scanf("%i",&w);
	printf("el libro que ha cogido es:%i",w);
	switch (w)
	{
	case '1':
		e++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor1);
		vector1[e-1]= valor1;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector1,e));
		media1 = medialibro(vector1,e);
		break;
	case '2':
		r++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor2);
		vector2[r-1]= valor2;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector2,r));
		media2 = medialibro(vector2,r);
		break;
	case '3':
		t++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor3);
		vector3[t-1]= valor3;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector3,t));
		media3 = medialibro(vector3,t);
		break;
	case '4':
		y++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor4);
		vector4[y-1]= valor4;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector4,y));
		media4 = medialibro(vector4,y);
		break;
	case '5':
		u++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor5);
		vector5[u-1]= valor5;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector5,u));
		media5 = medialibro(vector5,u);
		break;
	case '6':
		v++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor6);
		vector6[v-1]= valor6;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector6,v));
		media6 = medialibro(vector6,v);
		break;
	case '7':
		o++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor7);
		vector7[o-1]= valor7;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector7,o));
		media7 = medialibro(vector7,o);
		break;
	case '8':
		p++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor8);
		vector8[p-1]= valor8;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector8,p));
		media8 = medialibro(vector8,p);
		break;
	case '9':
		n++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor9);
		vector9[n-1]= valor9;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector9,n));
		media9 = medialibro(vector9,n);
		break;
	case '10':
		m++;
		printf("escribe su valoracion del libro\n");
		scanf("%f",&valor10);
		vector10[m-1]= valor10;
		printf("La media entre todos los usuarios es: %f\n",medialibro(vector10,m));
		media10 = medialibro(vector10,m);
		break;
	}
	vectT[11] = {media1, media2,media3,media4,media5,media6,media7,media8,media9,media10};
 
}
float medialibro(int vector,int numero)
{
	int i;
	float res;
	res += vector[i]; 
	return res/numero;
}
		
		
		
	} 		
