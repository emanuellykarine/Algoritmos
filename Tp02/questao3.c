#include <stdio.h>

int main(){
  int opMenu = 0;
  int opCandidato;
  int emanuM = 0, georS =0, plaN=0, jorgS=0, votoN=0, votoB=0;

  while (opMenu != 2){
    printf("1 - Votar \n2 - Mostrar resultado\n");
    printf("Digite a opção que deseja executar: ");
    scanf("%d", &opMenu);

    if (opMenu == 1){
      printf("\n1 - Emanuelly Karine \n2 - George da Silva \n3 -Placido Neto \n4 - Jorgiano da Silva \n5 - Voto nulo \n6 - Voto em branco");
      printf("\nDigite o numero do candidato: ");
      scanf("%d", &opCandidato);
      if (opCandidato == 1){
        printf("Voto registrado\n");
        emanuM++;
      } else if (opCandidato == 2){
        printf("Voto registrado\n");
        georS++;
      } else if (opCandidato == 3){
        printf("Voto registrado\n");
        plaN++;
      } else if (opCandidato == 4){
        printf("Voto registrado\n");
        jorgS++;
      } else if (opCandidato == 5){
        printf("Voto registrado\n");
        votoN++;
      } else{
        printf("Voto registrado\n");
        votoB++;
      }
    } else {
      printf("Resultado dos votos: \n");
      printf("Emanuelly Karine = %d votos\n", emanuM);
      printf("George da Silva = %d votos\n", georS);
      printf("Placido Neto = %d votos\n", plaN);
      printf("Jorgiano da Silva = %d votos\n", jorgS);
      printf("Nulos = %d votos\n", votoN);
      printf("Branco = %d votos\n", votoB);
      break;
    }
  }
  return 0;
}