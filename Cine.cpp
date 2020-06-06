#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <windows.h>

int main () {
	
	char opcion,seguir;
	
	printf("\n\n **********BIENVENIDO A CINEMEMES**********\n\n");
	printf("               MENU PRINCIPAL ");
	
	do {
		
		printf("\n\n Seleccione a que opcion desea ingresar: \n");
	printf("\n 1. Inicio");
	printf("\n 2. Cines");
	printf("\n 3. Cartelera");
	printf("\n 4. Promociones");
	printf("\n 5. Invitado Especial");
	printf("\n 6. Categorias");
	printf("\n 7. Recomendaciones");
	printf("\n 8. Premium");
	printf("\n 9. Proximos estrenos");
	printf("\n a. Iniciar sesion");
	printf("\n b. Registrarse");
	printf("\n c. Contacto");
	printf("\n d. Salir");
	
	
	do {
		
		printf("\n\n Introduce una opci%cn (1-13): " , 162);
		fflush( stdin );
		scanf("%c", &opcion);
		
     } while (opcion < '1' || opcion > '13');
      
	
	switch (opcion)
	
	{	
		case '1': 
		system("cls");
		printf("\n Bienvenido al Inicio");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '2': 
		system("cls");
		printf("\n Bienvenido a la seccion de Cines");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '3': 
		system("cls");
		printf("\n Bienvenido a la Cartelera");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '4': 
		system("cls");
		printf("\n Bienvenido a la seccion de Promociones");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '5': 
		system("cls");
		printf("\n Bienvenido a la seccion de Invitado Especial");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '6': 
		system("cls");
		printf("\n Bienvenido a la seccion de Categorias");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '7': 
		system("cls");
		printf("\n Bienvenido a la seccion de Recomendaciones");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '8': 
		system("cls");
		printf("\n Bienvenido a la seccion Premium");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case '9': 
		system("cls");
		printf("\n Bienvenido a la seccion de Proximos Estrenos");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case 'a': 
		system("cls");
		printf("\n Ingresa tus datos para Iniciar sesion");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case 'b': 
		system("cls");
		printf("\n Ingresa tus datos para Registrarte");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		case 'c': 
		system("cls");
		printf("\n Bienvenido a la pagina de Contacto");
		printf("\n\n Desea volver al menu principal? (s/n)");
  	    fflush( stdin );
        scanf( "%c", &seguir );
        if (seguir != 's') 
        return 0;
		break;
		
		}
	
} 

  while (opcion != 'd'); 
  printf("\n\n ADIOS");
return 0;			
	
}


