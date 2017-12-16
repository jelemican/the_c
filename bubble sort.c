 #include<stdio.h>
 #define N 1000
 void main() {
    int n, i, j;
    int a[N];
    printf("Type the number of elements in the array: ");
    scanf("%d", &n);
    for(i = 0 ; i < n; i++) { 
    	printf("Type the element: ");
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < n - 1; i++) { 
       for(j = 0 ; j < n - i - 1 ; j++) {  
           if(a[j] > a[j+1]) {           
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
           }
        }
    }
    	for (i = 0; i < n; i = i + 1)
	{
		printf("%d", a[i]);
		printf("\n");
	}
 }
