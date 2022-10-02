#include <stdio.h>
#include <stdlib.h>

struct convert{
    int horas,minutos;
};

typedef struct convert Struct;

Struct cont_time(int h1, int m1, int h2, int m2){
    int min_total=0;
    int hour_total=0;
    Struct res;
    
    if(m2>=m1){
        min_total = m2-m1;
    }
    else{
        min_total = (60-(m1-m2));
    }
    
    if(h2>h1){
        hour_total = h2-h1;
    }

    else if(h1 == h2 ){
        if(m1>m2){
            hour_total = 23;
        }
        else{
            hour_total = 0;
        }
    }
    
    else{
        hour_total = ((24-h1)+h2);
    }

    min_total += hour_total*60;
    res.horas = hour_total;
    res.minutos = (min_total%60);

    return res;
}




int main(){
    int hora_inicio,hora_fim,min_inicio,min_fim;
    Struct resp;

    printf("inicio/final: ");
    scanf("%i:%i/%i:%i", &hora_inicio,&min_inicio,&hora_fim,&min_fim);

    resp = cont_time(hora_inicio,min_inicio,hora_fim,min_fim);

    printf("%d:%d", resp.horas,resp.minutos);



    return 0;
}
