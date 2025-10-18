#include <stdio.h>

// Function to calculate factorial
long factorial(int n) {
	//code here
	long fact = n;
	for(int i=n-1;i>0;i--){
		fact = fact*i;
	}
	return fact;
}

// Function to calculate binomial coefficient
long binomialCoefficient(int m, int x) {
   //code here
	return factorial(m)/(factorial(m-x) * factorial(x));
	
}

int main() {
    int m, x;

   
    scanf("%d", &m);
    scanf("%d", &x);

    if (m < x) {
        printf("Error: m must be greater than x\n");
        return 1;
    }

    printf("Binomial Coefficients for m = %d:\n", m);
    for (int i = 0; i <= x; i++) {
        printf("B(%d, %d) = %ld\n", m, i, binomialCoefficient(m, i));
    }

    return 0;
}