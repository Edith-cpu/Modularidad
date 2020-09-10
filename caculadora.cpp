
#include <stdio.h>
float suma(float, float, float); //aqui estoy nombrando una funcion ,pero que recibira tres datos de tipo flotante
int main()
{
    float num1, num2, num3, Resultado; //pertenece a mi funcion main
    printf("Introduzca el primer numero:\n");
    scanf("%f", &num1);
    printf("Introduzca el segundo numero:\n");
    scanf("%f", &num2);
    printf("Introduzca el tercer numero:\n");
    scanf("%f", &num3);
    Resultado= suma(num1, num2, num3);
    printf("El resultado es:%f\n",Resultado);
    
    return 0;
}
float suma(float num1, float num2, float num3) //vamos a declarar la funcion, declara el nombre de las variables que va recibir
{
	float Resultado; //solo es una variable, y esta separado del main
	Resultado= num1 + num2+ num3; //operaiones
	
	return Resultado; //esta funcion va a regresar el valor que tengo guardado en resultado
	
}

//float resta(float num1, float num2, float num3)
