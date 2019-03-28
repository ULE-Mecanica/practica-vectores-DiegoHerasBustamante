#include <stdio.h> 
#include <math.h> 

float distpuntos(float pto1[2], float pto2[2]);


int main () {
	

	float punto1[2], punto2[2];
	double distancia;
	

	printf("\nIntroduzca las coordenadas para el primer punto(x,y):\n ");
	scanf("%f",&punto1[0]);
	scanf("%f", &punto1[1]);
	
	
	printf("\nIntroduzca las coordenadas para el segundo punto(x,y):\n ");
	scanf("%f",&punto2[0]);
	scanf("%f", &punto2[1]);
	
	distancia=distpuntos(punto1,punto2);
	
	printf("\nLa distancia entre lel primer y el segunda punto es %f.",distancia); 

return 0;

}

float distpuntos(float pto1[2], float pto2[2])
{

	float resultado;
	
	resultado=sqrt(pow((pto2[0] - pto1[0]),2)+pow((pto2[1]-pto1[1]),2));

	return (resultado);
}

