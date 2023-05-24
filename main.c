#include <locale.h>
#include <stdbool.h>

#include "calc.h"

bool running = true;

static void clear_s(void) {
    #ifdef __unix__
        system("clear");
    #elif defined(_WIN32) || defined(WIN32)
        system("cls");
    #endif
}

static void help(void) {
    printf("\tescreva: {OPÇÃO} ... {VALOR} {VALOR}\n");
    printf("\t0 = exit\t1 = soma\t2 = subtração\t\n\t3 = divisão\t4 = multiplicação\t5 = exibe ajuda\t\n\t6 = limpa a tela\t7 = calcula potenciação\n");
}

static void menu(void) {
    float a, b;
    int opt;

    printf(">> ");
    scanf("%d", &opt);
    
    if (opt == EXIT) {
        running = false;
    } else if (opt > 7 || opt < 0) {
	printf("a opção digitada não existe\n");
    } else if (opt == HELP) {
        help();
    } else if (opt == CLS) {
        clear_s();
    } else if (opt == POW) {
        scanf("%f %f", &a, &b);
        c_pow(&a, &b);
    } else {
        scanf("%f %f", &a, &b);
        switch(opt) {
            case SUM:
                sum(&a, &b);
                break;
            case SUB:
                sub(&a, &b);
                break;
            case DIV:
                divi(&a, &b);
                break;
            case MUL:
                mul(&a, &b);
                break;
            default:
                printf("a opção digitada não existe\n");
                break;
        }
    }
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "portuguese");
    printf("\t <calculadora aritmética padrão - pressione 5 para exibir ajuda>\n");
    while (running) {
        menu();
    }
    return 1;
}
