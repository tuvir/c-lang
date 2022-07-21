#include <stdio.h>

int fizzbuzz (int limit);

int main (){
    fizzbuzz(20);
    return 0;
}
   int fizzbuzz(int limit){
    int l;
    for(l = 1; l <= limit; l++){
        if ((l % 15) == 0)
            printf("%s", "FizzBuzz");
        
        else
            if((l % 3) == 0)
                printf("%s" , "Fizz");
            
            else
                if((l % 5) == 0)
                    printf("%s", "Buzz");
                
                else
                    printf("%d", l);
    if(l < limit)
        printf(" ");        
    }

   }