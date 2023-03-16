#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define pol 40
#define file 15

  void mostracadeira(int &B){

  	for (int i=0; i<pol; ++i){

		 for(int j=0; j < file ; ++j){
	     cout<< " . " << endl;
		 }

		 }

     }	

int main(int argc, char** argv){
   bool p = true;
 do {
	int u;
	int i;
	int j;
	int *apont;
	int **A;

	A = (int**)malloc(pol * sizeof(int));

	
     for(i=0; i<pol; i++){

		A[i] = (int*)malloc(file * sizeof(int));

	   }

	cout << " 0 - para finalizar o processo" << endl;
	cout << " 1 - revesar poltrona" << endl;
	cout << " 2 - mapa de ocupação " << endl;
	cout << " 3 - Tabela de preço" << endl;
	cin >> u;

	 if(u==1){
	 	*apont++;
		 cout << " Seu lugar foi reservado com sucesso" <<endl;
	  }else{
		 cout << "Sem vaga" << endl;
	  }

	  if(u==2){
	 	 mostracadeira(A);
	  }
	  if( u == 0){
		 p = false
	    }
           }
  while ( p = true );
return 0;	
}   
 