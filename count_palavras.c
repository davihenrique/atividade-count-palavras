/*
 * procurar_palavra.c
 *
 *  Created on: 09/11/2016
 *      Author: Davi Silva 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){

char x[200];
char y[200];
int tamy,tamx;
int i;
int j;
int n = 0;
int cont = 0;

printf("Digite um parágrofo:\n\n");
gets(x);

printf("Qual palavra deseja busca:");
gets(y);

tamy = strlen(y);
tamx = strlen(x);

for(i = 0; i <tamx; i++){
    if((x[i-1] == ' ' && x[i] != ' ')|| x[0] == y[0]){
        for(j = 0; j <tamy; j++){
            if(y[j] == x[i+j] ){
                n++;
            }
        if(n == tamy && (x[i+tamy] == ' ' || i+tamy == tamx || x[i+tamy] == '.'  || x[i+tamy] == ',' )){
            cont++;
        }
        }
        n = 0;
    }
}
printf("No parágrofo tem %d vez(es) a palavra: %s\n",cont,y);
system("pause");
}