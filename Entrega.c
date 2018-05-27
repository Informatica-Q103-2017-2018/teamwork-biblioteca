// Hemos tenido problemas para poder confirmar que en el fichero existen los usuarios que previamente se han registrado o se van a registrar y por culpa de este fallo no hemos conseguido que escriba lo que queriamos en el fichero.
// Hemos probado quitando las aperturas de los ficheros en modo lectura y hemos conseguido que escriba en el fichero pero luego en el paso de iniciar sesion teniamos el mismo problema de comprobacion del nombre o contraseña en el fichero.
// Hemos conseguido arreglarlo al final usando el fscanf en un while pero no nos compilaba entonces hemos preferido entregarle el que compilaba.
// While(fscanf(miembros,%s\t%s\t",persona.nom,persona.cont) != EOF) y luego añadimos un if(inicio.nom == persona.nom) y tendriamos que añadir una estructura igual que la que teniamos pero cambiandole el nombre a inicio (en este caso).
// Hemos mirado en foros por internet y en muchos utilizaban otras cosas distintas al fscanf para leer el fichero.
// Por lo demas creo que estaria bien pero no hemos podido comprobarlo porque no hemos conseguido que funcione correctamente el programa.
#include <stdio.h>
#include <math.h>
float medialibro(int vector[],int numero);// funcion para calcular la media de cada libro.( Cada libro va asociado a un vector)
typedef struct
{
	char nom[11];
	char cont[11];
}usuario;
void main()
{
	// iniciamos las medias de cada libro en 10 para que empiecen con una buena valoracion.
	float media1=10,media2=10,media3=10,media4=10,media5=10,media6=10,media7=10,media8=10,media9=10,media10=10;
	int w,i;
	// Vectores para guardar las valoraciones de cada libro.
	int vector1[100],vector2[100],vector3[100],vector4[100],vector5[100],vector6[100],vector7[100],vector8[100],vector9[100],vector10[100];
	char compcont, valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10;
	usuario persona[100];
	float vecT[20] = {media1, media2,media3,media4,media5,media6,media7,media8,media9,media10};
	FILE *libros;
	libros = fopen("biblioteca.txt","w");
	if (libros == NULL) 
			{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
			} 
				else 
			{ 	
			for(i=1;i<11;i++)
			{
				fprintf(libros,"libro %i \t %f \n", i, vecT[i-1] );
			}
				fclose(libros);
			}
	FILE *miembros;
	
	
	// Contadores inicializados en 0.
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
				scanf("%s", persona[100].nom);
				// Intento de lectura del vector para comprobar que no existe ese usuario.
				miembros = fopen("alumnos.txt","r");
				if (miembros == NULL) 
					{ 
						printf("Error al abrir el fichero.\n"); 
						return -1; 
					} 
				else 
					{ 	
						fscanf(miembros,"%s",persona[100].nom);
						fclose(miembros);  	
				return 0; 
					}
			} while (miembros = persona[100].nom);
		do
		{
			printf("Introduzca como quiere que sea su contraseña de usuario con un maximo de 10 espacios:");
			scanf("%s",persona[100].cont); 
			printf("Introduzca otra vez la contraseña para ver si coincide\n");
			scanf("%s", compcont);
		}   while (strcmp(persona[100].cont,compcont)!=0);
		    printf("su contraseña coincide, proceda\n");
		    
		miembros = fopen("alumnos.txt", "a");
			if (miembros == NULL) 
			{ 
				printf("Error al abrir el fichero.\n"); 
				return -1; 
			} 
				fprintf(miembros,"%s \t %s\n",persona[100].nom,persona[100].cont);
				fclose(miembros); 
				return 0; 
			
		}
		break;
	
		case 1:
			{
				printf("Puede continuar introduciendo el nombre y contraseña del usuario:\n ");
				printf("Usuario:\n");
				scanf("%s", persona[100].nom);
				fopen("miembros","r");
				if (miembros == NULL) 
				{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
				} 
				else 
				{ 	
				fscanf("miembros","%s",persona[100].nom);
				if(miembros = persona[100].nom);
				{
					printf("Usuario correcto\n");
				} 	
				fclose(miembros); 
				return 0; 
				}
				
			printf("Contraseña:\n");
			scanf("%s", persona[100].cont);
			fopen("miembros","r");
			if (miembros == NULL) 
				{ 
					printf("Error al abrir el fichero.\n"); 
					return -1; 
				} 
				else 
				{ 	
				fscanf("miembros","%s",persona[100].cont);
				if(miembros = persona[100].cont);
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
		// (Para todos los casos)-> Tenemos un contador que incrementa de uno en uno cada vez que un usuario coge el libro 
		//deseado. Tambien hay un vector que almacena las valoraciones y al final aplicamos la funcion para calcular la media total de cada libro entre los usuarios.
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
