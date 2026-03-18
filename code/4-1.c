#include <stdio.h>

int main()
{
    int a, b;
    char op;
    

    scanf("%d %d %c", &a, &b, &op);

    if (op == '+'){
        int result = a + b;
        printf("%d", result);
    }

    else if (op == '-'){
        int result = a - b;
        printf("%d", result);
    }

    else if (op == '*'){
        int result = a * b;
        printf("%d", result);
    }

    else if (op == '/'){
        int result = a / b;
        printf("%d", result);
    }
    
    return 0;
}

