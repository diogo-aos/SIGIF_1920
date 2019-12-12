#include <stdio.h>
#define DB_SIZE 1000
#define BUFFER_SIZE 30


typedef struct {
  char fabricante[50];
  char modelo[50];
  int num_cauda;
  char esquadra[50];
  int horas_voo;
  char estado;  // avaria, OPERACIONAL
  int periodo_checkA;
  int periodo_checkB;
  unsigned long int data_checkA;
  unsigned long int data_checkB;
} Aeronave;



void menu_principal();
int carregar_aeronaves(char * fn, Aeronave * db, int n_aeronaves);

int main(void) {
  Aeronave DB[DB_SIZE];
  int n_aeronaves;


  printf("Hello World\n");
  return 0;
}


void menu_principal(){

}

int carregar_aeronaves(char * fn, Aeronave * db, int n_aeronaves){
  // abrir ficheiro de texto
  // ler aeronaevs para db
  // fechar ficheiro
  // retornar numero de aeronaves lidas
}