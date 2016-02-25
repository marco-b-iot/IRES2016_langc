/*
Creare una struttura Software caratterizzata da un nome e da una versione.
Implementare le funzioni setName, getName, setVersion, getVersion che ne impostano e restituiscano rispettivamente il nome e versione del software.
Nota: non porrere limiti alla lunghezza del nome e cognome.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNARRAY 100000
typedef struct{
    char *name;
    int version;
} Software;

void setName(Software *s, char *name){

    s->name=malloc(strlen(name));
    strcpy(s->name, name);
}

char* getName(Software *s, char *retbuf){

    int len=strlen(retbuf);
    strncpy(retbuf, s->name, len);
    retbuf[len+1]='\0';
}


void setVersion(Software *s, int version){

    s->version = version;
}

int getVersion(Software *s){

    return s->version;
}


int main(){
    Software *a;
    int i;
    char *buf=malloc(50);

    a=malloc(sizeof(Software)*LUNARRAY);

    for (i=0;i<100000;i++){
        sprintf(buf,"SW%d",i);
        setName(&a[i],buf);
        setVersion(&a[i], i);
    }

    buf=malloc(10000);
    for (i=0;i<100000;i++){
        getName(&a[i],buf);
        printf("%s %d",buf, getVersion(&a[i]));
    }

    exit(0);
}
