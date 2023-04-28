#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <gc.h>



//QUESTÃO 1
//Seja o seguinte trecho de programa:
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
//Determine o valor das seguintes expressões:
//a) 
p == &i;
printf(p);
//Return = 1
//b)
*p - *q;
printf(*p - *q);
//Return = -2
//c)
**&p;
printf(**&p);
//Return = 3
//d)
3 - *p/(*q) + 7;
printf(3 - *p/(*q) + 7;);
//Return = 10

//_________________________________**_______________________________________//

//QUESTÃO 2
//Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);


//Return: f93bac64 7 5 15 9
//_________________________________**_______________________________________//


//QUESTÃO 3
//Se  i  e  j  são  variáveis  inteiras  e  p  e  q  ponteiros  para  int,  
//quais  das  seguintes  expressões  de atribuição são ilegais?
int *p, *q, i,j;
p = i;
q = &j;
p = &*&i;
i = (*&)j;
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q

//return: O compilador atribuiu "i = (*&)j" como ilegal

//_________________________________**_______________________________________//

//QUESTÃO 4
//Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  
//execute-o  e  verifique  se foram obtidas as respostas esperadas).

int    valor, *p1, idade, vetor[3], *p4, *p5;
float  temp, *p2;
char   aux, *nome = "Ponteiros", *p3;

valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor);

//a) Return: 20

temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp);

//b) Return: 29.0

p3 = &nome[0];
aux = *p3;
printf("%c \n", aux);

//c) Return: P

p3 = &nome[4];
aux = *p3;
printf("%c \n", aux);

//d) Return: e

p3 = nome;
printf("%c \n", *p3);

//e) Return: P

p3 = p3 + 4;
printf("%c \n", *p3);

//f) Return: e

p3--;
printf("%c \n", *p3);

//g) Return: t

vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade);

//h) Return: 31

p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade);

//i) Return: 45

p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade);

//j) Return: 27

p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade);

//l) Return: 31

p5 = &vetor[2] - 1;
printf("%d \n", *p5);

//m) Return: 45

p5++;
printf("%d \n", *p5);
return(0);

//n) Return: 27

//_________________________________**_______________________________________//


//QUESTÃO 5
//Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  
//execute-o  e  verifique  seforam obtidas as respostas esperadas).

float v[5] = {1.1,2.2,3.3,4.4,5.5};
float *x;
int i;
x = v;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, v[i]);
    printf("*(f + %d) = %.1f",i, *(x+i));
    printf("&vet[%d] = %X",i, &v[i]);
    printf("(f + %d) = %X",i, x+i);
    }


//Return:

//contador/valor/valor/endereco/endereco
//i = 0vet[0] = 1.1*(x + 0) = 1.1&v[0] = 35853360(x+0) = 35853360
//i = 1vet[1] = 2.2*(x + 1) = 2.2&v[1] = 35853364(x+1) = 35853364
//i = 2vet[2] = 3.3*(x + 2) = 3.3&v[2] = 35853368(x+2) = 35853368
//i = 3vet[3] = 4.4*(x + 3) = 4.4&v[3] = 3585336c(x+3) = 3585336c
//i = 4vet[4] = 5.5*(x + 4) = 5.5&v[4] = 35853370(x+4) = 35853370

//_________________________________**_______________________________________//

//QUESTÃO 6 
//Assumindo  que  pulo[]  é  um  vetor  do  tipo  int,  quais  das  seguintes  
//expressões  referenciam  o valor do terceiro elemento do vetor?

int pulo[];
*(pulo + 2);
*(pulo + 4);
pulo + 4;
pulo + 2;

// Return: *(pulo + 2)

//_________________________________**_______________________________________//

//QUESTÃO 7 
//Considerando  a  declaração  int  mat[4],  *p,  x;,  quais  das  seguintes  expressões  são  válidas?Justifique.

int mat[4], *p,x;
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;

//Return:
//As expressões válidas são: "p = mat + 1" e "x = (*mat)++";

