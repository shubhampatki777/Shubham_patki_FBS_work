#include<stdio.h>

//function declaration(passing array to function)
void triangleType(int sides[][3], int size);

int main() {
    int sides[][3] = {
        {5, 5, 5},  
        {5, 7, 5},   
        {4, 5, 6}  
    };
	int size = sizeof(sides) / sizeof(sides[0]);  

    triangleType(sides, size);  //function call(passing array to function)
	return 0;
}
//function definition
void triangleType(int sides[][3], int size) {
    for(int i = 0; i < size; i++) {
        int a = sides[i][0];
        int b = sides[i][1];
        int c = sides[i][2];

        printf("\nTriangle %d with sides (%d, %d, %d): ", i + 1, a, b, c);

        if(a == b && b == c)
            printf("Equilateral Triangle\n");
        else if(a == b || b == c || a == c)
            printf("Isosceles Triangle\n");
        else
            printf("Scalene Triangle\n");
    }
}
