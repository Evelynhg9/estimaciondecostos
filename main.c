#include <stdio.h>

extern float func_ufp(int ei, int eo, int eq, int ilf, int eif);
extern float func_fp(int tot);
extern float func_ldc(float fp, int lang);
extern float func_energia(int tipo, float ldc);
extern float func_meses(int tipo, float energia);
extern float func_personas(float energia, float meses);
extern float func_total(float personas, float meses, int lang);

int main(void)
{
  int ei, eo, eq, ilf, eif, tot, lang = 0, tipo = 0, opc;
  float ldc = 0, energia, meses, personas, total, fp, ufp = 0;
  
  system("clear");
  printf(" ----- Bienvenido al sistema de calculo de un sistema de software. ----- ");
  printf("\n\n    Este programa realiza el calculo de un sistema de software por medio de la utilizacion de Puntos de Funcion.\nPresione enter para continuar.\n");
  
  getchar();
 
  while(1){
 
    system("clear");

    printf(" ----- MENU PRINCIPAL ----- ");
    printf("\n\nPara seleccionar una opcion teclee el numero indicado y presione enter. Si desea modificar alguna seccion vuelva a seleccionar la opcion.\n");
    if(ufp == 0){
      printf("\n1. Calcular Puntos de Funcion.");
    }
    else{
      printf("\n1. Calcular Puntos de Funcion. ---------------> %f", ufp);
    }


    if(tot == 0){
      printf("\n2. Calcular complejidad.");
    }
    else{
      printf("\n2. Calcular complejidad. ---------------------> %d", tot);
      printf("\n     Puntos de Funcion ajustados: %f ", fp); 
    }


    if(lang == 0){
      printf("\n3. Seleccionar lenguaje de programacion.");
    }
    else if(lang == 1){
      printf("\n3. Seleccionar lenguaje de programacion. -----> Java");
    }
    else if(lang == 2){
      printf("\n3. Seleccionar lenguaje de programacion. -----> Javascript");
    }
    else if(lang == 3){
      printf("\n3. Seleccionar lenguaje de programacion. -----> C");
    }
    else if(lang == 4){
      printf("\n3. Seleccionar lenguaje de programacion. -----> C#");
    }
    if(lang != 0){
      printf("     Total de lineas de codigo estimadas: %f LDC", ldc);
    }


    if(tipo == 0){
      printf("\n4. Seleccionar el tipo de proyecto.");
    }
    else if(tipo == 1){
      printf("\n4. Seleccionar el tipo de proyecto. ---------------> Organico");
    }
    else if(tipo == 2){
      printf("\n4. Seleccionar el tipo de proyecto. ---------------> Medio");
    }
    else if(tipo == 3){
      printf("\n4. Seleccionar el tipo de proyecto. ---------------> Embebido");
    }

    printf("\n5. Calcular costo total del proyecto.");

    printf("\n\nOPCION: ");

    scanf("%d", &opc);

    switch(opc){

    case 1:

      system("clear");
      printf("     Para calcular los Puntos de Funcion del programa conteste las siquientes preguntas:\n");
      printf("\n\n¿Cuantas entradas de usuario tiene el sistema?\n");
      scanf("%d", &ei);
      printf("\n¿Cuantas salidas de usuario tiene el sistema?\n");
      scanf("%d", &eo);
      printf("\n¿Cuantas peticiones de usuario tiene el sistema?\n");
      scanf("%d", &eq);
      printf("\n¿Cuantos archivos manejara el sistema?\n");
      scanf("%d", &ilf);
      printf("\n¿Cuantas cuantas interfaces externas manejara el sistema?\n");
      scanf("%d", &eif);
      //ufp = func_ufp(ei, eo, eq, ilf, eif);
      ufp = 60;
      system("clear");
      printf("     Los puntos de funcion sin ajustar son: %.0f", ufp);
      getchar();
      getchar();

      break;

    case 2:

      break;

    case 3:

      break;

    case 4:

      break;

    case 5:

      break;

    case 6:

      exit(0);

      break;

    default:

      system("clear");
      printf("Opcion invalida, por favor intente de nuevo");
      getchar();
    }
    
  }

  return 0;
}