//_________________________________**_______________________________________//


//QUESTÃO 8
//O que fazem os seguintes programas em C?
//a)
    int vet[] = {4, 9, 13};
    int i;
        for(i=0;i<3;i++){
                printf("%d ",*(vet+i));
        }*/

//Return : O código retorna os valores armazenados no vetor utilizando o ponteiro.


//b)
      int vet[] = {4,9,13};
      int i;
        for(i=0;i<3;i++){
            printf("%X ",vet+i);
      }
//Return: Para esse caso, a resposta terá como valor o endereço de memória dos elementos do vetor.

//_________________________________**_______________________________________//


//QUESTÃO 9
//Seja  x  um  vetor  de  4  elementos,  declarado  da  forma  TIPO  x[4];.  
//Suponha  que  depois  da declaração,  x  esteja  armazenado  no  endereço  de  memória  4092  
//(ou  seja,  o  endereço  de  x[0]). Suponha  também  que  na  máquina  seja  usada  uma  variável  
//do  tipo  char  ocupa  1  byte,  do  tipo int  ocupa  2  bytes,  do  tipo  float  ocupa  4  bytes  
//e  do  tipo  double  ocupa  8  bytes.  Quais  serão  os valores de x+1, x+2 e x+3 se:

//a) 
x for declarado como char? 
//Return: 4093, 4094, 4095

//b) 
x for declarado como int? 
//Return: 4094, 4096, 4098

//c) 
x for declarado como float? 
//Return: 4096, 4100, 410E

//d) 
x for declarado como double? 
//Return: 4100, 410E, 411C

//_________________________________**_______________________________________//


//QUESTÃO 10
//Implemente  um  programa  de  computador  para  testar  estas  suposições  e  compare  
//as  respostas oferecidas pelo programa com as respostas que você idealizou.

    int i;
    char x1[4] = {"1234"};
    int x2[4] = {1, 2, 3, 4};
 	float x3[4] = {1, 2, 3, 4};
 	double x4[4] = {1, 2, 3, 4};

        for(i=0;i<4;i++){
            printf("char x + %d = %p \n",i+1 ,(x1+i));
        }
        for(i=0;i<4;i++){
            printf("int x + %d = %p \n",i+1 ,(x2+i));
        }
        for(i=0;i<4;i++){
            printf("float x + %d = %p \n",i+1 ,(x3+i));
        }
        for(i=0;i<4;i++){
            printf("double x + %d = %p \n",i+1 ,(x4+i));
        }

//_________________________________**_______________________________________//



//QUESTÃO 11
//Suponha que as seguintes declarações tenham sido realizadas:
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

//Identifique quais dos seguintes comandos é válido ou inválido:
//a) Return: válido
aloha[2] = value;

//b) Return: válido
scanf("%f", &aloha);

//c) Return: inválido
aloha = value'';

//d) Return: válido
printf("%f", aloha);

//e)Return: válido
coisas[4][4] = aloha[3];

//f)Return: inválido
coisas[5] = aloha;

//g)Return: inválido
pf = value;

//h)Return: válido
pf = aloha;

//_________________________________**_______________________________________//


//QUESTÃO 12
//O  que  é  um  ponteiro  para  uma  função?  Pesquise  na  Internet  referências  sobre  o  assunto  
//e escreva um pequeno programa exemplificando o uso deste recurso.

//Return: O uso de ponteiros para funções servem para apontar o local virtual da função na memória
//Exemplo de aplicação:

int funcao( int a){
    return a + 1;
}

int main(void){
    int (*pf) (int) = &funcao;
    printf ("valor = &d", pf(1));
}

//_________________________________**_______________________________________//


//QUESTÃO 13
//Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo  
//float  e  os  apresente  em  ordem  crescente.  Utilize  alocação  dinâmica  de  memória  pararealizar a tarefa

