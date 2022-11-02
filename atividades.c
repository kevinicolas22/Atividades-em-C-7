#include <stdio.h>
#include <math.h>

//Q1

void anobi(int ano){
  if (ano % 4 == 0 && ano % 100 != 0){
    printf("Ano é bissexto");
  }
  else {
    printf("Ano N é bissexto");
  }
}

int main(void) 
{
  int anobisex;
  printf("Digite o ano: ");
  scanf("%d", &anobisex);

  anobi(anobisex);
}

//Q2

void imprimepotencia(double x1, int x2, double x3){
    do{
    double result = pow(x1, x3);
    printf("%.1f\n", result);
    x1++;
    } while(x1 <= x2);
  
}

int main()
{
  int y1,y2,y3;  
  printf("Digite o valor inicial ");
  scanf("%d", &y1);
  printf("Digite o valor final ");
  scanf("%d", &y2);
  printf("Informe o expoente "); 
  scanf("%d", &y3);
 
  imprimepotencia(y1, y2, y3);
}

//D1

int numprimo(int num){
  int primo = 1;
  for(int i = 2; i<num;){
    if(num%i==0){
      primo = 0;
    }
    i++;
  }
  return primo;
}

int main(){
  int Num, resultado;
  printf("Digite um num: ");
  scanf("%d", &Num);

  resultado = numprimo(Num);
  if(resultado == 1){
    printf("Primo");
}
  else{
    printf("N é primo");
  }
}

//Q3

int somatorio(int num){
  int soma = 0;
  for(int i = 1; i<= num; i++){
    soma = soma + i;
  }
  return soma;
}

int main(){
  int Num, soma;
  printf("Digite um numero para exibir seu somatório ");
  scanf("%d", &Num);
  soma = somatorio(Num);
  printf("%d", soma);
}

//D2

int fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

// Funcao principal.

int main() {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}

//D3

int numprimo(int num){
  int resultado = 0;
  for(int i = 1; i<= num; i++){
    if(num%i==0){
      continue;
    }
    else{
      i = i + 1;
    }
    resultado = i;
  }
  return resultado;
}

int main(){
  int Num = 4, resultado;

  resultado = numprimo(Num);
 
  printf("Existem %d N primos até 100", resultado);
}


int numprimo(int num){
  int primo = 0;
  for(int i = 2; i<=num;i++){
    if(i%2==0){
      printf("0\n");
      if(i == 2){
        continue;
      }
    }
     else{
      printf("\n\n1\n");
    }
    if(i%3==0){
      printf("0\n");
    }
    else{
      printf("1\n");
    }
  }
  return primo;
}


int main(){
  int Num = 5, resultado;

  resultado = numprimo(Num);
  //printf("%d", resultado);
}


