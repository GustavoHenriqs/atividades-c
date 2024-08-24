#include <stdio.h>
#include <locale.h>



int main (){
	int compromisso, cidade, dinheiro, perto, chovendo;
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	
	printf("Tenho compromisso no dia?\n");
	scanf("%d", &compromisso);
	
	printf("Vou estar na cidade?\n");
	scanf("%d", &cidade);
	
	printf("Tenho dinheiro?\n");
	scanf("%d", &dinheiro);
	
	printf("Está chovendo?\n");
	scanf("%d", &chovendo);
	
	printf("É perto?\n");
	scanf("%d", &perto);
	
	if (compromisso == 0 && cidade == 1 && dinheiro == 1 && chovendo == 0){
		printf("Eu vou!");
	} else if (dinheiro == 0 && perto == 1){
		printf("Tô sem dinheiro, mas da pra ir");
	} else {
		printf("Eu não vou!");
	}
	



return 0;
}


