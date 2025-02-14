#include <stdio.h>
#include "usuario.c"
#include "hotel.c"

void exibirMenuInicial(){
  printf("Escolha uma opção \n");
  printf("1 - Entrar com uma conta existente  \n");
  printf("2 - Cadastrar nova conta \n");

  return;
}

void exibirMenuLogado(int role){
  printf("Escolha uma opção \n");
  printf("1 - Exibir quartos disponíveis \n");
  printf("2 - Alugar quarto \n");

  if(role == 1) printf("5 - Acessar ADMIN - Menu administrador \n");

  return;
}

void exibirMenuAdmin(){
  printf("Escolha uma opção \n");
  printf("1 - Listar Usuários \n");
  printf("2 - Exibir todos os quartos \n");
  printf("3 - Exibir quartos em uso \n");
  printf("4 - Cadastrar novos quartos \n");
  printf("5 - Deletar quarto existente \n");
  printf("6 - Bloquear usuário \n");
  printf("7 - Exibir métricas faturamento \n");


  return;
}

void controlarMenuInicial(){
  short int opt = 0;

  do{
    exibirMenuInicial();
    scanf("%hd", &opt);
  }while(opt <= 0 || opt > 2);

  switch(opt){
    case 1:
      controlarLoginUsuario();
      break;
    case 2:
      controlarRegistroUsuario();
      break;
  }
}

int main(){
  controlarMenuInicial();

  return 0;
}