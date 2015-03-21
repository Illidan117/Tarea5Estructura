#include "Evaluador.h"

void evaluar()
{
    int infinito = 9999;
    int grafo[5][5];

    for(int col=0;col<5;col++)
        for(int fila=0;fila<5;fila++)
            if(fila==col)
                grafo[fila][col]=0;
            else
                grafo[fila][col]=infinito;

    grafo[0][1]=2;
    grafo[0][2]=6;
    grafo[0][3]=7;

    grafo[1][3]=3;
    grafo[1][4]=6;

    grafo[2][4]=1;

    grafo[3][4]=5;


    double nota = 0;

    cout<<"Ejercicio existeCamino():\t\t";
    if(obtenerDistanciaAristaDirecta(grafo,1,1)==0
        && obtenerDistanciaAristaDirecta(grafo,1,4)==6
        && obtenerDistanciaAristaDirecta(grafo,4,2)==infinito
        && obtenerDistanciaAristaDirecta(grafo,3,4)==5
        && obtenerDistanciaAristaDirecta(grafo,2,1)==infinito
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio obtenerListaDeAristas():\t";

    if(obtenerListaDeAristas(grafo,3).size()==1 && obtenerListaDeAristas(grafo,3)[0]==4
    && obtenerListaDeAristas(grafo,2).size()==1 && obtenerListaDeAristas(grafo,2)[0]==4
    && obtenerListaDeAristas(grafo,1).size()==2 && (obtenerListaDeAristas(grafo,1)[0]==3 || obtenerListaDeAristas(grafo,1)[0]==4)
    && obtenerListaDeAristas(grafo,1).size()==2 && (obtenerListaDeAristas(grafo,1)[1]==3 || obtenerListaDeAristas(grafo,1)[1]==4)
    && obtenerListaDeAristas(grafo,0).size()==3 && (obtenerListaDeAristas(grafo,0)[0]==1 || obtenerListaDeAristas(grafo,0)[0]==2 || obtenerListaDeAristas(grafo,0)[0]==3)
    && obtenerListaDeAristas(grafo,0).size()==3 && (obtenerListaDeAristas(grafo,0)[1]==1 || obtenerListaDeAristas(grafo,0)[1]==2 || obtenerListaDeAristas(grafo,0)[1]==3)
    && obtenerListaDeAristas(grafo,0).size()==3 && (obtenerListaDeAristas(grafo,0)[2]==1 || obtenerListaDeAristas(grafo,0)[2]==2 || obtenerListaDeAristas(grafo,0)[2]==3))
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existeCamino():\t\t";
    double nota_existe = 0;
    if(!existeCamino(grafo,4,1,5) && existeCamino(grafo,1,4,5) && !existeCamino(grafo,3,1,5) && existeCamino(grafo,2,4,5))
    {
        nota_existe+=1.5;
    }
    if(existeCamino(grafo,0,4,5) && !existeCamino(grafo,4,1,5) && existeCamino(grafo,1,4,5) && !existeCamino(grafo,3,1,5) && existeCamino(grafo,2,4,5))
    {
        nota_existe+=1.5;

    nota+=nota_existe;
    if(nota_existe==1.5)
    {
        cout<<"Correcto"<<endl;
    }
    }else if(nota_existe>0)
    {
        cout<<"Casi"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
