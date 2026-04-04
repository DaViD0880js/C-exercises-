#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    
    scanf("%i",&n);
    
    if(n == 1){
    	printf("nice brother %i", n);
    	
	} else {
		printf("nao ta bom");
	}
    	
    	
	
    
    return 0;
}
