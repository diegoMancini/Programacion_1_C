#include <stdio.h>
#include <string.h>
#include <ctype.h>

int salaryCalculation(int , int);
void paysTaxes(int);
double biggerNumber(double, double);
void oneOrTwoDigits();
void scholarship();
void digitAmount();
void isAries();
void firstTrimester();
void gradeLiteral();
void isPairNumber();
void oneToHundred();
void oneToHundredV2();
void numTo30();
void average10Numbers();

int main() {
//    printf("Hello, World!\n\n");

//    int workHours = 8, hourlyRate = 150, salary = 1500;
//    double a = 6, b = 4;
//    double c,d;
//    int salaryResult = salaryCalculation(workHours, hourlyRate);
//    printf("Ejercicio 5\n");
//    printf("El salario con %d horas de trabajo, y una paga horaria de %d, es: %d", workHours, hourlyRate, salaryResult);
//    printf("\nEjercicio 6\n");
//    paysTaxes(salary);
//    printf("\nEjercicio 7\n");
//    double biggestNumber = biggerNumber(a, b);
//    printf("El mayor entre %.0lf y %.0lf es = %.0lf", a, b, biggestNumber);
//    printf("\nEjercicio 8\n");
//    printf("Primer numero: ");
//    scanf("%lf", &c);
//    printf("Segundo numero: ");
//    scanf("%lf", &d);
//    double biggestNumber2 = biggerNumber(c,d);
//    double sum = c+d;
//    double resta = c-d;
//    double mult = c*d;
//    double div = c/d;
//    if (biggestNumber2 == c) {
//        printf("El numero mas grande es %.2lf ==> || La suma es: %.2lf || La resta es: %.2lf", biggestNumber2, sum, resta);
//    } else if (biggestNumber2 == d ){
//        printf("El numero mas grande es %.2lf ==> || La multiplicacion es: %.2lf || La division es: %.2lf", biggestNumber2, mult, div);
//    } else {
//        printf("Los numeros son iguales. \n|| La suma es: %.0lf || La resta es: %.2lf || La multiplicacion es: %.0lf || La division es: %.2lf", sum, resta, mult, div);
//    }
//
//    double nota1, nota2, nota3;
//
//    printf("\nEjercicio 9\n");
//    printf("Primer nota:");
//    scanf("%lf", &nota1);
//    printf("Segunda nota:");
//    scanf("%lf", &nota2);
//    printf("Tercer nota:");
//    scanf("%lf", &nota3);
//
//    if ((nota1+nota2+nota3)/3 >= 7) {
//        printf("PROMOCIONA");
//    } else {
//        printf("A FINAL");
//    }

//     oneOrTwoDigits();
//     scholarship();
//     digitAmount();
//    isAries();
//    firstTrimester();
//    gradeLiteral();
//    isPairNumber();
//    oneToHundred();
//    oneToHundredV2();
//    numTo30();
    average10Numbers();


    return 0;
}

int salaryCalculation(int workHours, int hourlyRate) {
    int result = workHours * hourlyRate;
    return result;
}

void paysTaxes(int salary) {
    if (salary > 3000) {
        printf("Sueldo: %d ==> Debe pagar impuestos", salary);
    } else printf("Sueldo: %d ==> No debe pagar impuestos", salary);
}

double biggerNumber(double a, double b) {
    double result;
    if (a > b) {
        result = a;
    } else if (b > a) {
        result = b;
    } else {
        result = 0;
    }
    return result;
}

void oneOrTwoDigits() {
    printf("Inserte un numero de 1 o 2 digitos.");
    int result[2];
    do gets((char *) result);
    while(strlen((const char *) result) > 2  );
    (strlen((const char *) result) == 1) ? printf("1 digito") : printf("2 digitos");
}

void scholarship() {
    printf("Ingrese 3 notas y le diremos su escolaridad");
    int grade0, grade1, grade2;
    scanf("%d", &grade0);
    scanf("%d", &grade1);
    scanf("%d", &grade2);
    int result = (grade0+grade1+grade2)/3;
    if (result >= 4 && result <7) printf("Nota = %d --> Regular", result);
    else if (result >= 7) printf("Nota = %d --> Promocionado", result);
    else printf("Nota = %d --> Recursa", result);
}

void digitAmount() {
    int result[3];
    do {
        printf("Inserte un numero de 1, 2 o 3 digitos.");
        gets((char *) result);
    }
    while(strlen((const char *) result) > 3  ) ;

    if (strlen((const char *) result) == 1) printf("1 digito");
    else if (strlen((const char *) result) == 2) printf("2 digitos");
    else printf("3 digitos");
}

void isAries() {
    char name[10];
    char sign[10];
    printf("Inserte su nombre: ");
    gets(name);
    printf("Inserte su signo: ");
    gets(sign);
    if (strcmp(sign, "aries") == 0) {
        printf("%s es de %s", name, sign);
    } else printf("La persona no es de aries");
}

void firstTrimester() {
    int month;
    do {
        printf("Ingrese un mes (en numero): ");
        scanf("%d", &month);
    } while (month > 12 || month < 1);
    if (month <= 3) printf("Pertenece al primer trimestre");
    else printf("No pertenece al primer tremestre");

}

void gradeLiteral() {
    char literal;
    printf("Ingrese su nota: ");
    scanf("%c", &literal);
    switch (literal) {
        case 'A': printf("Excelente");
            break;
        case 'B': printf("Notable");
            break;
        case 'C': printf("Aprobado");
            break;
        case 'D': printf("Reprobado");
            break;
        case 'F': printf("Reprobado");
            break;
        default: printf("Tu nota");
    }


}

void isPairNumber() {
    int number;
    printf("Ingrese un numero: ");
    scanf("%d", &number);
    (number%2 == 0) ? printf("Par") : printf("Impar");
}

void oneToHundred() {
    for (int i = 1; i <= 100; ++i) {
        printf("%d\n", i);
    }
}

void oneToHundredV2() {
    int aux = 0;
    do {
        printf("%d\n", ++aux);
    } while (aux < 100);
}

void numTo30() {
    int number = 0;
    printf("Ingrese un numero random: ");
    scanf("%d", &number);
    for (int i = 0; i <= number; ++i) {
        printf("%d\n", i);
    }

}

void average10Numbers() {
    int number1, number2, number3, number4, number5, number6, number7,
        number8, number9, number10;
    int aux = 1;
    int result = 0;
    printf("Inserte 10 numeros y le daremos su promedio\n");
    printf("Numero %d: ", aux);
    aux++;

    printf("Promedio = %d", result/3);

}
