#include <stdio.h>

void print_notes() {
  FILE *fp;
  fp = fopen ("notas.txt","r");
  char buffer[200];
  printf("---------Inicio de las notas ---------\n");
  while (fgets(buffer, 200, fp) != NULL) {
    printf("%s", buffer);
  }
  printf("---------Fin de las notas ---------\n");
  fclose(fp);
}

void delete_notes() {
  FILE *fp;
  fp = fopen ("notas.txt","w");
  printf("Notas borradas\n");
  fclose(fp);
}

void write_note() {
  getchar();
  FILE *fp;
  fp = fopen ("notas.txt","a");
  char note[200];
  printf("Ingrese la nota\n");
  fgets(note, 200, stdin);
  fprintf(fp, "%s", note);
  fclose(fp);
}

void print_menu() {
  printf("Ingrese una opcion\n 1) Mostrar todas las notas \n 2) Agregar una nueva nota \n 3) Borrar todas las notas\n 4) Salir \n");
}

int main(void) {
  int selection;
  while (1) {
  print_menu();
  scanf("%d", &selection);
  switch (selection) {
    case 1:
    print_notes();
    break;
    case 2:
    write_note();
    break;
    case 3:
    delete_notes();
    break;
    case 4 :
    return 0;
    default:
    printf("Opcion Invalida\n");
    break;
  }
}
  return 0;
}
