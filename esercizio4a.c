/*
Creare una struttura Studente caratterizzata da un nome, cognome e dal numero di esami sostenuti.
Implementare le funzioni setCognome, getCognome, setNumeroEsami e getNumeroEsami che ne impostano e
restituiscano rispettivamente il cognome e il numero di esami dello studente.
Nota: non porrere limiti alla lunghezza del cognome.
Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).
PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.
Calcolare la somma dei voti degli studenti.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNARRAY 100000

typedef struct{
    char *nome;
    char *cognome;
    int voto;
} Studente;

void setNome(Studente *s, char *nome){
    //alloco spazio per il s->nome in base a nome
    s->nome=malloc(strlen(nome)+1);
    strcpy(s->nome, nome);
}

void setCognome(Studente *s, char *cognome){
    //alloco spazio per il s->cognome in base a cognome
    s->cognome=malloc(strlen(cognome)+1);
    strcpy(s->cognome, cognome);
}

void getCognome(Studente *s, char *buf, int len){
    //lunghezza della stringa quindi escluso il \0
    //copio la stringa cognome di studente nel buffer limitatamente a len
    strncpy(buf, s->cognome, len);
    //per sicurezza termino la stringa
    buf[len+1]='\0';
}

void setVoto(Studente *s, int voto){
    s->voto = voto;
}

void freeStudente(Studente *s){
    free(s->nome);
    free(s->cognome);
}

int getVoto(Studente *s){
    return s->voto;
}

int main(){
    Studente *studenti;
    int i, sommavoti=0;
    char *buf=malloc(50);

    //alloco spazio per l'array di studenti
    studenti=malloc(sizeof(Studente)*LUNARRAY);
    if (!studenti){
        //studenti troppo grande esco
        return 1;
    }

    //riempio l'array usando le funzioni già definite
    for (i=0;i<LUNARRAY;i++){
        //gli studenti partono da 0
        sprintf(buf,"Studente_%d",i+1);
        setCognome(&studenti[i], buf);
        setVoto(&studenti[i], (i+1)%10);
    }

    //calcolo la somma dei voti leggendoli tramite getVoto
    for (i=0;i<LUNARRAY;i++){
        sommavoti+=getVoto(&studenti[i]);
        /*
        //print dell'intero array
        getCognome(&studenti[i], buf, 50-1);
        printf("%s %d\n", buf, studenti[i].voto);*/

    }
    printf("%d\n",sommavoti);

    //libero heap per studenti
    for (i=0;i<LUNARRAY;i++){
        freeStudente(&studenti[i]);
    }
    //e libero il resto
    free(buf);

    free(studenti);
    return(0);
}