float funcao_ordenadora(float v[5]){
    int temp[5];
    int i;
    for (i=0; i<5; i++){
        if(v[i] > v[i+1]){
            temp[i] = v[i];
            v[i] = v[i+1];
            v[i+1] = temp[i];
        }

    }
    return v[5];
}

int main(void){

    float vetor[5] = {5.0, 0, 2.0, 3.0, 1.0};

    funcao_ordenadora(vetor);
    printf(funcao_ordenadora(vetor));
    return 0;
}



//_________________________________**_______________________________________//


//QUESTÃO 14
//Reimplemente o programa da questão anterior utilizando a função qsort() do C. 
//Comente o seu código, explicando o que faz cada uma das linhas


int funcao_qsort_compara(const void *x, const void *y){
    return (int) (*(int *)x - *(int*)y);//comparação dos elementos
}

int main(){
    float vetor[5] = {5.0, 0, 2.0, 3.0, 1.0};

    qsort(vetor,5,sizeof(int), funcao_qsort_compara);//ordenação do vetor
    for(int i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

//_________________________________**_______________________________________//


//QUESTÃO 15
//Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria funçãode ordenação. 
//Para isso, sua função deverá receber, entre outros argumentos, um ponteiro paraa função de comparação.


int funcao_qsort_compara(const void *x, const void *y){
    const int *a = x;
    const int *b = y;
    return *a - *b;
}

int main(){
    float vetor[5] = {5.0, 0, 2.0, 3.0, 1.0};

    qsort(vetor,10,sizeof(int), funcao_qsort_compara);
    for(int i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

//_________________________________**_______________________________________//


//QUESTÃO 16
//Procure  na  internet  mecanismos  que  possibilitem  medir  tempos  de  execução  de  rotinas
//computacionais.  Geralmente,  estas  medidas  são  realizadas  com  o  auxílio  de  funções  em  C  que
//lêem  a  hora  no  sistema  (sistemas  Unix  e  Windows  geralmente  usam  funções  diferentes).
//Utilizando  os  conhecimentos  que  você  obteve  com  sua  pesquisa,  meça  os  tempos  de  execuçãodas 
//implementações que você criou para os dois problemas de ordenação anteriores e compareos resultados obtidos.


int main(int argc, char *argv[]){

    float duracao;
    time_t t_ini, t_fim;

    t_ini = time(NULL);

    for(int i=0; i <1000000; i++){
        for(int j=0; j<1000000; j++);
    }
    t_fim = time(NULL);

    duracao = difftime(t_fim, t_ini);

    printf("Tempo: %f\n", duracao);
    return 0;
}

//_________________________________**_______________________________________//


//QUESTÃO 17
//Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores 
//(os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,se o primeiro vetor contiver os elementos 
//1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,5, -3 e 1, o vetor de soma terá valores resultantes iguais a 
//4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.

int funcao_soma(int x, int y, int *v1[],int *v2[]){
    int z;
    if(x>y){
        z=x;
    }
    if(y>x){
        z=y;
    }
    int v3[z];
    for(int i=0; i<z; i++){
        v3[i]= *v1[i]+ *v2[i];
        printf("soma eh: %d\n", v3[i]);
    }
}
int main(){
    int x,y, soma;
    printf("Digite a quantidade no primeiro vetor: ");
    scanf("%d", &x);
    printf("Digite a quantidade no segundo vetor: ");
    scanf("%d", &y);
    int *v1[x], *v2[y];
        for( int i=0; i<x; i++){
            printf("Digite os numeros do primeiro vetor:v1[%d]:\n",i);
            scanf("%d", &v1[i]);
        }
        for(int i=0; i<y; i++){
            printf("Digite os numeros do segundo vetor:v2[%d]:\n",i);
            scanf("%d", &v2[i]);
        }
    funcao_soma();
    free(v1);
    free(v2);
    return 0;
}

//_________________________________**_______________________________________//



//QUESTÃO 18
//Crie  uma  função  capaz  de  realizar  multiplicação  matricial  da  forma  C=A*B.  
//A  função  devereceber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
//e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas de B). 
//O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar sua implementação,  
//capaz  de  utilizar  a  função  de  multiplicação  e  imprimir  as  três  matrizes.  A função criada para multiplicação 
//não deve realizar nenhum tipo de saída de dados no terminal

void funcao_multiplica_matriz(int linha_a, int coluna_a, int linha_b, int coluna_b){
    float m_a[linha_a][coluna_a], m_b[linha_b][coluna_b], m_c[linha_a][coluna_b], aux = 0;
    int x, i, j;
    if(coluna_a == linha_b){
        for(i = 0; i < linha_a; i++){
            for(j = 0; j < coluna_a; j++){
                printf("\n\n Digite o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);
                scanf("%f", &m_a[i][j]);
            }
            printf("\n");
        }
        for(i = 0; i < linha_b; i++){
            for(j = 0; j < coluna_b; j++){
                printf("\n\n Figite o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);
                scanf("%f", &m_b[i][j]);
            }
            printf("\n");
        }
        printf(" Resultado:\n\n");
        for(i = 0; i < linha_a; i++){
            for(j = 0; j < coluna_b; j++){
                m_c[i][j] = 0;
                for(x = 0; x < linha_b; x++){
				aux +=  m_a[i][x] * m_b[x][j];
                }
                m_c[i][j] = aux;
                aux = 0;
            }
        }
        for(i = 0; i < linha_a; i++){
            for(j = 0; j < coluna_b; j++){
                printf("%6.f", m_c[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }
    else{
        printf("\n\n Nao ha como multiplicar as matrizes dadas ");
    }
}
int main(void){
    int *linha_a, *coluna_a, *linha_b, *coluna_b;
    printf("\n Digite a quantidade de linhas da matriz A : ");
    scanf("%d",&linha_a);
    printf("\n Digite a quantidade de colunas da matriz A : ");
    scanf("%d",&coluna_a);
    printf("\n Digite a quantidade de linhas da matriz B : ");
    scanf("%d",&linha_b);
    printf("\n Digite a quantidade de colunas da matriz B : ");
    scanf("%d",&coluna_b);

    funcao_multiplica_matriz(linha_a, coluna_a, linha_b, coluna_b);
    free(linha_a);
    free(linha_b);
    free(coluna_a);
    free(coluna_b);

}

//_________________________________**_______________________________________//



//QUESTÃO 19
//Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. 
//O processo  de  instalação  dessa  biblioteca  em  sistemas  Windows  pode  ser  um  pouco  trabalhoso.
//Entretanto,  em  sistemas  Unix,  a  instalação  é  bem  simples,  de  sorte  que  se  recomenda  a resolução
//desta questão em uma máquina, por exemplo, com Linux instalado. Caso seja usuário Windows e não queira instalar 
//sistemas alternativos em seu computador, use uma ferramentade  virtualização  (ex:  VirtualBox)  para  instalar  e  
//executar  o  Linux  sem  alterar  a  instalaçãooriginal de seu computador. Prepare um pequeno programa-exemplo 
//demonstrando como usar a biblioteca.

//Exemplo de utilização

int  main (){
    GC_INIT();
    int *x = (int *) GC_MALLOC (100 *sizeof (int));
    int *y = (int *) GC_MALLOC (100 *sizeof (int));
    *x = 10;
    *y = 10;
    int soma = *x + *y;
    printf("Soma: % d ", soma);
    return  0;
}


//QUESTÃO 20
//Com  base  no  programa-exemplo  da  questão  anterior,  proponha  uma  aplicação  que  permita
//comparar   o   desempenho   das   funções   tradicionais   de   alocação/liberação   de   memória   da
//linguagem c (malloc/free) com as funções de gerenciamento de memória da biblioteca que você escolheu. 
//A aplicação deverá ser capaz de ressaltar possíveis atrasos de tempo provenientes do coletor de lixo utilizado.
