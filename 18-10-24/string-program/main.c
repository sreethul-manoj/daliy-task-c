
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    
    printf("Enter a number: ");
    scanf("%s", str);

    int len = strlen(str);

    
    while (str[len - 1] == '0') {
        str[len - 1] = '\0';  
        len--;  
    }

    printf("After removing zeros from trailing: %s\n", str);

    return 0;
}