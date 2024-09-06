#include <stdio.h>
#include <ctype.h> 


int isDigitOnly(char str[]) {
    int i = 0;
    
   
    for(i=0;str[i]!='\0';i++){
  
        if (!isdigit(str[i])) { 
            return 0; 
        }
        i++;
    }
    return 1; 
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    scanf("%s", str);

    
    if (isDigitOnly(str)) {
        printf("The string contains only digits.\n");
    } else {
        printf("The string contains non-digit characters.\n");
    }

    return 0;
}
